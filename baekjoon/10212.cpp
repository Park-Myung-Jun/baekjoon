/*#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	long long int *a = (long long int*)malloc(sizeof(long long int));
	(((long long int)a)%2 == 1)?(cout << "Yonsei"):( cout << "Korea");
	return 0;
}
*/

/*#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int *a = (int*)malloc(sizeof(int));
	int b = (long long int)a >> 17;
	(((long long int)b)%2 == 1)?(cout << "Yonsei"):( cout << "Korea");
	return 0;
}
*/

#include <cstdio>
#include <cstdlib>

int main(){
    int *p;
    p = (int*)malloc(4);

    puts( (int)p / 10%2 ? "Yonsei" : "Korea");
    

}
