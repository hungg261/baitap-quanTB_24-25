#include<bits/stdc++.h>
#define int long long
using namespace std;

const int MAX=1000;
int mark[MAX+5];

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    
    while(n--){
        int cur;
        cin>>cur;
        
        ++mark[cur];
    }
    
    int target=*max_element(mark,mark+MAX+1);
    for(int i=0;i<=MAX;++i){
        if(mark[i]==target){
            cout<<i<<'\n';
        }
    }
    return 0;
}
