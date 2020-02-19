#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

#define len 101

class Point {
public:
	int x, y;
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

class Change {
public:
	int t;
	char a;
	Change(int t, char a) {
		this->t = t;
		this->a = a;
	}
};

int main()
{
	int trans[4][2] = {{0,1},{1,0},{0,-1},{-1,0}}, a_now = 0, size=1, N, K, L;
	Point head(1,1), tail(1,1);
	short map[len][len] = {0};
	vector<Change> c;
	cin >> N >> K;
	
	for(int i=0;i<K;i++)
	{
		int x, y;
		cin >> y >> x;
		map[y][x] = -1;
	}
	
	cin >> L;
	
	for(int i=0;i<L;i++)
	{
		int time;
		char arrow;
		cin >> time >> arrow;
		Change tmp(time, arrow);
		c.push_back(tmp);
	}
	
	/*for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
			cout << setw(2) << map[i][j] << ' ';
		cout << '\n';
	}
	cout << '\n';*/
	
	int time = 0, loop=0;
	while(true)
	{
		time++;
		int newX = head.x + trans[a_now][1], newY = head.y + trans[a_now][0];
		
		if(newX < 1 || newX > N || newY < 1 || newY > N || map[newY][newX] > 0)
			break;
		
		if(map[newY][newX] == -1)
		{
			size++;
			map[newY][newX] = time;
		}
		else
		{
			int tmp = map[tail.y][tail.x];
			map[newY][newX] = time;
			for(int i=0;i<4;i++)
				if(tmp + 1 == map[tail.y+trans[i][0]][tail.x+trans[i][1]])
				{
					map[tail.y][tail.x] = 0;
					tail.y += trans[i][0];
					tail.x += trans[i][1];
					break;
				}
		}
		head.x = newX;
		head.y = newY;
		
		if(c[loop].t == time)
		{
			switch(c[loop].a)
			{
				case 'D':
					a_now++;
					if(a_now > 3)
						a_now = 0;
					break;
				case 'L':
					a_now--;
					if(a_now < 0)
						a_now = 3;
					break;
			}
			loop++;
		}
		
		/*for(int i=1;i<=N;i++)
		{
			for(int j=1;j<=N;j++)
				cout << setw(2) << map[i][j] << ' ';
			cout << '\n';
		}
		cout << size << "\n\n";*/
	}
	
	cout << time << '\n';
	
	return 0;
}

/*#include <iostream>
#include <vector>
using namespace std;

#define len 101

class Point {
public:
	int x, y;
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

int main()
{
	int trans[4][2] = {{0,1},{1,0},{0,-1},{-1,0}}, t_now = 0, t_dist = 0, t_bf = 0;
	Point now(0,0);
	short map[len][len] = {1};
	int N, K, L, time;
	vector<Point> p;
	char arrow;
	cin >> N >> K;
	for(int i=0;i<K;i++)
	{
		int x, y;
		Point tmp(x,y);
		p.push_back(tmp);
	}
	
	cin >> L;
	for(int i=0;i<L;i++)
	{
		t_dist = time - t_bf;
		t_bf = time;
		now.x += trans[t_now][1] * t_dist;
		now.y += trans[t_now][0] * t_dist;
		
		cin >> time >> arrow;
		switch(arrow)
		{
			case 'D':
				t_now++;
				if(t_now > 3)
					t_now = 0;
				break;
			case 'L':
				t_now--;
				if(t_now < 0)
					t_now = 3;
				break;
		}
		
	}
	
	return 0;
}
/*
0000000100
0000000110
0000000110
0000000000
0000000000
0000000000
0000000000
0000000000
0000000000
0000000000
*/
