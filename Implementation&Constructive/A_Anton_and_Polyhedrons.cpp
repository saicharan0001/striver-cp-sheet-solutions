#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    map<string,int> mpp;
    mpp["Icosahedron"]=20;
    mpp["Cube"]=6;
    mpp["Tetrahedron"]=4;
    mpp["Dodecahedron"]=12;
    mpp["Octahedron"]=8;
    while (n--)
    {
        string str;
        cin>>str;
        ans+=mpp[str];
    }
    cout<<ans;
    return 0;
}