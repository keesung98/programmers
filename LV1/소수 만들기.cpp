#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool prime(int n) {
    for (int i = 2; i < (n + 1) / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    int sum;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 2; i++) {
        for (int j = i + 1; j < nums.size() - 1; j++) {
            for (int k = j + 1; k < nums.size(); k++) {
                sum = nums[i] + nums[j] + nums[k];
                if (prime(sum) == true) {
                    answer++;
                }
            }
        }
    }

    return answer;
}