//#include <iostream>
//#include <string>
//using namespace std;
//
//string rstr(string str) {
//	string ret;
//	int s = str.size();
//	for (int i = s - 1; i >= 0; i--)
//		ret += str[i];
//	return ret;
//}
//
//int main()
//{
//	string str, result;
//	getline(cin, str);
//	int l = str.size(), st=0, end=0, pos = 0;
//
//	for (int i = 0; i <= l; i++) {
//		if (str[i] == ' ' || str[i] == '\0' || str[i] == '<') {
//			string tmp = str.substr(pos, i-pos);
//			tmp = rstr(tmp);
//			result += tmp;			
//			if (str[i] == ' ')
//			{
//				result += str[i];
//				pos = i + 1;
//			}
//		}
//		if (str[i] == '<') {
//			st = i;
//			while (str[i] != '>')
//				i++;
//			end = i+1;
//			result += str.substr(st, end - st);
//			pos = end;
//		}
//	}
//
//	cout << result << '\n';
//
//	return 0;
//}