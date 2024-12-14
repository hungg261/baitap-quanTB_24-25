#include<bits/stdc++.h>
#define int long long
using namespace std;

char convert(int n){
    if(n<=9)return n+'0';
    return n-10+'A';
}

string solve(int n,string trace){
    if(n==0){
        if(trace.empty())trace+='0';
        return trace;
    }
    return solve(n/16,convert(n%16)+trace);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    
    cout<<solve(n,"");
    return 0;
}