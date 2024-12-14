#include<bits/stdc++.h>
#define int long long
using namespace std;

string solve(int n,string trace){
    if(n==0){
        if(trace.empty())trace+='0';
        return trace;
    }
    return solve(n/2,(char)(n%2+'0')+trace);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    
    cout<<solve(n,"");
    return 0;
}