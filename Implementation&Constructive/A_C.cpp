#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int a,b,n;
    cin>>a>>b>>n;
    int count=0;
    while(true){
      if(a<b){
        a+=b;
        count++;
        if(a>n) return count;
      }
      else {
        b+=a;
        count++;
        if(b>n) return count;
      }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}