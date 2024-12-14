#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    for(int mask=0;mask<(1<<n);++mask){
        for(int i=n-1;i>=0;--i){
            cout<<!!(mask&(1<<i));
        }
        cout<<'\n';
    }
}

signed main(){
    cout<<"Nhap do dai n: ";
    int n;
    cin>>n;
    
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve(n);
    return 0;
}