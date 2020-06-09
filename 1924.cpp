#include <bits/stdc++.h>

using namespace std;
int a[13] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	switch((a[x]+y)%7)
	{
		case 0:
			printf("SUN");
			break;
		case 1:
			printf("MON");
			break; 
		case 2:
			printf("TUE");
			break;
		case 3:
			printf("WED");
			break;
		case 4:
			printf("THU");
			break;
		case 5:
			printf("FRI");
			break;
		case 6:
			printf("SAT");
			break;
	}
		
	return 0;
}
