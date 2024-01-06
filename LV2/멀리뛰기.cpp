#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    int dp[2001];
    dp[1] = 1;
    dp[2] = 2;
    long long answer = 0;
    if (n >= 3) {
        for (int i = 3; i <= n; i++) {
            dp[i] = (dp[i - 1] + dp[i - 2]) % 1234567;
        }
        answer = dp[n];
    }
    else {
        answer = dp[n];
    }
    return answer;
}
