#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    
    int a=ceil(sqrtl(n));
    if((a-1)*a>=n)cout<<(a-1+a)*2<<'\n';
    else cout<<a*4<<'\n';
    return 0;
}
