#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a,b;
    cin>>a>>b;
    
    int gcd=__gcd(a,b);
    cout<<"UCLN(a,b) = "<<gcd<<'\n';
    cout<<"BCNN(a,b) = "<<a/gcd*b<<'\n';
    return 0;
}