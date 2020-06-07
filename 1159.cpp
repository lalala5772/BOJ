#include <bits/stdc++.h>

using namespace std;
string str;
char ini[151];
char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n' ,'o' ,'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char num[27];
bool flag;
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++) 
	{
		cin >> str;
		for(int j=0;j<26;j++)
			if(arr[j]==str[0]) num[j]++; 
	}
	for(int i=0;i<26;i++)
		if(num[i]>=5) flag=true;
	if(flag)
	{
		for(int i=0;i<26;i++)
			if(num[i]>=5) cout << arr[i];
	}
	else cout << "PREDAJA";
	return 0;
}
