#include<bits/stdc++.h>
#define int long long
using namespace std;

int solve(int n,int res){
    if(n==0)return res;
    return solve(n-1,res+n*n);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    
    cout<<solve(n,0);
    return 0;
}