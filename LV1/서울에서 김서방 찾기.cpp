#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
	for (int i = 0; i < seoul.size(); i++)
	{
		if (seoul[i]=="Kim")
		{
			answer = to_string(i);
		}
	}
    return "�輭���� "+answer+"�� �ִ�";
}