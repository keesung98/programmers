#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
	if (num==1)
	{
		return 0;
	}
	while (num!=1)
	{
		if (answer > 500)
		{
			return -1;
		}
		if (num%2==0)
		{
			num = num / 2;
		}
		else if (num%2==1)
		{
			num = 3 * num + 1;
		}
		answer++;
	}
    return answer;
}