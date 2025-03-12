//https://codeforces.com/problemset/problem/116/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    int i,j;
    int current_pass=0,max_capacity=0;
    while(t--){
        cin>>i>>j;
        current_pass=current_pass-i+j;
        max_capacity = max(max_capacity,current_pass);

    }
    cout<<max_capacity<<endl;
}
