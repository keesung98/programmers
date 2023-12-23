#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int maxInt = 0;
    for (int i = 1; i <= m; i++) {
        if (n % i == 0 && m % i == 0) {
            maxInt = i;
        }
    }
    int new_n = n, new_m = m;
    while (new_n != new_m) {
        if (new_m > new_n) {
            new_n += n;
        }
        else if (new_n > new_m) {
            new_m += m;
        }
    }
    answer.push_back(maxInt);
    answer.push_back(new_n);
    return answer;
}