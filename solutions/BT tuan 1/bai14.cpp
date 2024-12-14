#include<bits/stdc++.h>
#define int long long
#define double long double
using namespace std;

double a[100]={1,2,3,4,5,6},target=36;
int n=6;
void solve(int pos,double ans,string trace){
    if(pos==n){
        if(ans==target){
            cout<<string(n-2,'(')<<a[0];
            for(int i=1;i<n;++i){
                cout<<trace[i-1]<<a[i];
                if(i<n-1)cout<<')';
            }
            cout<<'\n';
        }
        return;
    }
    
    solve(pos+1,ans+a[pos],trace+"+");
    solve(pos+1,ans-a[pos],trace+"-");
    solve(pos+1,ans*a[pos],trace+"*");
    solve(pos+1,ans/a[pos],trace+"/");
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve(1,a[0],"");
    
    return 0;
}