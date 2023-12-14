#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> number) {
    sort(number.begin(), number.end());
    int answer = 0;
    for (int i = 0; i < number.size() - 2; i++)
    {
        for (int j = i + 1; j < number.size() - 1; j++)
        {
            for (int k = j + 1; k < number.size(); k++)
            {
                if (number[i] + number[j] + number[k] == 0)
                {
                    answer++;
                }
            }
        }
    }

    return answer;
}