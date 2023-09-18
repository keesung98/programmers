#include <string>
#include <vector>
using namespace std;

vector<int> Eratosthenes(int n)
{
	bool arr[1000001];
	for (int i = 0; i <= n; i++) arr[i] = false;
	arr[0] = arr[1] = true;

	vector<int> prime;
	for (int i = 2; i <= n; i++)
	{
		if (arr[i])continue;
		prime.push_back(i);
		for (int j = i * 2; j <= n; j += i)arr[j] = true;
	}
	return prime;
}

int solution(int n) {
	vector<int> prime = Eratosthenes(n);
	int answer=prime.size();
    return answer;
}