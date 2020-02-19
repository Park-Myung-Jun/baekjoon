//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int N, M, save[8] = { 0 }, seq[8] = { 0 };
//bool barr[8] = { 0 };
//
//void dfs(int cnt)
//{
//	if (cnt == M) {
//		for (int i = 0; i < cnt; i++)
//			cout << seq[i] << ' ';
//		cout << '\n';
//
//		return;
//	}
//	
//	for (int i = 0; i < N; i++) {
//		if (!barr[i]) {
//			seq[cnt] = save[i];
//			barr[i] = true;
//			dfs(cnt + 1);
//			seq[cnt] = 0;
//			barr[i] = false;
//		}
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
//	dfs(0);
//
//	return 0;
//}