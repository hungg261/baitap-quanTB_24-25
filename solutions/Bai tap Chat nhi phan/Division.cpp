#include<bits/stdc++.h>
#define int long long
using namespace std;

const int MAX=2e5;
int n,t,a[MAX];

bool check(int mid){
    int cnt=1,cur=a[0];
    for(int i=0;i<n;++i){
        if(a[i]>mid)return false;
        
        if(cur+a[i]>mid){
            ++cnt;
            cur=a[i];
        }
        else cur+=a[i];
        
        if(cnt>t)return false;
    }

    return cnt<=t;
}

int tknp(){
    int l=1,h=2e14,res=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(check(mid)){
            h=mid-1;
            res=mid;
        }
        else l=mid+1;
    }
    return res;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>t;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    
    cout<<tknp()<<'\n';
    return 0;
}