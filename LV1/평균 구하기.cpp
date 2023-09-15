#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int arrsize = arr.size();
    for (int i = 0; i < arrsize; i++)
    {
        answer += arr[i];
    }
    answer = answer / arrsize;
    return answer;
}