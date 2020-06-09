#include <stdio.h>

int a[51];
int main()
{
	int n, b;
	float c;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	if(a[1]-a[0]==a[2]-a[1])
	{
		c = a[1]-a[0];
		b = a[n-1]+c;
	} 
	if(1.0*a[1]/a[0]==1.0*a[2]/a[1])
	{
		c = 1.0*a[1]/a[0];
		b = a[n-1]*c;
	}
	printf("%d\n", b);
	return 0;
}
