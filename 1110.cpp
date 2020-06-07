#include <bits/stdc++.h>

using namespace std;

int main()
{
	int num, temp, a, b, c, sum=0;
	scanf("%d", &num);
	temp = num;
	while(temp != num|| sum == 0)
	{
		a = temp/10;
		b = temp%10;
		c = a+b;
		temp = b*10 + c%10;
		sum++;
	}
	printf("%d", sum);
	
	return 0;
}
