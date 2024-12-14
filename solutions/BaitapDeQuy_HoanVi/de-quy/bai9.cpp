#include<bits/stdc++.h>
#define int long long
using namespace std;

int solve_chan(int n,int res){
    if(n==0){
        return res;
    }
    if((n%10)%2==0)res+=n%10;
    return solve_chan(n/10,res);
}

int solve_le(int n,int res){
    if(n==0){
        return res;
    }
    if((n%10)%2==1)res+=n%10;
    return solve_le(n/10,res);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    
    cout<<"Tong chu so chan: "<<solve_chan(n,0)<<'\n';
    cout<<"Tong chu so le: "<<solve_le(n,0)<<'\n';
    return 0;
}