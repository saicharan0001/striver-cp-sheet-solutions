#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,b;
    cin>>l>>b;
    int count = 0;
    while(true){
        if(l>b) break;
        l*=3;
        b*=2;
        count++;
    }
    cout<<count;
    return 0;
}