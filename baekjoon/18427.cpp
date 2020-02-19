//#include <iostream>
//#include <string>
//#include <vector>
//#define thre 50
//using namespace std;
//
//int N, M, H, able = 0;
//vector<int> v[thre];
//int dp[51][1001] = { 1 };
///*int fs(int cnt, int sum) {
//	if (sum > 1000 && cnt == 50) return 0;
//	if (sum == 1000) return 1;
//	
//	if (dp[cnt][sum] != -1) return dp[cnt][sum];
//
//	
//
//	for (int i = 0; i < v[i].size(); i++) {
//		dp[cnt+1][] += dp[cnt][sum] + v[cnt][i];
//		fs(cnt + 1, sum + v[cnt][i]);
//	}
//}*/
//
//int s2i(string str) {
//	int ret = 0;
//	for (int i = 0; i < str.size(); i++) {
//		ret *= 10;
//		ret += (int)(str[i] - '0');
//	}
//	return ret;
//}
//
//vector<int> divs(string str) {
//	vector<int> t;
//	int len = str.size(), pos = 0, i = 0;
//	for (int i = 0; i < len + 1; i++) {
//		if (str[i] == ' ' || str[i] == '\0') {
//			t.push_back(s2i(str.substr(pos, i - pos)));
//			pos = i + 1;
//		}
//	}
//
//	return t;
//}
//
//int main()
//{
//	string str;
//	cin >> N >> M >> H;
//	getline(cin, str);
//	for (int i = 0; i < N; i++) {
//		getline(cin, str);
//		v[i] = divs(str);
//		v[i].push_back(0);
//		/*for (int j = 0; j < v[i].size(); j++)
//			cout << v[i][j] << ' ';
//		cout << '\n';*/
//	}
//
//	/*for (int i = 0; i < 51; i++)
//		for (int j = 0; j < 1001; j++)
//			dp[i][j] = -1;*/
//
//			//fs(0, 0);
//
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j <= H; j++)
//			for (int k = 0; k < v[i].size(); k++) //0 2 3 5
//				if (j + v[i][k] <= H)
//				{
//					dp[i + 1][j + v[i][k]] += dp[i][j];
//					dp[i + 1][j + v[i][k]] %= 10007;
//				}
//
//	/*for (int i = 0; i <= N; i++)
//	{
//		for (int j = 0; j <= H; j++)
//			cout << dp[i][j] << ' ';
//		cout << '\n';
//	}*/
//	cout << dp[N][H] << '\n';
//
//	return 0;
//}
///*
//0 1 2 3 4 5
//1 0 0 0 0 0
//1 0 1 1 0 1
//1 0 1 2 0 3
//1 1 2 4 3 6
//*/