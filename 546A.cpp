//https://codeforces.com/problemset/problem/546/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,w;
    long long int n;
    cin>>k>>n>>w;
    long long int ans=0;
    for(int i=1;i<=w;i++){
     ans+=(i*k);
    }
    long long b =ans-n;
    if(b>0)
    cout<<b<<endl;
    else{
        cout<<0<<endl;
    }
    return 0;
}
