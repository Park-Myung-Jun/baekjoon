//#include <iostream>
//using namespace std;
//
//int Find(int x, int *gate) {
//	if (x == gate[x]) {
//		return x;
//	}
//	else {
//		int p = Find(gate[x], gate);
//		gate[x] = p;
//		return p;
//	}
//}
//
//void Union(int x, int y, int *gate) {
//	x = Find(x, gate);
//	y = Find(y, gate);
//
//	if (x != y)
//		gate[y] = x;
//}
//
//int main()
//{
//	int G, P, tmp, p, count = 0;
//	int gate[100002] = { 0 }, get[100001] = { 0 };
//	for (int i = 1; i < 100002; i++)
//		gate[i] = i;
//	cin >> G >> P;
//
//	for (int i = 0; i < P; i++) {
//		cin >> get[i];
//	}
//
//	for (int i = 0; i < P; i++) {
//		p = Find(get[i], gate);
//		if (p == 0)
//			break;
//		Union(p-1, p, gate);
//		count++;
//	}
//
//	cout << count << '\n';
//
//	return 0;
//}
