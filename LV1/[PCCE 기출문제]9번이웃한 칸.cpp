#include <string>
#include <vector>

using namespace std;

int L[] = { 1,-1,0,0 };
int T[] = { 0,0,1,-1 };

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    for (int i = 0; i < 4; i++)
    {
        if ((h + L[i]) >= 0 && (w + T[i]) >= 0 && (h + L[i]) <= (board.size() - 1) && (w + T[i]) <= (board.size() - 1))
        {
            if (board[h][w] == board[h + L[i]][w + T[i]])
            {
                answer++;
            }
        }
    }
    return answer;
}