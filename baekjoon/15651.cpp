//#include <iostream>
//using namespace std;
//
//void bt3(int *arr, int N, int M, int idx)
//{
//	if (idx == M)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			cout << arr[j] << ' ';
//		}
//		cout << '\n';
//		return;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		arr[idx] = i + 1;
//		bt3(arr, N, M, idx+1);
//	}
//}
//
//int main()
//{
//	int N, M, *arr;
//	cin >> N >> M;
//	arr = new int[M];
//
//	bt3(arr, N, M, 0);
//
//	return 0;
//}