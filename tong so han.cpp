#include <stdio.h>
using namespace std;

int main () {
	printf ("nhap n : /n");
	int n;
	scanf("%d", &n);
	int S = 0;
	for ( int i = 1; i <= n; i++)
	{
		S = S + i;
	}
	printf ( " tong cac so tu 1 den n : %d \n", S);
	return 0;
}
