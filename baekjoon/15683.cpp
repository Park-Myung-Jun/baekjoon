//#include <iostream>
//#include <vector>
//#include <cstring>
//#define thre 8
//using namespace std;
//
//class cctv {
//public:
//	int y, x, type;
//	cctv(int y, int x, int type) {
//		this->y = y;
//		this->x = x;
//		this->type = type;
//	}
//};
//
//int map[thre][thre] = { 0 }, N, M, dsize[5][2] = { {4, 1},{2,2},{4,2},{4, 3},{1,4}}, mov[2][4] = { {0,1,0,-1}, {1,0,-1,0} }, arrow[5][4][4] = { {{0},{1},{2},{3}},{{0,2},{1,3}},{{0,1},{1,2},{2,3},{3,0}},{{0,1,2},{1,2,3},{2,3,0},{3,0,1}},{{0,1,2,3}} };
//int v_len, mini = 0x7fffffff, seq[thre] = { 0 };
//bool ch[thre][thre] = { 0 };
//vector<cctv> v;
//
//int count() {
//	int c = 0;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			if (map[i][j] == 0 && !ch[i][j])
//				c++;
//
//
//	return c;
//}
//
//void sus(int y, int x, int d) {
//	int Y = y + mov[0][d], X = x + mov[1][d];
//	while(0 <= X && X < M && 0 <= Y && Y < N && map[Y][X] != 6) {
//		if(ch[Y][X] == false)
//			ch[Y][X] = true;
//		Y += mov[0][d];
//		X += mov[1][d];
//	}
//}
//
//void make() {
//	for (int i = 0; i < v_len; i++) {
//		for(int j=0;j< dsize[v[i].type][1];j++) {
//			sus(v[i].y, v[i].x, arrow[v[i].type][seq[i]][j]);
//			//ch[v[i].y][v[i].x] = true;
//		}
//	}
//}
//
//void fs(int cnt) {
//	if (cnt == v_len)
//	{
//		/*for (int i = 0; i < v_len; i++)
//			cout << seq[i] << ' ';
//		cout << '\n';
//		cout << v_len << '\n';*/
//		make();
//		int tmp = count();
//		if (tmp < mini)
//			mini = tmp;
//		memset(ch, 0, sizeof(bool) * thre * thre);
//		return;
//	}
//	for (int i = 0; i < dsize[v[cnt].type][0];i++) {
//		seq[cnt] = i;
//		fs(cnt + 1);
//	}
//
//}
///*int v_s = v.size();
//	for (int i = 0; i < v_s; i++)
//	{
//		for (int j = 0; j < dsize[v[i].type][0]; j++)
//		{
//			for (int k = 0; k < dsize[v[i].type][1]; k++) {
//				sus(v[i].y, v[i].x, v[i].type);
//			}
//		}
//	}*/
//
//int main()
//{
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			cin >> map[i][j];
//			if (1 <= map[i][j] && map[i][j] <= 5)
//				v.push_back(cctv(i,j,map[i][j]-1));
//		}
//
//	v_len = v.size();
//	fs(0);
//
//	cout << mini << '\n';
//
//	return 0;
//}