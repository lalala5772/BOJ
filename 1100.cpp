#include <bits/stdc++.h>

using namespace std;
char arr[65];
int main()
{
	int cnt=0, n=0;
	for(int i=1;i<=64;i++)
		scanf(" %c", &arr[i]);
	for(int i=1;i<=64;i++)
	{
		if(cnt%2==0&&i%2==1)
			if(arr[i]=='F') n++;
		if(cnt%2==1&&i%2==0)
			if(arr[i]=='F') n++;
		if(i%8==0) cnt++;
	}
	printf("%d\n", n);

	return 0;
}
