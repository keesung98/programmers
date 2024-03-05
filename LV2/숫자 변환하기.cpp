#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int x, int y, int n)
{
    vector<int> vis(1000001, 0);
    queue<int> q;
    q.push(x);
    while (!q.empty())
    {
        int cur = q.front(); q.pop();
        if (cur == y) return vis[cur];
        int dx[3] = { cur + n, cur * 2, cur * 3 };
        for (int dir = 0; dir < 3; dir++)
        {
            int nx = dx[dir];
            if (nx > y || vis[nx] != 0) continue;
            vis[nx] = vis[cur] + 1;
            q.push(nx);
        }
    }
    return -1;
}