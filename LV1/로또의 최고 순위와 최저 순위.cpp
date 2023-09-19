#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int win = 0;
    int zero_count = 0;
    for (int i = 0; i < 6; i++)
    {
        if (lottos[i] == 0)
        {
            zero_count++;
        }
        else
        {
            for (int j = 0; j < 6; j++)
            {
                if (lottos[i] == win_nums[j]) {
                    win++;
                }
            }
        }
    }
    vector<int> answer;
    answer.push_back((6 - win - zero_count+1)>6?6:(6 - win - zero_count + 1));
    answer.push_back((6 - win+1)>6?6:(6-win+1));
    return answer;
}