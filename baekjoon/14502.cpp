//#include <iostream>
//#include <vector>
//#include <queue>
//#define thre 8
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
//int map[thre][thre] = { 0 }, N, M, seq[3] = { 0 }, maximum = 0;
//bool ch_map[thre][thre] = { 0 };
//vector<Point> zero, two;
//vector<bool> ch;
//
//int count() {
//	int c = 0;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			if (map[i][j] == 0 && !ch_map[i][j])
//				c++;
//			ch_map[i][j] = false;
//		}
//
//	return c;
//}
//
//int dfs() {
//	int move[2][4] = { {0,0,1,-1},{1,-1,0,0} };
//	queue<Point> q;
//	for (int i = 0; i < two.size(); i++)
//		q.push(two[i]);
//	while (!q.empty()) {
//		Point t = q.front();
//
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int Y = t.y + move[0][i], X = t.x + move[1][i];
//			if (0 <= Y && Y < N && 0 <= X && X < M && map[Y][X] == 0 && !ch_map[Y][X])
//			{
//				ch_map[Y][X] = true;
//				q.push(Point(Y, X));
//			}
//		}
//	}
//
//	return count();
//}
//
//void comb(int cnt, int idx) {
//	if (cnt == 3)
//	{
//		for (int i = 0; i < 3; i++)
//			map[zero[seq[i]].y][zero[seq[i]].x] = 1;
//		int tmp = dfs();
//		if (maximum < tmp)
//			maximum = tmp;
//		for (int k = 0; k < N; k++)
//			for (int j = 0; j < M; j++)
//				ch_map[k][j] = false;
//		for (int i = 0; i < 3; i++)
//			map[zero[seq[i]].y][zero[seq[i]].x] = 0;
//		return;
//	}
//	for (int i = idx; i < zero.size(); i++) {
//		if (!ch[i]) {
//			seq[cnt] = i;
//			ch[i] = true;
//			comb(cnt + 1, i + 1);
//			ch[i] = false;
//		}
//	}
//}
//
//int main()
//{
//	
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			cin >> map[i][j];
//			if (map[i][j] == 0)
//			{
//				zero.push_back(Point(i, j));
//				ch.push_back(false);
//			}
//			if (map[i][j] == 2)
//				two.push_back(Point(i, j));
//		}
//
//	comb(0, 0);
//
//	cout << maximum << '\n';
//
//	return 0;
//}