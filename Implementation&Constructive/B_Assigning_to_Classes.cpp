#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> vec(2*n);
    for(int i=0;i<2*n;i++)cin>>vec[i];
    sort(vec.begin(),vec.end());
        cout<<abs(vec[n]-vec[n-1])<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}