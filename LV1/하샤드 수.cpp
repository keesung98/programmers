#include <string>
#include <vector>

using namespace std;
vector<int> v;

bool solution(int x) {
    bool answer = true;
	int result = x;
	while (x>0)
	{
		v.push_back(x % 10);
		x = x / 10;
	}
	int sum = 0;
	for (int i = 0; i < v.size(); i++)
	{
		sum += v[i];
	}
	if (result%sum==0)
	{
		answer = true;
	}
	else { answer = false; }
    return answer;
}