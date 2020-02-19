#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

class Point {
public:
	int x, y, d;
	Point(int x, int y, int d) {
		this->x = x;
		this->y = y;
		this->d = d;
	}
};

int main()
{
	int N, M, move[4][2] = { {1,0}, {-1,0}, {0,1}, {0,-1} }, min = 10000;
	short map[101][101] = { 0 }, dist[101][101] = { 0 };
	cin >> N >> M;
	string str[101];
	for (int i = 0; i < N; i++)
		cin >> str[i];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			map[i][j] = (short)(str[i][j] - '0');

	stack<Point> p;

	p.push(Point(0, 0, 0));

	int x, y, d;
	while (!p.empty()) {
		Point tmp = p.top();
		x = tmp.x;
		y = tmp.y;
		d = tmp.d;
		map[y][x] = 2;
		int newX = x + move[d][0];
		int newY = y + move[d][1];
		if (0 <= newX && newX < M && 0 <= newY && newY < N && map[newY][newX] == 1)
		{
			p.push(Point(newX, newY, 0));
			if (newX == M - 1 && newY == N - 1) {
				if (p.size() < min)
					min = p.size();
			}
		}
		if (d == 4)
		{
			map[newY][newX] = 1;
			p.pop();
		}
	}

	cout << min << '\n';

	return 0;
}