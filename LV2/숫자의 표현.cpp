#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
	for (int i = 1; i <= n; i++)
	{
		int sum = 0;
		int start = i;
		while (sum < n)
		{
			sum += start;
			start++;
			cout << sum << " ";
		}
		if (sum == n)
		{
			answer++;
			cout << answer << " ";
		}
	}
    return answer;
}