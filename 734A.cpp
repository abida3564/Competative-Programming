//https://codeforces.com/problemset/problem/734/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char c;
    int countA=0,countD=0;
    for(int i=0;i<n;i++){
        cin>>c;

        if(c=='A'){
          countA++;
        }
        if(c=='D'){
          countD++;
        }
    }
    if(countA == countD) cout<<"Friendship"<<endl;
    else if(countA>countD) cout<<"Anton"<<endl;
    else cout<<"Danik"<<endl;
    return 0;
}
