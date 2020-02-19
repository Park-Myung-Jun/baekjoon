#include <iostream>
using namespace std;

#define len 20

int map[len][len] = {0}, seq[len/2] = {0}, qes[len/2] = {0},compare = 0x7fffffff, N;
bool ch[len] = {0};

int abs(int a, int b)
{
	return (a>b)?(a-b):(b-a);
}

void make_qes() {
	int i, idx=0;
	for(i=0;i<N/2;i++)
		ch[seq[i]] = true;
	for(i=0;i<N;i++)
		if(!ch[i])
		{
			qes[idx] = i;
			idx++;
		}
	for(i=0;i<N;i++)
		ch[i] = false;
}

void calc() {
	int up = 0, down = 0;
	for(int i=0;i<N/2-1;i++)
	{
		for(int j=i+1;j<N/2;j++)
		{
			up += map[seq[i]][seq[j]] + map[seq[j]][seq[i]];
			down += map[qes[i]][qes[j]] + map[qes[j]][qes[i]];
		}
	}
	int tmp = abs(up, down);
		if(tmp < compare)
			compare = tmp;
}

void dfs(int cnt, int st) {
	if(cnt == N/2) {
		make_qes();
		calc();
		return;
	}
	for(int i=st;i<N;i++)
	{
		seq[cnt] = i;
		dfs(cnt+1, i+1);
	}
}

int main()
{
	cin >> N;
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			cin >> map[i][j];
	
	dfs(0, 0);
	
	cout << compare << '\n';
	
	return 0;
}
