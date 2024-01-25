#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 1;
    int select = section[0];
    for (int i = 0; i < section.size(); i++) {
        if ((select + m) <= section[i]) {
            select = section[i];
            answer++;
        }

    }
    return answer;
}