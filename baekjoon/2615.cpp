//#include <iostream>
//#define thre 19
//using namespace std;
//
//int map[thre][thre] = { 0 }, mov[2][8] = { {0,1,1,1,0,-1,-1,-1},{1,1,0,-1,-1,-1,0,1} }, ry, rx, ty, tx;
//
//int find(int y, int x) {
//	int stone = map[y][x];
//	ty = y;
//	tx = x;
//	//cout << y << ' ' << x << ' ' << stone << '\n';
//	for (int i = 0; i < 8; i++)
//	{
//		int Y = y + mov[0][i], X = x + mov[1][i], line = 1, rY = y - mov[0][i], rX = x - mov[1][i];
//		if (0 <= rX && rX < thre && 0 <= rY && rY < thre && map[rY][rX] == stone)
//			continue;
//		while (0 <= X && X < thre && 0 <= Y && Y < thre && map[Y][X] == stone)
//		{
//			if (X < tx)
//			{
//				tx = X;
//				ty = Y;
//			}
//			line++;
//			Y += mov[0][i];
//			X += mov[1][i];
//		}
//		//cout << "line " << line << '\n';
//		if (line == 5)
//			return stone;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int tmp = 0;
//	bool is = false;
//
//	for (int i = 0; i < thre; i++)
//		for (int j = 0; j < thre; j++)
//			cin >> map[i][j];
//
//	for (int i = 0; i < thre; i++)
//	{
//		for (int j = 0; j < thre; j++)
//			if (map[i][j] != 0)
//			{
//				tmp = find(i, j);
//				if (tmp > 0)
//				{
//					ry = ty;
//					rx = tx;
//					//cout << tmp << '\n';
//					is = true;
//					break;
//				}
//			}
//		if (is)
//			break;
//	}
//
//	cout << tmp << '\n';
//
//	if (is)
//		cout << ry + 1 << ' ' << rx + 1 << '\n';
//
//	return 0;
//}