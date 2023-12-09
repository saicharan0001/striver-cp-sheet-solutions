#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> vec(n, vector<char>(m, '.'));
    int i = 0, j = 1;
    vec[0][0] = '#';
    int flag = 1;
    while (true)
    {
        vec[i][j] = '#';
        if (j == m - 1)
        {
            i++;
            if(i==n) break;
            vec[i][j] = '#';
            i++;
            if(i==n) break;
            vec[i][j] = '#';
            j--;
            flag = -1;
        }
        else if (j == 0)
        {
            i++;
            if(i==n) break;
            vec[i][j]='#';
            i++;
            if(i==n) break;
            vec[i][j]='#';
            j++;
            flag=1;
        }
        else
        {
            j = j + flag;
        }
    }
    for(auto it:vec){
        for(auto k:it){
            cout<<k<<"";
        }
        cout<<endl;
    }
    return 0;
}