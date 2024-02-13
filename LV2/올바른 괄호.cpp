#include <string>
#include <iostream>
#include <vector>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    vector<string> S;

    if (s[0] == ')' || s[s.size() - 1] == '(')
    {
        answer = false;
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                S.push_back("(");
            }
            else
            {
                if (S.back() == "(")
                {
                    S.pop_back();
                }
                else
                {
                    return false;
                }
            }
        }
        if (S.size() != 0)
        {
            answer = false;
        }
    }

    return answer;
}