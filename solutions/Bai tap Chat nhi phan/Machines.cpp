#include<bits/stdc++.h>
#define int long long
using namespace std;

const int MAX=2e5;
int n,t,a[MAX];

bool check(int mid){
    int cnt=0;
    for(int i=0;i<n;++i){
        cnt+=mid/a[i];
        if(cnt>=t)return true;
    }
    return false;
}

int tknp(){
    int l=1,h=1e18,res=-1;
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