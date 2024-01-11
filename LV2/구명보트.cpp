#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end());
    int index = 0;
    while (people.size() > index) {
        if (people[index] + people.back() <= limit) {
            people.pop_back();
            index++;
        }
        else {
            people.pop_back();
        }
        answer++;
    }
    return answer;
}