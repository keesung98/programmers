#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    bool Plus = true;
    int answer = 0;
    int brige = common[1] - common[0];
    for (int i = 2; i < common.size(); i++) {
        if ((common[i] - common[i - 1]) != brige) {
            Plus = false;
            break;
        }
    }
    if (Plus == true) {
        answer = common[common.size() - 1] + brige;
    }
    else {
        answer = common[common.size() - 1] * (common[1] / common[0]);
    }
    return answer;
}