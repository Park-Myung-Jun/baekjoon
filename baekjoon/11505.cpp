//#include <iostream>
//using namespace std;
//
//#define divnum 1000000007
//
//int main()
//{
//	long long int calc;
//	int N, M, K, *arr, a, b, c;
//	cin >> N >> M >> K;
//	arr = new int[N];
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//	for (int i = 0; i < M + K; i++) {
//		cin >> a >> b >> c;
//		if (a == 1) {
//			arr[b - 1] = c;
//		}
//		else if (a == 2) {
//			calc = 1;
//			for (int j = b - 1; j < c; j++)
//			{
//				calc = calc * (long long int)arr[j];
//				calc %= divnum;
//			}
//			cout << calc << '\n';
//		}
//	}
//
//
//	return 0;
//}