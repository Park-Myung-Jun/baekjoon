//#include <iostream>
//#include <vector>
//#include <queue>
//#define thre 103
//using namespace std;
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
//int abs(int a, int b) {
//	return (a > b) ? (a - b) : (b - a);
//}
//
//int menDist(Point a, Point b) {
//	return abs(a.x, b.x) + abs(a.y, b.y);
//}
//
//int main()
//{
//	int T, n, st ,end;
//	cin >> T;
//	while (T--) {
//		vector<Point> v;
//		vector<int> graph[thre];
//		bool ch[thre + 2] = { 0 };
//		cin >> n;
//		for (int i = 0; i < n + 2; i++)
//		{
//			cin >> st >> end;
//			v.push_back(Point(st, end));
//		}
//
//		for(int i=0;i<n+1;i++)
//			for (int j = i + 1; j < n + 2; j++)
//				if (menDist(v[i], v[j]) <= 1000)
//				{
//					graph[i].push_back(j);
//					graph[j].push_back(i);
//				}
//
//		/*for (int i = 0; i < n + 2; i++)
//		{
//			for (int j = 0; j < graph[i].size(); j++)
//				cout << graph[i][j] << ' ';
//			cout << '\n';
//		}*/
//		
//		queue<int> q;
//		q.push(0);
//		ch[0] = true;
//		while (!q.empty()) {
//			int tmp = q.front();
//			q.pop();
//			for (int i = 0; i < graph[tmp].size(); i++)
//				if (!ch[graph[tmp][i]])
//				{
//					ch[graph[tmp][i]] = true;
//					q.push(graph[tmp][i]);
//				}
//		}
//
//		/*for (int i = 0; i < n + 2; i++)
//			cout << ch[i] << ' ';
//		cout << '\n';*/
//
//		cout << (ch[n + 1] ? "happy\n" : "sad\n");
//	}
//
//	return 0;
//}
