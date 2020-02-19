//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int N, M, save[8] = { 0 }, seq[8] = { 0 };
//
//void dfs(int cnt, int aft) {
//	if (cnt == M) {
//		for (int i = 0; i < cnt; i++)
//			cout << seq[i] << ' ';
//		cout << '\n';
//		return;
//	}
//	for (int i = aft; i < N; i++) {
//		seq[cnt] = save[i];
//		dfs(cnt+1, i);
//	}
//}
//
//int main()
//{
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		cin >> save[i];
//
//	sort(save, save + N);
//
//	dfs(0, 0);
//
//	return 0;
//}