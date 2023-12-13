#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<char> st;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        st.insert(str[i]);
    }
    int s = st.size();
    if (s & 1)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
    return 0;
}