#include <string>
#include <vector>
#include <map>
using namespace std;

typedef struct {
	int x, y;
}box;

box moved[4] = { {-1,0},{1,0},{0,-1},{0,1} };
map<char, int> mapping = { {'N',0},{'S',1},{'W',2},{'E',3} };

vector<int> solution(vector<string> park, vector<string> routes) {
	pair<int, int> answer;
	int H = park.size();
	int W = park[0].size();

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (park[i][j] == 'S') {
				answer = { i,j };
				break;
			}
		}
	}
	for (const auto& route : routes) {
		char op = mapping[route[0]];
		int n = route[2] - 48;

		int nx = answer.first;
		int ny = answer.second;

		while (n--) {
			nx += moved[op].x;
			ny += moved[op].y;

			if ((nx < 0 || H <= nx || ny < 0 || W <= ny) || park[nx][ny] == 'X')
				break;
		}

		if (n < 0) answer = { nx, ny };
	}

	return { answer.first, answer.second };
}