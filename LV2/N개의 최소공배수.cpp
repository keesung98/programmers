#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int solution(vector<int> arr) {
    int answer = 0;
    while (arr.size()>1)
    {
        int a = arr.back();
        arr.pop_back();
        int b = arr.back();
        arr.pop_back();
        int max_sum =a*b/gcd(a, b);
        arr.push_back(max_sum);
    }
    answer = arr.front();
    return answer;
}