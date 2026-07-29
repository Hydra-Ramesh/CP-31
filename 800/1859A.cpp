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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        F0R(i,n)cin>>a[i];
        sort(a.begin(),a.end());
        int pos=-1;
        for(int i=1;i<n;i++){
            if(a[i]!=a[0]){
                pos=i;
                break;
            }
        }
        if(pos==-1){
            cout<<-1<<endl;
            continue;
        }
        cout<<pos<<" "<<n-pos<<endl;
        F0R(i,pos) cout<<a[i]<<" ";
        cout<<endl;
        F0R(i,n-pos) cout<<a[i+pos]<<" ";
        cout<<endl;
    }

    return 0;
}