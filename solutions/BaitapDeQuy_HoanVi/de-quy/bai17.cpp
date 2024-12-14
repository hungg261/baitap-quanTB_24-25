#include<bits/stdc++.h>
#define int long long
using namespace std;

int calc(int l,int r,int res=1){
    if(l>r)return res;
    return calc(l+1,r,res*l);
}

int C(int k,int n){
    if(k>n)return 0;
    return calc(k+1,n)/calc(1,n-k);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int k,n;
    cin>>k>>n;
    
    cout<<C(k,n);
    return 0;
}