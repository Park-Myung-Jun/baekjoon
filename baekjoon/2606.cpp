//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int main()
//{
//	int V, G, st, end, cnt=0;
//	cin >> V >> G;
//	vector<int> net[101];
//	queue<int> q;
//	bool ch[101] = { 0 };
//	for (int i = 0; i < G; i++)
//	{
//		cin >> st >> end;
//		net[st].push_back(end);
//		net[end].push_back(st);
//	}
//
//	q.push(1);
//	while (!q.empty()) {
//		int ver = q.front();
//		if (!ch[ver]) {
//			ch[ver] = true;
//			cnt++;
//		}
//		q.pop();
//		for (int i = 0; i < net[ver].size(); i++)
//			if (!ch[net[ver][i]])
//				q.push(net[ver][i]);
//	}
//
//	cout << cnt - 1 << '\n';
//
//	return 0;
//}