#include <bits/stdc++.h>

using namespace std;
char wd[]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'f', 'y', 'z'};
char WD[]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'F', 'Y', 'Z'};
int cnt[27];
bool flag;
string word;
int main()
{
	int mx=0;
	cin >> word;
	for(int i=0;i<=word.size();i++) 
		for(int j=0;j<26;j++) if(wd[j]==word[i]||WD[j]==word[i]) cnt[j]++;
	for(int i=1;i<26;i++)
	{
		if(cnt[mx]<cnt[i]) {
			mx=i;
			flag=false;
		}
		else if(cnt[mx]==cnt[i]) flag=true;
	}
	if(flag) cout << '?' <<endl;
	else cout << WD[mx] <<endl;

	return 0;
}
