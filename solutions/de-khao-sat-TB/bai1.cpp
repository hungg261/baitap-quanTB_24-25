#include<bits/stdc++.h>
using namespace std;

const int MAXVAL=1e7;
int mark[MAXVAL+3];
signed main(){
    int n;
    cin>>n;
    while(n--){
        int cur;
        cin>>cur;
        
        ++mark[cur];
    }
    cout<<*max_element(mark,mark+MAXVAL+1)<<'\n';
    return 0;
}
