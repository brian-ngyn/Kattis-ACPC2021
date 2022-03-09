// https://acpc21d2.kattis.com/problems/gcvwr

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int g;
    int t;
    int n;
    cin >> g >> t >> n;
    int arr[n]; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result = (g - t) * 0.9;
    for (int i=0; i < sizeof(arr)/sizeof(arr[0]); i++){
        result-=arr[i];
    }
    cout << result << endl;
	return 0;
}