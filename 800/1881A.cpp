#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F0R(i,n) for(int i=0;i<n;i++)
#define mp map<int,int>
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        string x,s;cin>>x>>s;
        int ans=0;
        while(x.size()<s.size()){
            x+=x;
            ans++;
        }
        if(x.find(s)!=-1){
            cout<<ans<<endl;
            continue;
        }
        x+=x;
        ans++;
        if(x.find(s)!=-1){
            cout<<ans<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}