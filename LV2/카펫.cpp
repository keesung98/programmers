#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    for (int x = 1; x < brown; x++) {
        for (int y = 1; y <= x; y++) {
            if (x * y == sum && 2 * (x + y - 2) == brown) {
                answer.push_back(x);
                answer.push_back(y);
            }
        }
    }
    return answer;
}