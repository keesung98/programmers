#include <string>
#include <vector>
#include<algorithm>

using namespace std;
bool desc(int a, int b) {
    return a > b;
}

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    for (int i = 0; i < score.size(); i++) {
        vector<int> win;
        for (int j = 0; j <= i; j++) {
            win.push_back(score[j]);
        }
        sort(win.begin(), win.end(), desc);
        if (win.size() < k) {
            answer.push_back(win[i]);
        }
        else {
            answer.push_back(win[k - 1]);
        }
        win.clear();
    }
    return answer;
}