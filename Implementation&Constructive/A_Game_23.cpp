#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(m%n){
        cout<<-1;
        return 0;
    }
    int x = m/n;
    int count = 0;
    while(true){
        if(x%2==0){
            x/=2;
            count++;
        }
        else{
            break;
        }
    }
    while(true){
        if(x%3==0){
            x/=3;
            count++;
        }
        else{
            break;
        }
    }
    if(x==1) cout<<count;
    else cout<<-1;
    return 0;
}