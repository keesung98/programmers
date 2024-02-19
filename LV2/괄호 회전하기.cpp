#include <string>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

unordered_map <char, char> m = { {'{', '}'}, {'[', ']'}, {'(', ')'} };

int Check(string str)
{
    stack <char> st;

    for (int i = 0; i < str.size(); i++)
    {
        if (m[str[i]]) st.push(str[i]);
        else if (!st.empty() && m[st.top()] == str[i]) st.pop();
        else st.push(str[i]);
    }
    if (!st.empty()) return (0);
    return (1);
}

int solution(string s)
{
    int answer = 0, len = s.size();
    for (int i = 0; i < len; i++)
    {
        string tmp = s.substr(i, len - i) + s.substr(0, i);
        answer += Check(tmp);
    }
    return answer;
}