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
    int n;
    cin>>n;
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        ans=min(abs(x),ans);
    }
    cout<<ans<<endl;
    return 0;
}