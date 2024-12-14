#include<bits/stdc++.h>
#define int long long
using namespace std;

int memo[1005];
int solve(int n){
    if(n<=1)return n;
    if(memo[n]!=-1)return memo[n];
    
    return memo[n]=solve(n-1)+solve(n-2);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    
    memset(memo,-1,sizeof(memo));
    cout<<solve(n);
    return 0;
}