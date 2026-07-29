#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define F0R(i,n) for(int i=0;i<n;i++)
#define mp map<int,int>
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vi b(n),a;
        F0R(i,n)cin>>b[i];
        a.pb(b[0]);
        for(int i=1;i<n;i++){
            if(b[i]<b[i-1]){
                a.pb(1);
            }
            a.pb(b[i]);
        }
        cout<<a.size()<<endl;
        for(int ele:a)cout<<ele<<" ";
        cout<<endl;
    }
    return 0;
}