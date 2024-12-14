#include<bits/stdc++.h>
using namespace std;

void output(int n,int cur,int mid,const int&original){
    for(int i=n-1;i>=0;--i){
        cout<<!!(cur&(1<<i));
    }
    if(original%2==1){
        cout<<mid;
    }
    for(int i=0;i<n;++i){
        cout<<!!(cur&(1<<i));
    }
    cout<<'\n';
}

void solve(int len,int n,int cur,const int&original){
    if(len==n){
        output(n,cur,0,original);
        if(original%2==1)output(n,cur,1,original);
        return;
    }

    solve(len+1,n,cur*2,original);
    solve(len+1,n,cur*2+1,original);
}

signed main(){
    cout<<"Nhap do dai n: ";
    int n;
    cin>>n;
    
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve(0,n/2,0,n);
    return 0;
}