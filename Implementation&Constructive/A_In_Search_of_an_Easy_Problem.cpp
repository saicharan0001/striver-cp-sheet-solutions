#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(x){
           cout<<"hard";
           return 0;
        }
    }
    cout<<"easy";
    return 0;
}