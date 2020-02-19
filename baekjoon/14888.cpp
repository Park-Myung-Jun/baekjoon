//#include <iostream>
//#include <stack>
//using namespace std;
//
//int N, *nums, *ops, *seq, idx;
//bool* ch;
//
//int cpp14div(int a, int b) {
//	bool isY = true;
//	if (a*b < 0)
//		isY = false;
//	if (a < 0)
//		a = -a;
//	if (b < 0)
//		b = -b;
//	if (isY)
//		return a / b;
//	else
//		return -(a / b);
//}
//
//int calc() {
//	int cal = nums[0];
//	for (int i = 0; i < N-1; i++)
//	{
//		switch (ops[i])
//		{
//			case 0:
//				cal += nums[i + 1];
//				break;
//			case 1:
//				cal -= nums[i + 1];
//				break;
//			case 2:
//				cal *= nums[i + 1];
//				break;
//			case 3:
//				cal = cpp14div(cal, nums[i + 1]);
//				break;
//			default:
//				cout << "error\n";
//		}
//	}
//	return cal;
//}
//
//void dfs(int cnt, int* max, int* min) {
//	if (cnt == N-1)
//	{
//		int tmp = calc();
//		if (*max < tmp)
//			*max = tmp;
//		if (*min > tmp)
//			*min = tmp;
//	}
//	for (int i = 0; i < N - 1; i++) {
//		if (!ch[i])
//		{
//			ch[i] = true;
//			ops[idx] = seq[i];
//			idx++;
//			dfs(cnt+1, max, min);
//			idx--;
//			ops[idx] = -1;
//			ch[i] = false;
//		}
//	}
//}
//
//int main()
//{	
//	cin >> N;
//	nums = new int[N];
//	ops = new int[N - 1];
//	seq = new int[N - 1];
//	ch = new bool[N - 1];
//	for (int i = 0; i < N - 1; i++)
//	{
//		ch[i] = false;
//	}
//
//	for (int i = 0; i < N; i++)
//		cin >> nums[i];
//	int pos = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		int tmp;
//		cin >> tmp;
//		for (int j = pos; j < pos + tmp; j++)
//			seq[j] = i;
//		pos += tmp;
//	}
//
//	int max = 0x80000000, min = 0x7fffffff;
//
//	idx = 0;
//	dfs(0, &max, &min);
//
//	cout << max << '\n' << min << '\n';
//
//	delete [] nums, ops, ch;
//
//	return 0;
//}