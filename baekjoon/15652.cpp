//#include <iostream>
//
//using namespace std;
//
//void bt2(int M, int N, int *iarr, int idx)
//{
//	if (idx == N)
//	{
//		for (int i = 0; i < N; i++)
//			cout << iarr[i] << ' ';
//		cout << '\n';
//		return;
//	}
//	int mid;
//	if (idx == 0)
//		mid = 0;
//	else
//		mid = iarr[idx - 1] - 1;
//	for (int i = mid; i < M; i++)
//	{
//		iarr[idx] = i + 1;
//		bt2(M, N, iarr,idx + 1);
//	}
//}
//
//int main()
//{
//	int N, M, i;
//	cin >> M >> N;
//
//	int *iarr = new int[M];
//	for (i = 0; i < N; i++)
//		iarr[i] = 0;
//
//	bt2(M, N, iarr, 0);
//
//	delete[] iarr;
//
//	return 0;
//}