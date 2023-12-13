#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin>>str;
    int s=-1,e=-1;
    for(int i=0;i<str.size();i++){
        if(str[i]=='1'){
            if(s==-1){
                s=i;
                e=i;
            }
            else{
                e=i;
            }
        }
    }
    int ans = 0;
    for(int i=s+1;i<e;i++){
         if(str[i]=='0')ans++;
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