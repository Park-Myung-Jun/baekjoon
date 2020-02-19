//#include <iostream>
//#define thre 50
//using namespace std;
//
//int N, M, map[thre][thre] = { 0 }, mov[2][4] = { {-1,0,1,0},{0,1,0,-1} };
//
//int main()
//{
//	cin >> N >> M;
//	int y, x, d, cnt = 0;
//	cin >> y >> x >> d;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			cin >> map[i][j];
//
//	map[y][x] = 2;
//	cnt++;
//	while (true) {
//		int Y = y + mov[0][(d + 3) % 4], X = x + mov[1][(d + 3) % 4];
//		//cout << Y << ' ' << X << '\n';
//		if (map[Y][X] == 0)
//		{
//			map[Y][X] = 2;
//			x = X;
//			y = Y;
//			d = (d + 3) % 4;
//			cnt++;
//			continue;
//		}
//		bool all = false;
//		for (int i = 0; i < 4; i++) {
//			int bY = y + mov[0][i], bX = x + mov[1][i];
//			if (map[bY][bX] == 0)
//				all = true;
//		}
//		if (all)
//		{
//			d = (d + 3) % 4;
//			continue;
//		}
//		if (map[y-mov[0][d]][x-mov[1][d]] == 1)
//			break;
//		y -= mov[0][d];
//		x -= mov[1][d];
//	}
//
//	cout << cnt << '\n';
//
//	return 0;
//}