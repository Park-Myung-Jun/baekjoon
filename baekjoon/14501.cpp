#include <iostream>
using namespace std;

#define len 16

int main()
{
	int arr[2][len] = {0}, N, stack[len] = {0}, max = 0;
	
	cin >> N;
	for(int i=0;i<N;i++)
		cin >> arr[0][i] >> arr[1][i];
	
	for(int i=0;i<N;i++) {
		if(arr[0][i]+i > N)
			continue;
		if(stack[arr[0][i] + i] < arr[1][i] + stack[i])
		{
			stack[arr[0][i] + i] = arr[1][i] + stack[i];
			for(int j=arr[0][i]+i+1;j<N;j++)
				if(stack[j] < stack[arr[0][i] + i])
					stack[j] = stack[arr[0][i] + i];
			if(stack[arr[0][i] + i] > max)
				max = stack[arr[0][i] + i];
		}
	}
	
	cout << max << '\n';
	
	return 0;
}
