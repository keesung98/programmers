#include <string>
#include <vector>

using namespace std;

int countOne(int n) {
    int ret = 0;
    for (int i = 0; i < 31; i++) {
        if (n & 0x01 << i)
            ret++;
    }
    return ret;
}

int solution(int n) {
    int standard = countOne(n);

    while (1) {
        n++;
        if (standard == countOne(n))
            return n;
    }
}