#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int x_count=0,y_count=0;
    char x;
    for (int i = 0; i < s.size(); i++)
    {
        if (x_count==0)
        {
            x = s[i];
            x_count++;
            answer++;
        }
        else
        {
            if(x_count!=y_count)
            {
                if(x==s[i])
                {
                    x_count++;
                }
                else
                {
                    y_count++;
                }
            }
            if (x_count==y_count)
            {
                x_count = 0, y_count = 0;
            }
        }
    }
    return answer;
}