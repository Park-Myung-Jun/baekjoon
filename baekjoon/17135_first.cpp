//#include <iostream>
//#include <vector>
//#include <queue>
//#define thre 15
//int N, M, D, map[thre][thre] = { 0 }, seq[thre] = { 0 }, maxi = 0, mov[2][3] = { {0,-1,0},{-1,0,1} };
//bool ch[thre] = { 0 }, mch[thre][thre] = { 0 }, isE = false;
//int maxi_t = 0, map_save[thre][thre] = { 0 };
//using namespace std;
//
//class Point {
//public:
//	int x, y, d;
//	Point(int y, int x, int d) {
//		this->x = x;
//		this->y = y;
//		this->d = d;
//	}
//};
//
//void copy() {
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			map[i][j] = map_save[i][j];
//}
//
//void clear() {
//	for (int i = N-D; i < N; i++)
//		for (int j = 0; j < M; j++)
//			mch[i][j] = false;
//}
//
//void print() {
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++)
//			cout << map[i][j] << ' ';
//		cout << '\n';
//	}
//	cout << '\n';
//}
//
//void shoot(vector<Point> t) {
//	for (int i = 0; i < t.size(); i++)
//	{
//		if (map[t[i].y][t[i].x] == 1) {
//			map[t[i].y][t[i].x] = 0;
//			maxi_t++;
//		}
//	}
//}
//
//void march() {
//	for (int i = 0; i < M; i++)
//		map[N-1][i] = 0;
//	for (int i = N-2; i >= 0; i--)
//		for (int j = 0; j < M; j++)
//			if (map[i][j] == 1)
//			{
//				map[i + 1][j] = map[i][j];
//				isE = true;
//			}
//	for (int i = 0; i < M; i++)
//		map[0][i] = 0;
//}
//
//Point* dfs(int y, int x, int d) {
//	queue<Point> q;
//	q.push(Point(y, x, d));
//	while (!q.empty()) {
//		Point tmp = q.front();
//		q.pop();
//		for (int i = 0; i < 3; i++) {
//			int Y = tmp.y + mov[0][i], X = tmp.x + mov[1][i];
//			if (0 <= Y && Y < N && 0 <= X && X < M && !mch[Y][X] && tmp.d + 1 <= D)
//			{
//				if (map[Y][X] == 1)
//					return new Point(Y, X, tmp.d + 1);
//				mch[Y][X] = true;
//				q.push(Point(Y, X, tmp.d + 1));
//			}
//		}
//	}
//
//	return NULL;
//}
//
//void fs(int cnt, int idx) {
//	if (cnt == 3) {
//		while(true)
//		{
//			vector<Point> t;
//			for (int i = 0; i < 3; i++)
//			{
//				Point* aixs = dfs(N, seq[i], 0);
//				if (aixs != NULL)
//					t.push_back(*aixs);
//				clear();
//			}
//			
//			for (int i = 0; i < t.size(); i++)
//			{
//				if (map[t[i].y][t[i].x] == 1) {
//					map[t[i].y][t[i].x] = 0;
//					maxi_t++;
//				}
//			}
//			
//			isE = false;
//			
//			for (int i = 0; i < M; i++)
//				map[N - 1][i] = 0;
//			for (int i = N - 2; i >= 0; i--)
//				for (int j = 0; j < M; j++)
//					if (map[i][j] == 1)
//					{
//						map[i + 1][j] = map[i][j];
//						map[i][j] = 0;
//						isE = true;
//					}
//			for (int i = 0; i < M; i++)
//				map[0][i] = 0;
//			
//			//print();
//
//			if (!isE)
//				break;
//		}
//		if (maxi < maxi_t)
//			maxi = maxi_t;
//		copy();
//		maxi_t = 0;
//	}
//	for (int i = idx; i < M; i++) {
//		if (!ch[i]) {
//			seq[cnt] = i;
//			ch[i] = true;
//			fs(cnt + 1, i + 1);
//			ch[i] = false;
//		}
//	}
//}
//
//int main()
//{
//	cin >> N >> M >> D;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			cin >> map[i][j];
//			map_save[i][j] = map[i][j];
//		}
//
//	fs(0, 0);
//
//	cout << maxi << '\n';
//
//	return 0;
//}