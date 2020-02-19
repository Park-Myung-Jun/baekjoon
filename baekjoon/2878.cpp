//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//bool desc(int a, int b) {
//	return a > b;
//}
//
//int main()
//{
//	int M, N, sum = 0, tmp, h = 1, w=0, arr[100001] = { 0 };
//	cin >> M >> N;
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//
//	sort(arr, arr + N, desc);
//	int area, pos=0;
//	for (int i = pos; i < N; i++)
//		if (arr[pos] != arr[i])
//		{
//			area = (arr[pos] - arr[i]) * (i - pos);
//			if (sum < M && M <= sum + area) {
//				while (sum < M && sum + area - (i - pos) * h)
//					h++;
//				area -= (i - pos) * h;
//				while (sum < M && sum + area - w)
//					w++;
//				break;
//			}
//			pos = i;
//		}
//
//	cout << h << ' ' << w << ' ' << pos << ' ' << sum << '\n';
//
//	
//
//	return 0;
//}