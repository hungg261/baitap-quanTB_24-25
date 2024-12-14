#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(int n){
    for(int i=1;i*5<=n;++i){
        int dung=i*5;
        for(int j=(n-i+2)%3+1;j*3<=n-dung;j+=3){
            int nam=j*3,
                k=n-i-j;
            
            if(k>0&&dung+nam+k/3==n){
                cout<<"("<<i<<", "<<j<<", "<<k<<")\n";
            }
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n=100;
    
    solve(n);
    return 0;
}