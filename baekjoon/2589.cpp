//#include <iostream>
//#include <string>
//#include <cstring>
//#include <queue>
//#define thre 52
//using namespace std;
//
//class Point {
//public:
//	int x, y, plus;
//	Point(int y, int x, int plus) {
//		this->x = x;
//		this->y = y;
//		this->plus = plus;
//	}
//};
//
//string map[thre];
//int mov[2][4] = { {0,0,1,-1},{1,-1,0,0} }, N, M, l;
//bool ch[thre][thre] = { 0 };
//
//void clear() {
//	for (int i = 1; i <= N ; i++)
//		for (int j = 1; j <= M; j++)
//			ch[i][j] = false;
//}
//
//void bfs(int y, int x, int plus) {
//	queue<Point> q;
//	q.push(Point(y, x, plus));
//	ch[y][x] = true;
//	while (!q.empty()) {
//		Point tmp = q.front();
//		q.pop();
//		if (l < tmp.plus)
//			l = tmp.plus;
//		for (int i = 0; i < 4; i++)
//		{
//			int Y = tmp.y + mov[0][i], X = tmp.x + mov[1][i];
//			if (map[Y][X] == 'L' && !ch[Y][X])
//			{
//				ch[Y][X] = true;
//				q.push(Point(Y, X, tmp.plus + 1));
//			}
//		}
//	}
//}
//
//int main()
//{
//	int max = 0;
//	cin >> N >> M;
//
//	map[0] = string(' ', M);
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> map[i];
//		map[i] = ' ' + map[i] + ' ';
//	}
//	map[N + 1] = string(' ', M);
//
//	for (int i = 1; i <= N; i++)
//		for (int j = 1; j <= M; j++)
//			if (map[i][j] == 'L')
//			{
//				l = 0;
//				bfs(i, j, 0);
//				if (l > max)
//					max = l;
//				clear();
//			}
//
//	cout << max << '\n';
//
//	return 0;
//}