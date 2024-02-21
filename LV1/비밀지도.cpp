#include <string>
#include <vector>
#include <bitset>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer(n, string(n, ' '));
    for (int i = 0; i < n; i++) arr1[i] = arr1[i] | arr2[i];
    for (int i = 0; i < n; i++) {
        string decoded = bitset<16>(arr1[i]).to_string().substr(16 - n);
        for (int j = 0; j < n; j++) {
            if (decoded[j] == '1') answer[i][j] = '#';
        }
    }
    return answer;
}