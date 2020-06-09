#include <stdio.h>
int main()
{
	int a, b, c, cnt=0;
	scanf("%d %d %d", &a, &b, &c);	
	if(c > b){
		for(int i=1;i<=a/(c-b);i++)
			cnt++;
		printf("%d", cnt+1);
	}
	else
		printf("-1");

	return 0;
}
