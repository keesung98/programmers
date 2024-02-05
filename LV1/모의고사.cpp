#include <string>
#include <vector>

using namespace std;

vector<int> num_1 = { 1,2,3,4,5 };
vector<int> num_2 = { 2,1,2,3,2,4,2,5 };
vector<int> num_3 = { 3,3,1,1,2,2,4,4,5,5 };

int solved(vector<int> answers, vector<int> solve) {
    int cur = 0;
    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == (solve[i % solve.size()])) {
            cur++;
        }
    }
    return cur;
}

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int max_1 = solved(answers, num_1);
    int max_2 = solved(answers, num_2);
    int max_3 = solved(answers, num_3);
    if (max_1 >= max_2 && max_1 >= max_3) { answer.push_back(1); }
    if (max_2 >= max_1 && max_2 >= max_3) { answer.push_back(2); }
    if (max_3 >= max_2 && max_3 >= max_1) { answer.push_back(3); }
    return answer;
}