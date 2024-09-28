#include<iostream>
using namespace std ;

int main(){

    int a , b , c ;
    char c1 , c2 ;

    cin>>a>>c1>>b>>c2>>c;

    if(c1 == '+'){
        if(a+b==c){
            cout<<"Yes"<<endl;

        }
        else{
            cout<<a+b<<endl;

        }

    }


    if(c1 == '-'){
        if(a-b==c){
            cout<<"Yes"<<endl;

        }
        else{
            cout<<a-b<<endl;
            
        }

    }


    if(c1 == '*'){
        if(a*b==c){
            cout<<"Yes"<<endl;

        }
        else{
            cout<<a*b<<endl;
            
        }

    }


return 0 ; 
}