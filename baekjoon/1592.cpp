//#include <queue>
//#include <iostream>
//#define thre 1000
//using namespace std;
//
//int main()
//{
//	int  N, M, L, ball = 0, arr[thre] = { 0 }, pos = 0;
//	cin >> N >> M >> L;
//
//	while (true)
//	{
//		arr[pos]++;
//		if (arr[pos] == M)
//			break;
//		(arr[pos] % 2 == 1) ? (pos = (pos + L) % N) : (pos = (pos - L + N) % N);
//		ball++;
//	}
//	
//	cout << ball << '\n';
//
//	return 0;
//}