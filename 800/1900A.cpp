#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F0R(i,n) for(int i=0;i<n;i++)
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        bool hasThreeDots=false;
        for(int i=0;i<n-2;i++){
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
                hasThreeDots=true;
                break;
            }
        }
        if(hasThreeDots) cout<<2<<endl;
        else{
            int count=0;
            for(char ch:s){
                if(ch=='.') count++;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}