#include<bits/stdc++.h>
using namespace std;

namespace solver{
    namespace cach1{
        int power(int a,int b){
            int ans=1;
            while(b--)ans*=a;
            return ans;
        }
        
        int cntdigit(int n){
            return (int)log10(n)+1;
        }
        
        bool tinh(int n){
            int sum=0,dup=n,mu=cntdigit(n);
            while(dup>0){
                int cur=dup%10;
                sum+=power(cur,mu);
                dup/=10;
            }
            return sum==n;
        }
        
        void solve(){
            for(int i=100;i<=9999;++i){
                if(tinh(i))cout<<i<<' ';
            }
        }
    }
    
    namespace cach2{
        void solve(){
            cout<<"153 370 371 407 1634 8208 9474";
        }
    }
}

using namespace solver;
signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    cach1::solve();
    return 0;
}