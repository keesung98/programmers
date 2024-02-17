#include <string>
#include <vector>
#include <set>

using namespace std;

set<int> Sum;

void ElementsSum(vector<int> v, int len)
{
    for (int i = 0; i < v.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < (len + i); j++)
        {
            int idx = j % v.size();
            sum += v[idx];
        }
        Sum.emplace(sum);
    }
}

int solution(vector<int> elements) {
    for (int i = 1; i <= elements.size(); i++)
    {
        ElementsSum(elements, i);
    }
    return Sum.size();
}