//https://codeforces.com/problemset/problem/200/B
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=p[i];
    }
    sum=sum/n;
    cout<<fixed<<setprecision(12)<<sum<<endl;
    return 0;
}

