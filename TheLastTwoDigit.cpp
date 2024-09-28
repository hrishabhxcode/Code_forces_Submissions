#include<bits/stdc++.h>
#define ll long long 
using namespace std ; 

int main(){

ll a, b, c , d ; 

cin>>a>>b>>c>>d ; 

a = a%100 ; 
b = b%100 ; 
c = c%100 ; 
d = d%100 ; 

ll product = a*b*c*d;


product = product%100 ;

if(product<10){
    cout<<0<<product;
}
else{
    cout<<product<<endl;
}

return 0 ; 




}

