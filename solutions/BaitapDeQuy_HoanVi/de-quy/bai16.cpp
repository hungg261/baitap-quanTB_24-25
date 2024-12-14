#include<bits/stdc++.h>
#define int long long
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a,b;
    cin>>a>>b;
    
    cout<<gcd(a,b);
    return 0;
}