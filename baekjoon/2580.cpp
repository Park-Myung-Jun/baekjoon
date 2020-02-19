//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//#define N 9
//
//int map[N][N] = { 0 };
//bool row[N][N], col[N][N], sq[N][N];
//
//void DFS(int cnt) {
//	int x = cnt / N;
//	int y = cnt % N;
//
//	if (cnt == 81) {
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				cout << map[i][j] << ' ';
//			}
//			cout << '\n';
//		}
//
//		exit(0);
//	}
//
//	if (map[x][y] == 0) {
//		for (int i = 1; i <= N; i++)
//		{
//			if (row[x][i] == false && col[y][i] == false && sq[(x / 3) * 3 + y / 3][i] == false)
//			{
//				row[x][i] = true;
//				col[y][i] = true;
//				sq[(x / 3) * 3 + y / 3][i] = true;
//				map[x][y] = i;
//				DFS(cnt + 1);
//				map[x][y] = 0;
//				row[x][i] = false;
//				col[y][i] = false;
//				sq[(x / 3) * 3 + y / 3][i] = false;
//			}
//		}
//	} else {
//		DFS(cnt + 1);
//	}
//}
//
//int main()
//{
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++) {
//			cin >> map[i][j];
//			if (map[i][j] != 0) {
//				row[i][map[i][j]] = true;
//				col[j][map[i][j]] = true;
//				sq[(i / 3) * 3 + (j / 3)][map[i][j]] = true;
//			}
//		}
//	}
//
//	DFS(0);
//
//	return 0;
//}