#include <bits/stdc++.h>

using namespace std;
string a, b;
int main()
{
	int min=51, cnt;
	cin >> a >> b;
	for(int i=0;i<=b.size()-a.size();i++)
	{
		cnt=0;
		for(int j=0;j<a.size();j++) if(a[j]!=b[j+i]) cnt++;
		if(min>cnt) min = cnt;
	}
	cout << min << endl;
	
	return 0;
}
