#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 0;
    int i=1;
    while(true){
        int x = i*(i+1)/2;
        count+=x;
        if(count>n){
            cout<<i-1;
            break;
        }
        i++;
    }
    return 0;
}