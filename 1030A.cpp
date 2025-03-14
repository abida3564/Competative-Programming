#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool isHard=false;
    cin>>n;
    for(int i=0;i<n;i++){
            int x;
        cin>>x;
        if(x == 1)
            isHard = true;
    }
    cout<<(isHard ? "HARD" : "EASY")<<endl;
    return 0;
}

