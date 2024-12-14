#include<bits/stdc++.h>
#define int long long
using namespace std;

namespace solve{
    // tim kiem nhi phan - O(log n)
    int cach1(int target){
        int l=1,h=1414213562LL,res=-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(mid*(mid+1)/2<target){
                l=mid+1;
                res=mid;
            }
            else h=mid-1;
        }
        return res;
    }
    
    // toan hoc - O(log n)
    int cach2(int target){
        int ans=(int)((sqrt(8*target+1)-1)/2.0);
        if(ans*(ans+1)/2==target)--ans;
        
        return ans;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    
    if(n<=1e18)cout<<solve::cach1(n);
    else cout<<solve::cach2(n);
    return 0;
}