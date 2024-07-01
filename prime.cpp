#include<iostream>
using namespace std ; 


int main(){

int t ;

cin>>t ;   //test_case


while(t--){
    int n ; 
    cin>>n ;
    int product = 1 ; 

    for(int i = 0  ; i<n ;i++){
        int x ; 
        cin>>x;

        product *= x ; 
    }

    int digit = product%10 ; 
 if(digit==2|| digit==3||digit==5){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }


} 


}