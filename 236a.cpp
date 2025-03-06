//https://codeforces.com/problemset/problem/236/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    set<char> distinctChars;

    for(char ch:s) distinctChars.insert(ch);
    if(distinctChars.size()%2 == 0)
        cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;

    return 0;
}
