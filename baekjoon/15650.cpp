//#include <iostream>
//
//using namespace std;
//
//void bt2(int M, int N, int *iarr, bool *barr, int idx)
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
//		mid = iarr[idx-1]-1;
//	for (int i = mid; i < M; i++)
//	{
//		if (!barr[i])
//		{
//			barr[i] = true;
//			iarr[idx] = i + 1;
//			bt2(M, N, iarr, barr, idx+1);
//			barr[i] = false;
//		}
//	}
//}
//
//int main()
//{
//	int N, M, i;
//	cin >> M >> N;
//
//	int *iarr = new int[M];
//	bool *barr = new bool[N];
//	for (i = 0; i < N; i++)
//		iarr[i] = 0;
//	for (i = 0; i < M; i++)
//		barr[i] = false;
//
//	bt2(M, N, iarr, barr, 0);
//
//	delete[] iarr, barr;
//	
//	return 0;
//}