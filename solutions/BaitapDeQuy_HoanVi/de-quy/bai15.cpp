#include<bits/stdc++.h>
#define int long long
using namespace std;

bool solve(int arr[],int length,int idx){
    if(idx>length/2)return true;
    if(arr[idx]!=arr[length-idx+1])return false;
    
    return solve(arr,length,idx+1);
}

int a[100005];
signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    
    cout<<(solve(a,n,1)?"Mang doi xung":"Mang khong doi xung");
    return 0;
}