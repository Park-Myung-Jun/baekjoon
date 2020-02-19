//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//vector<int> save;
//int N, M, seq[8] = { 0 };
//
//void dfs(int cnt, int aft) {
//	if (cnt == M) {
//		for (int i = 0; i < cnt; i++)
//			cout << seq[i] << ' ';
//		cout << '\n';
//		return;
//	}
//	for (int i = 0; i < save.size(); i++) {
//		seq[cnt] = save[i];
//		dfs(cnt + 1, i);
//	}
//}
//
//int main()
//{
//	int tmp;
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> tmp;
//		save.push_back(tmp);
//	}
//	sort(save.begin(), save.end());
//	vector<int>::iterator last = unique(save.begin(), save.end());
//	save.erase(last, save.end());
//
//	dfs(0, 0);
//
//	return 0;
//}