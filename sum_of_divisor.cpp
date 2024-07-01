#include<iostream>
#define mod  1000000007 
using namespace std ; 


int main(){
long long n ;
 cin>>n ;


 int sum = 0 ; 

 for(int i = 1 ; i<=n ; i++){

    if(n%i==0){
        sum = sum+i;
    }

 } 


 int ans = sum%mod ; 

 cout<<ans;




}