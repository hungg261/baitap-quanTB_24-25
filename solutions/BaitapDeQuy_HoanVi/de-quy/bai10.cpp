#include<bits/stdc++.h>
#define int long long
using namespace std;

int solve_max(int n,int res){
    if(n==0){
        return res;
    }
    return solve_max(n/10,max(res,n%10));
}

int solve_min(int n,int res){
    if(n==0){
        return res;
    }
    return solve_min(n/10,min(res,n%10));
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    
    cout<<"Chu so lon nhat: "<<solve_max(n,0)<<'\n';
    cout<<"Chu so be nhat: "<<solve_min(n,n)<<'\n';
    return 0;
}