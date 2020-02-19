//#include <iostream>
//#include <vector>
//#include <queue>
//#define thre 50
//#define thre_m 13
//using namespace std;
//
//class Point {
//public:
//	int y, x;
//	Point(int y, int x) {
//		this->y = y;
//		this->x = x;
//	}
//};
//
//int abs(int a, int b) {
//	return (a > b) ? (a - b) : (b - a);
//}
//
//int distance(Point a, Point b) {
//	return abs(a.x, b.x) + abs(a.y, b.y);
//}
//
//int map[thre][thre] = { 0 }, N, M, seq[thre_m] = { 0 }, mov[2][4] = { {0,0,1,-1},{1,-1,0,0} };
//bool ch[thre_m] = { 0 };
//vector<Point> home, chick;
//int small = 0x7fffffff;
//
//int find() {
//	int total = 0;
//	for (int i = 0; i < home.size(); i++)
//	{
//		int min = 0x7fffffff;
//		for (int j = 0; j < M; j++)
//		{
//			int dist = distance(home[i], chick[seq[j]]);
//			if (dist < min)
//				min = dist;
//		}
//		total += min;
//	}
//	return total;
//}
//
//void map_make() {
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			if (map[i][j] == 2)
//				map[i][j] = 0;
//	for (int i = 0; i < M; i++)
//		map[chick[i].y][chick[i].x] = 2;
//}
//
//void dfs(int cnt, int idx) {
//	if (cnt == M) {
//		map_make();
//
//		int tmp = find();
//		if (tmp < small)
//			small = tmp;
//		return;
//	}
//	for (int i = idx; i < chick.size(); i++)
//		if (!ch[i])
//		{
//			seq[cnt] = i;
//			ch[i] = true;
//			dfs(cnt + 1, i+1);
//			ch[i] = false;
//		}
//}
//
//int main()
//{
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//		{
//			cin >> map[i][j];
//			if (map[i][j] == 1)
//				home.push_back(Point(i, j));
//			if (map[i][j] == 2)
//				chick.push_back(Point(i, j));
//		}
//
//	dfs(0, 0);
//
//	cout << small << '\n';
//
//	return 0;
//}