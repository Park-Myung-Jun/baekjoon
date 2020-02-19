//#include <iostream>
//#include <vector>
//#include <queue>
//#define thre 10
//using namespace std;
//
//int N, arr[thre] = { 0 }, s, tmp, result = 1e9;
//vector<int> v[10];
//bool divide[thre] = { 0 }, isP = false;
//
//int abs(int a, int b) {
//	return (a > b) ? (a - b) : (b - a);
//}
//
//bool dfs(vector<int> vv, bool mod) {
//	if (vv.size() == 0)
//		return false;
//	bool ch[thre] = { 0 };
//	queue<int> q;
//	q.push(vv[0]);
//	while (!q.empty())
//	{
//		int tmp = q.front();
//		q.pop();
//		ch[tmp] = true;
//		for (int i = 0; i < v[tmp].size(); i++)
//		{
//			int next = v[tmp][i];
//			if (!ch[next] && (mod ? (!divide[next]) : (divide[next])))
//				q.push(next);
//		}
//	}
//
//	for (int i = 0; i < vv.size(); i++)
//	{
//		if (!ch[vv[i]])
//			return false;
//	}
//	return true;
//}
//
//bool gather() {
//	vector<int> l, r;
//	for (int i = 0; i < N; i++)
//	{
//		if (!divide[i])
//			l.push_back(i);
//		else
//			r.push_back(i);
//	}
//
//	if (!dfs(l, true) || !dfs(r, false))
//		return false;
//
//	int l_size = l.size(), l_sum = 0;
//	for (int i = 0; i < l_size; i++)
//		l_sum += arr[l[i]];
//	int r_size = r.size(), r_sum = 0;
//	for (int i = 0; i < r_size; i++)
//		r_sum += arr[r[i]];
//
//	int tmp = abs(l_sum, r_sum);
//	if (result > tmp)
//		result = tmp;
//
//	return true;
//}
//
//void make(int cnt) {
//	if (cnt == N)
//	{
//		if (gather())
//			isP = true;
//		return;
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		divide[cnt] = i;
//		make(cnt + 1);
//	}
//}
//
//int main()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//	for (int i = 0; i < N; i++) {
//		cin >> s;
//		for (int j = 0; j < s; j++)
//		{
//			cin >> tmp;
//			v[i].push_back(tmp - 1);
//		}
//	}
//
//	make(1);
//
//	if (isP)
//		cout << result << '\n';
//	else
//		cout << -1 << '\n';
//
//	return 0;
//}