#include <iostream>
using namespace std;

#define len 12

int N, arr[len] = {0}, seq[6] = {0};

void dfs(int cnt, int st) {
	if(cnt == 6) {
		for(int i=0;i<6;i++)
			cout << seq[i] << ' ';
		cout << '\n';
		return;
	}
	for(int i=st;i<N;i++) {
		seq[cnt] = arr[i];
		dfs(cnt+1, i+1);
	}
}

int main()
{
	while(true) {
		cin >> N;
		if(N == 0)
			break;
		for(int i=0;i<N;i++)
			cin >> arr[i];
		dfs(0,0);
		cout << '\n';
	}
	
	return 0;
}
