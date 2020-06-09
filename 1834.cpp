#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n, sum=0LL;
	cin >> n;
	for(int i=1;i<=n-1;i++) sum += n*i+i;
	cout << sum << endl;
	return 0;
}
