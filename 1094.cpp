#include <bits/stdc++.h>

using namespace std;
int arr[7] = {64, 32, 16, 8, 4, 2, 1};
int main()
{
	int num, cnt=0;
	cin >> num;
	for(;1<=num;){
		for(int j=0;j<7;j++)
		{
			if(arr[j]<=num) {
				num-=arr[j];
				cnt++;
				break;
			}	
			else continue;
		}
	}
	cout << cnt << endl;

	return 0;
}
