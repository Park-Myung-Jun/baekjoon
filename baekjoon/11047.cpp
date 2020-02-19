//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int N, K, *arr, i, coin = 0;
//	cin >> N >> K;
//	arr = new int[N];
//	for (i = N-1; i >= 0; i--)
//	{
//		cin >> arr[i];
//	}
//
//	for(int i=0;i<N;i++) {
//			coin += K / arr[i];
//			K %= arr[i];
//	}
//
//	cout << coin << '\n';
//
//	delete [] arr;
//
//	return 0;
//}