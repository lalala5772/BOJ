#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
vector <int> v;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int n, m, p=0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) v.push_back(i);
    cout << "<";
    while (v.size() != 0) {
    	p = (p+m-1)%v.size();
    	if(v.size()==1) cout << v[0] << ">" << endl;
        else cout << v[p] << ", ";
        v.erase(v.begin()+p);
    }
    return 0;
}
