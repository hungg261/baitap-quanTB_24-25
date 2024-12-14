#include<bits/stdc++.h>
#define int long long
using namespace std;

int solve(int n,int cnt){
    if(n==0){
        return cnt;
    }
    return solve(n/10,cnt+1);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    
    cout<<solve(n,0);
    return 0;
}