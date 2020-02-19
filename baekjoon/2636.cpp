//#include <iostream>
//#include <queue>
//#define thre 100
//using namespace std;
//
//class Point {
//public:
//	int y, x;
//	Point(int y, int x) {
//		this->x = x;
//		this->y = y;
//	}
//};
//
//int map[thre][thre] = { 0 }, N, M, mov[2][4] = { {0,0,1,-1},{1,-1,0,0} }, num, res;
//bool ch[thre][thre] = { 0 };
//
///*void print() {
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++)
//			cout << map[i][j] << ' ';
//		cout << '\n';
//	}
//	cout << '\n';
//}*/
//
//bool isZero() {
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			if (map[i][j] != 0)
//				return false;
//
//	return true;
//}
//
//void meltNclear() {
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			if (map[i][j] == 2 || map[i][j] == 3)
//				map[i][j] = 0;
//			ch[i][j] = false;
//		}
//}
//
//void air() {
//	for(int i=0;i<N;i++)
//		for(int j=0;j<M;j++)
//			for (int k = 0; k < 4; k++)
//			{
//				int Y = i + mov[0][k], X = j + mov[1][k];
//				if (0 <= Y && Y < N && 0 <= X && X < M && map[i][j] == 1 && map[Y][X] == 2)
//				{
//					map[i][j] = 3;
//					num++;
//					break;
//				}
//			}
//}
//
//void bfs(int y, int x) {
//	queue<Point> q;
//	q.push(Point(y, x));
//	while (!q.empty()) {
//		Point t = q.front();
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int Y = t.y + mov[0][i], X = t.x + mov[1][i];
//			if (0 <= Y && Y < N && 0 <= X && X < M && !ch[Y][X] && map[Y][X] == 0) {
//				ch[Y][X] = true;
//				map[Y][X] = 2;
//				q.push(Point(Y, X));
//			}
//		}
//	}
//}
//
//int main()
//{
//	int time = 0;
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			cin >> map[i][j];
//	while (true)
//	{
//		num = 0;
//		bfs(0, 0);
//		air();
//		meltNclear();
//		res = num;
//		time++;
//		if (isZero())
//			break;
//	}
//
//	cout << time << '\n' << res << '\n';
//
//	return 0;
//}