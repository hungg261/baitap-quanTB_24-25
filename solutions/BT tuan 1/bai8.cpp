#include<bits/stdc++.h>
#define int long long
using namespace std;

int n;
signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    while(n>1){
        cout<<n<<' ';
        if(n%2==0)n/=2;
        else n=3*n+1;

    }
    cout<<1;
    return 0;
}
