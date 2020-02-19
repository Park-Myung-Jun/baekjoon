//#include <iostream>
//using namespace std;
//
//int N, ans, *row;
//
//int abs(int a, int b) {
//	return (a>b) ? (a-b) : (b-a);
//}
//
//bool possible(int c) {
//	for (int i = 1; i < c; i++) {
//		if (row[i] == row[c]) {
//			return false;
//		}
//		if (abs(row[i], row[c]) == abs(i, c)) {
//			return false;
//		}
//	}
//	return true;
//}
//
//void dfs(int col) {
//	if (col == N) {
//		ans++;
//	}
//	else {
//		for (int i = 1; i <= N; i++) {
//			row[col + 1] = i;
//			if (possible(col + 1)) {
//				dfs(col + 1);
//			} else {
//				row[col + 1] = 0;
//			}
//		}
//	}
//	row[col] = 0;
//}
//
//int main()
//{
//	ans = 0;
//	cin >> N;
//	for (int i = 1; i <= N; i++)
//	{
//		row = new int[15];
//		row[1] = i;
//		dfs(1);
//	}
//	cout << ans << '\n';
//
//	return 0;
//}