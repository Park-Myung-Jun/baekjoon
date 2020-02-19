//#include <iostream>
//#include <queue>
//#define thre 16
//using namespace std;
//
//class Point {
//public:
//	int y, x, d;
//	Point(int y, int x, int d) {
//		this->y = y;
//		this->x = x;
//		this->d = d;
//	}
//};
//
//int N, map[thre][thre] = { 0 }, mov[2][3] = { {0,1,1},{1,1,0} }, arrow_size[3] = { 2,3,2 }, arrow[3][3] = { {0,1},{0,1,2},{1,2} };
//int ans = 0, sums[thre][thre] = { 0 };
//
//void dfs(int y, int x) {
//	queue<Point> q;
//	q.push(Point(y, x, 0));
//	while (!q.empty()) {
//		Point tmp = q.front();
//		q.pop();
//		if (tmp.y == N - 1 && tmp.x == N - 1)
//		{
//			ans++;
//			continue;
//		}
//		for (int i = 0; i < arrow_size[tmp.d]; i++) {
//			int Y = tmp.y + mov[0][arrow[tmp.d][i]], X = tmp.x + mov[1][arrow[tmp.d][i]];
//			if (Y < N && X < N)
//			{
//				if (arrow[tmp.d][i] == 1 && map[Y][X] == 0 && map[Y-1][X] == 0 && map[Y][X-1] == 0)
//					q.push(Point(Y, X, arrow[tmp.d][i]));
//				else if ((arrow[tmp.d][i] == 0 || arrow[tmp.d][i] == 2) && map[Y][X] == 0)
//					q.push(Point(Y, X, arrow[tmp.d][i]));
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			cin >> map[i][j];
//
//	dfs(0, 1);
//
//	cout << ans << '\n';
//	
//	return 0;
//}