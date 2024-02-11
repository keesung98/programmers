#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

vector<vector<int>>Key = { {1,2,3},{4,5,6},{7,8,9},{-2,0,-1} };

int Len(int Point, int Location)
{
    int PointX = 0;
    int PointY = 0;
    int LocationX = 0;
    int LocationY = 0;
    for (int i = 0; i < Key.size(); i++)
    {
        for (int j = 0; j < Key[0].size(); j++)
        {
            if (Key[i][j] == Point)
            {
                PointX = i;
                PointY = j;
            }
            if (Key[i][j] == Location)
            {
                LocationX = i;
                LocationY = j;
            }
        }
    }
    return abs(LocationX - PointX) + abs(LocationY - PointY);
}

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int LocationL = -2;
    int LocationR = -1;

    for (const auto i : numbers)
    {
        if (i == 1 || i == 4 || i == 7)
        {
            answer += "L";
            LocationL = i;
        }
        else if (i == 3 || i == 6 || i == 9)
        {
            answer += "R";
            LocationR = i;
        }
        else
        {
            int LToLen = Len(LocationL, i);
            int RToLen = Len(LocationR, i);

            if (LToLen > RToLen)
            {
                answer += "R";
                LocationR = i;
            }
            else if (LToLen < RToLen)
            {
                answer += "L";
                LocationL = i;
            }
            else
            {
                if (hand == "right")
                {
                    answer += "R";
                    LocationR = i;
                }
                else
                {
                    answer += "L";
                    LocationL = i;
                }
            }
        }
    }
    return answer;
}