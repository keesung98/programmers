#include <string>
#include <vector>

using namespace std;

void hanoi(vector<vector<int>>& answer,int num, int start, int dest)
{
    if (num == 1)
    {
        return answer.push_back({ start, dest });
    }
    hanoi(answer, num - 1, start, 6 - start - dest);
    answer.push_back({ start, dest });
    hanoi(answer, num - 1, 6 - start - dest, dest);
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    hanoi(answer, n, 1, 3);
    return answer;
}
