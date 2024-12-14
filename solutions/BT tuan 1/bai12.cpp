#include<bits/stdc++.h>
#define int long long
using namespace std;

struct ans{
    int i=1e9,j=1e9,k=1e9;
    
    int sum(){
        return i+j+k;
    }
    
    void update(int ii,int jj,int kk){
        if(ii+jj+kk<sum()){
            i=ii,j=jj,k=kk;
        }
    }
    
    bool valid(){
        return i!=1e9;
    }
} res;

void solve(int n){
    for(int i=0;i*5<=n;++i){
        int cost5=i*5;
        for(int j=0;j*2<=n-cost5;++j){
            int cost2=j*2,
                k=n-cost5-cost2;
            
            if(j>(i+j+k)/2){
                res.update(k,j,i);
            }
        }
    }
    
    if(res.valid())cout<<"("<<res.i<<","<<res.j<<","<<res.k<<"): "<<res.sum()<<'\n';
    else cout<<"Khong co phuong an!";
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    
    solve(n);
    return 0;
}