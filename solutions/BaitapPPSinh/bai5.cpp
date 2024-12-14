#include<bits/stdc++.h>
using namespace std;

void solve(int len,int n,int cur){
    if(len==n){
        for(int i=0;i<n;++i){
            cout<<!!(cur&(1<<i));
        }
        cout<<'\n';
        return;
    }
    
    if(cur%2==0)solve(len+1,n,cur*2+1);
    else solve(len+1,n,cur*2);
}

signed main(){
    cout<<"Nhap do dai n: ";
    int n;
    cin>>n;
    
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve(1,n,0);
    solve(1,n,1);
    return 0;
}