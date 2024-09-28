#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define Yes cout<<"Yes\n";
#define No cout<<"No\n";


const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{

fastio
    
ll x ; 
cin>>x ;

for(int i = 1  ;  i<=x ; i++){

if(x%i!=0){
    cout<<x<<" ";
}

}

    return 0;
}