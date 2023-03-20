#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>ans(2*n);
    for(int i=0;i<2*n;i++){
        cin>>ans[i];
    }
    int ones=0;
    int twos=0;
    for(int i=0;i<2*n;i++){
        if(ans[i]%2){ones++;}
        else{
        twos++;}
        

    }
    if(ones==twos){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}