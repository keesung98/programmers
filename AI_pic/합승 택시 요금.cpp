#include <vector>

using namespace std;

#define INF 1e7

int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
    int answer = INF;

    vector<vector<int>> dist(n + 1, vector<int>(n + 1, INF));
    for (int i = 1; i <= n; ++i) dist[i][i] = 0;

    for (auto fare : fares) {
        dist[fare[0]][fare[1]] = fare[2];
        dist[fare[1]][fare[0]] = fare[2];
    }

    // Floyd Warshall Algorithm 
    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        // Start -> X + X -> A + X -> B
        int total = dist[s][i] + dist[i][a] + dist[i][b];

        answer = min(answer, total);
    }

    return answer;
}