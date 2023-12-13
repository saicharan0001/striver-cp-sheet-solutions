#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int i=0;
    int count=1;
    while(i<n){
        cout<<str[i];
        i=i+count;
        count++;
    }
    return 0;
}