#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,w;
    cin>>k>>n>>w;
    int temp = w*(w+1)*k;
    cout<<max((temp/2) - (n),0);
    return 0;
}