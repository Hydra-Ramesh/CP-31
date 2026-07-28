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
        int ans=0;
        for(int i=0;i<10;i++){
            string s;cin>>s;
            for(int j=0;j<10;j++){
                if(s[j]=='X'){
                    ans+=min({i,9-i,j,9-j})+1;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}