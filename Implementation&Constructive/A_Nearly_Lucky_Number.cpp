#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int count = 0;
    while(n){
        int x = n%10;
        if(x==4||x==7)count++;
        n/=10;
    }
    if(count==4||count==7) cout<<"YES";
    else cout<<"NO";
    return 0;
}