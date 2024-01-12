#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> fin;
    for (int i = 0; i < speeds.size(); i++) {
        int day = 0;
        while (speeds[i] * day < (100 - progresses[i])) {
            day++;
        }
        fin.push_back(day);
    }
    int max = fin[0];
    int cnt = 0;
    for (int i = 0; i < fin.size(); i++) {
        if (max < fin[i]) {
            max = fin[i];
            answer.push_back(cnt);
            cnt = 1;
        }
        else {
            cnt++;
        }
    }
    answer.push_back(cnt);
    return answer;
}