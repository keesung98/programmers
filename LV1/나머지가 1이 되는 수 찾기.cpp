#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int t = n - 1;
    int answer = t;
    for (int i = 2; i <= t; i++)
    {
        if (t % i == 0 && answer>i)answer = i;
    }
    return answer;
}