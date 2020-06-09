#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
vector <int> a, b;
int f(int start, int end, int target);
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int num;
		cin >> num;
		a.push_back(num);
	}
	cin >> m;
	for(int i=0;i<m;i++)
	{
		int num;
		cin >> num;
		b.push_back(num);
	}
	sort(a.begin(), a.end());
	for(int i=0;i<m;i++) cout << f(0, m, b[i]) << endl;
	
	return 0;
}


int f(int start, int end, int target)
{
	int front = start, last=end;
	while(front<=last)
	{
		int mid = (front+last)/2;
		if(a[mid]==target) return 1;
		else if(a[mid]>target) last = mid-1;
		else if(a[mid]<target) front = mid+1;
	}
	return 0;
}
