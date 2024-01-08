#include <string>
#include <vector>
#include <algorithm>
#define MAX 10000001

using namespace std;

bool cmp(int& a, int& b) {
    return a > b;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<int> kind(MAX);

    for (int t : tangerine) {
        kind[t]++;
    }

    sort(kind.begin(), kind.end(), cmp);

    for (int i = 0; i < kind.size(); i++) {
        if (kind[i] < k) {
            answer++;
            k -= kind[i];
        }
        else if (kind[i] >= k) {
            answer++;
            break;
        }
    }

    return answer;
}