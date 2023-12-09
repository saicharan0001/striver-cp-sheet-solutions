#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    cin >> x;
    long long int y = 0;
    long long int count = 1;
    while (x)
    {
        long long int d1 = x % 10;
        long long int d2 = 9-d1;
        if ( d2>d1 ||x==9)
        {
            y = y + (count* d1);
        }
        else
        {   
            y = y + (count * d2);
        }
        count*=10;
        x = x / 10;
    }
    cout << y;
    return 0;
}