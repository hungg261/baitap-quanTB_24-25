#include<bits/stdc++.h>
#define int long long
using namespace std;

double solve(int n,double res){
    if(n==0)return res;
    return solve(n-1,res+1.0/n);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    
    cout<<fixed<<solve(n,0);
    return 0;
}