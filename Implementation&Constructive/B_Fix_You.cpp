#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int m,n;
    cin>>n>>m;
    vector<vector<char>> vec(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cin>>vec[i][j];
        }
    }
    int ans = 0;
    for(int i=0;i<n;i++){
         if(vec[i][m-1]=='R') ans++; 
    }
    for(int i=0;i<m;i++){
        if(vec[n-1][i]=='D') ans++;
    }
    cout<<ans<<endl;
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