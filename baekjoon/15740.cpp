//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	char last;
//	int tmp, carry = 0, i;
//	string A, B, C;
//	cin >> A >> B;
//
//	reverse(A.begin(), A.end());
//	reverse(B.begin(), B.end());
//
//	int sum = (A.size() > B.size()) ? (B.size()) : (A.size());
//	bool ch = A.size() > B.size();
//	bool ch2 = A.size() < B.size();
//	for (i = 0; i < sum; i++) {
//		tmp = (int)(A[i] - '0' + B[i] - '0') + carry;
//		C += (char)(tmp % 10) + '0';
//		carry = tmp / 10;
//	}
//	
//	if (ch)
//	{
//		if (carry + A.substr[0] - '0' == 10)
//		{
//			A.substr[0] = '0';
//		}
//		C += A.substr(i);
//	} else if(ch2) {
//		C += B.substr(i);
//	}
//	else {
//		C += '1';
//	}
//
//
//	return 0;
//}