#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int sum, total_tmp = total;
    while (1) {
        sum = 0;
        for (int j = 0; j < num; j++) {
            sum += total_tmp - j;
        }
        if (sum == total) {
            for (int j = num; j > 0; j--) {
                answer.push_back(total_tmp - j + 1);
            }
            break;
        }
        total_tmp--;
    }
    return answer;
}