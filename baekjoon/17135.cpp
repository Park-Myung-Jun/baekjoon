//#include <iostream>
//#include <vector>
//#include <queue>
//#define thre 15
//
//class Point {
//public:
//	int x, y;
//	Point(int y, int x) {
//		this->x = x;
//		this->y = y;
//	}
//};
//
//int N, M, D, map[thre][thre] = { 0 }, seq[3] = { 0 }, maxi = 0, enemy_num, maxi_t = 0, target[3], show[thre][thre] = { 0 };
//bool ch[thre] = { 0 }, isE = false, *alive;
//using namespace std;
//vector<Point> enemy, save;
//
//int abs(int a, int b) {
//	return (a > b) ? (a - b) : (b - a);
//}
//
//int distance(Point a, Point b) {
//	return abs(a.x, b.x) + abs(a.y, b.y);
//}
//
//bool isDie() {
//	for (int i = 0; i < enemy_num; i++)
//		if (alive[i])
//			return true;
//
//	return false;
//}
//
//void reset() {
//	for (int i = 0; i < enemy_num; i++)
//	{
//		alive[i] = true;
//		enemy[i] = save[i];
//	}
//	maxi_t = 0;
//}
//
//void shoot() {
//	for (int i = 0; i < 3; i++)
//	{
//		int mini = 0x7fffffff, mini_x = M, idx = enemy_num;
//		for (int j = 0; j < enemy_num; j++)
//		{
//			int between = distance(enemy[j], Point(N, seq[i]));
//			if (alive[j] && between <= D)
//			{
//				if (between < mini)
//				{
//					mini = between;
//					mini_x = enemy[j].x;
//					target[i] = j;
//				}
//				if(between == mini && enemy[j].x < mini_x)
//				{
//					mini_x = enemy[j].x;
//					target[i] = j;
//				}				
//			}
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		if (alive[target[i]] && target[i] != -1)
//		{
//			alive[target[i]] = false;
//			maxi_t++;
//		}
//	}
//}
//
//void march() {
//	for (int i = 0; i < enemy_num; i++) {
//		enemy[i].y++;
//		if (enemy[i].y == N)
//			alive[i] = false;
//	}
//}
//
//void fs(int cnt, int idx) {
//	if (cnt == 3) {
//		while (isDie()) {
//			for (int i = 0; i < 3; i++)
//				target[i] = -1;
//			shoot();
//			march();
//		}
//
//		if (maxi < maxi_t)
//			maxi = maxi_t;
//		reset();
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
//			if (map[i][j] == 1)
//				enemy.push_back(Point(i,j));
//		}
//
//	enemy_num = enemy.size();
//	alive = new bool[enemy_num];
//	for (int i = 0; i < enemy_num; i++)
//	{
//		alive[i] = true;
//		save.push_back(enemy[i]);
//	}
//
//	fs(0, 0);
//
//	cout << maxi << '\n';
//	delete [] alive;
//
//	return 0;
//}