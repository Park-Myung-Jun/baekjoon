//#include <iostream>
//#include <cstring>
//#include <queue>
//#define thre 1000001
//using namespace std;
//
//class Point {
//public:
//	int p, step;
//	Point(int p, int step) {
//		this->p = p;
//		this->step = step;
//	}
//};
//
//int arr[thre], F, S, G, mov[2];
//
//void bfs(int p) {
//	queue<Point> q;
//	q.push(Point(p, 0));
//	arr[p] = 0;
//	while (!q.empty())
//	{
//		Point tmp = q.front();
//		q.pop();
//		for (int i = 0; i < 2; i++)
//		{
//			int next = tmp.p + mov[i];
//			if (1 <= next && next <= F && arr[next] == -1) {
//				arr[next] = tmp.step + 1;
//				q.push(Point(next, tmp.step+1));
//			}
//		}
//	}
//}
//
//int main()
//{
//	memset(arr, -1, sizeof(int) * thre);
//	cin >> F >> S >> G >> mov[0] >> mov[1];
//	mov[1] = -mov[1];
//
//	bfs(S);
//
//	if (arr[G] != -1) {
//		cout << arr[G] << '\n';
//	}
//	else {
//		cout << "use the stairs\n";
//	}
//
//	return 0;
//}