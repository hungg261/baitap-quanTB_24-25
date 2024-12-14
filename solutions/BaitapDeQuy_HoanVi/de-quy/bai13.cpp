#include<bits/stdc++.h>
#define int long long
using namespace std;

int solve(int arr[],int n,int res){
    if(n==0)return res;
    return solve(arr,n-1,res+arr[n]);
}

int a[100005];
signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    
    cout<<solve(a,n,0);
    return 0;
}