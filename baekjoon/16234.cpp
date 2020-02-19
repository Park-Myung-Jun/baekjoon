//#include <iostream>
//#include <queue>
//#define thre 50
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
//int map[thre][thre] = { 0 }, N, L, R, mov[2][4] = { {0,0,1,-1},{1,-1,0,0} }, ch[thre][thre] = { 0 };
//int sums[thre*thre + 1] = { 0 }, ns[thre*thre + 1] = { 0 };
//bool isMig;
//
///*void print() {
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++)
//			cout << map[i][j] << ' ';
//		cout << '\n';
//	}
//	cout << '\n';
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++)
//			cout << ch[i][j] << ' ';
//		cout << '\n';
//	}
//	cout << '\n';
//	for (int i = 0; i < N*N + 1; i++)
//		cout << sums[i] << ' ';
//	cout << '\n';
//	for (int i = 0; i < N*N + 1; i++)
//		cout << ns[i] << ' ';
//	cout << '\n';
//}*/
//
//int abs(int a, int b) {
//	return (a > b) ? (a - b) : (b - a);
//}
//
//void clear() {
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			ch[i][j] = 0;
//	for (int i = 0; i < N*N + 1; i++) {
//		sums[i] = 0;
//		ns[i] = 0;
//	}
//}
//
//void calc() {
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			if(ch[i][j])
//				map[i][j] = sums[ch[i][j]] / ns[ch[i][j]];
//}
//
//void bfs(int y, int x) {
//	queue<Point> q;
//	q.push(Point(y, x));
//	int key = ch[y][x] = y * N + x + 1;
//	sums[key] += map[y][x];
//	ns[key]++;
//	while (!q.empty()) {
//		Point t = q.front();
//		q.pop();
//		//cout << "start " << t.y << ' ' << t.x << '\n';
//		for (int i = 0; i < 4; i++) {
//			int Y = t.y + mov[0][i], X = t.x + mov[1][i], dif = abs(map[t.y][t.x], map[Y][X]);
//			if (0 <= Y && Y < N && 0 <= X && X < N && !ch[Y][X] && L <= dif && dif <= R) {
//				//cout << "dfsing " << Y << ' ' << X << '\n';
//				ns[key]++;
//				sums[key] += map[Y][X];
//				ch[Y][X] = key;
//				q.push(Point(Y, X));
//				isMig = true;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int times = 0;
//	cin >> N >> L >> R;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			cin >> map[i][j];
//
//	while (true)
//	{
//		clear();
//		isMig = false;
//		for (int i = 0; i < N; i++)
//			for (int j = 0; j < N; j++)
//			{
//				if (ch[i][j] != 0)
//					continue;
//				bfs(i, j);
//			}
//		calc();
//		//print();
//		if (!isMig)
//			break;
//
//		times++;
//		
//	}
//
//	cout << times << '\n';
//
//	return 0;
//}