#include <bits/stdc++.h>

using namespace std;
string s;
int main()
{
	int cnt=0;
	getline(cin,s);
	for(int i=0;i<s.size();i++)
		if(s[i]==' ') cnt++;
	if(s[s.size()-1]==' '&&s[0]==' ') cout << cnt-1;
	else if(s[s.size()-1]==' '||s[0]==' ') cout << cnt;
	else cout << cnt+1;
	
	return 0;
}
