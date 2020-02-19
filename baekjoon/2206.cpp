//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//#define thre 1000
//using namespace std;
//
//class Point {
//public:
//	int y, x, b;
//	Point(int y, int x, int b) {
//		this->x = x;
//		this->y = y;
//		this->b = b;
//	}
//};
//
//string map[thre];
//int N, M, mov[2][4] = { {1,-1,0,0}, {0,0,1,-1} }, mini = 1000000;
//int d[thre][thre][2];
//bool possible = false;
//
//void bfs() {
//	queue<Point> q;
//	q.push(Point(0, 0, 0));
//	while (!q.empty()) {
//		Point t = q.front();
//		q.pop();
//		for (int i = 0; i < 4; i++)
//		{
//			if (t.y == N - 1 && t.x == M - 1)
//			{
//				possible = true;
//				if (d[t.y][t.x][0] != 0 && d[t.y][t.x][0] < mini)
//					mini = d[t.y][t.x][0];
//				if (d[t.y][t.x][1] != 0 && d[t.y][t.x][1] < mini)
//					mini = d[t.y][t.x][1];
//			}
//			int Y = t.y + mov[0][i], X = t.x + mov[1][i];
//			if (0 <= Y && Y < N && 0 <= X && X < M)
//			{
//				if (map[Y][X] == '0' && d[Y][X][t.b] == 0)
//				{
//					q.push(Point(Y, X, t.b));
//					d[Y][X][t.b] = d[t.y][t.x][t.b] + 1;
//				}
//				if (map[Y][X] == '1' && t.b == 0)
//				{
//					q.push(Point(Y, X, 1));
//					d[Y][X][1] = d[t.y][t.x][0] + 1;
//				}
//				/*if (Y == N - 1 && X == M - 1)
//				{
//					possible = true;
//					if (d[Y][X][0] != 0 && d[Y][X][0] < mini)
//						mini = d[Y][X][0];
//					if (d[Y][X][1] != 0 && d[Y][X][1] < mini)
//						mini = d[Y][X][1];
//				}*/
//			}
//		}
//	}
//}
//
//int main()
//{
//
//
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		cin >> map[i];
//
//	d[0][0][0] = 1;
//
//	bfs();
//
//	if (possible)
//		cout << mini << '\n';
//	else
//		cout << -1 << '\n';
//
//
//	return 0;
//}