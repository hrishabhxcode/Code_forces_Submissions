#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

 int n ; 
cin>> n ; 

int  k = n ; 
int rev = 0  ; 
int rem ;
while(n!=0){





rem = n%10 ; 

rev = rev * 10 + rem ;  

n = n/10 ; 


}

cout<<rev<<endl ;



if(k==rev){
cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}



    return 0;
}
