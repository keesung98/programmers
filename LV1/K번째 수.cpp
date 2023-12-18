#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (int i = 0; i < commands.size(); i++) {
        vector<int> cutArray;
        for (int j = commands[i][0]; j <= commands[i][1]; j++) {
            cutArray.push_back(array[j - 1]);
        }
        sort(cutArray.begin(), cutArray.end());
        answer.push_back(cutArray[commands[i][2] - 1]);
    }
    return answer;
}