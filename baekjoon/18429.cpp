//#include <iostream>
//#define thre 8
//using namespace std;
//
//int N, K, arr[thre] = { 0 }, seq[thre] = { 0 }, able = 0;
//bool ch[thre] = { 0 };
//
//bool calc() {
//	int sum = 0;
//	for (int i = 0; i < N; i++) {
//		sum = sum + arr[seq[i]] - K;
//		if (sum < 0)
//			return false;
//	}
//
//	return true;
//}
//
//void fs(int cnt) {
//	if (cnt == N)
//	{
//		if (calc())
//			able++;
//		return;
//	}
//	for (int i = 0; i < N; i++) {
//		if (!ch[i]) {
//			seq[cnt] = i;
//			ch[i] = true;
//			fs(cnt + 1);
//			ch[i] = false;
//		}
//	}
//}
//
//int main()
//{
//	
//	cin >> N >> K;
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//
//	fs(0);
//
//	cout << able << '\n';
//
//	return 0;
//}