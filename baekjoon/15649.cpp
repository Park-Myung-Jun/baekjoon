//#include <iostream>
//
//using namespace std;
//
//void backtracking(int N, int M, bool *barr, int *iarr, int c)
//{
//	if (M == 0)
//	{
//		for (int i = 0; i < c; i++)
//			cout << iarr[i] << ' ';
//		cout << '\n';
//		return;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		if (!barr[i])
//		{
//			barr[i] = true;
//			iarr[c] = i + 1;
//			backtracking(N, M-1, barr, iarr, c+1);
//			barr[i] = false;
//		}
//	}
//}
//
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//
//	bool *barr = new bool[N];
//	int *iarr = new int[M];
//	for (int i = 0; i < N; i++)
//		barr[i] = false;
//	for(int i=0;i<M;i++)
//		iarr[i] = 0;
//	backtracking(N, M, barr, iarr, 0);
//		
//	delete [] barr;
//	delete [] iarr;
//
//	return 0;
//}