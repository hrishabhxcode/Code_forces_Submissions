#include<iostream>
using namespace std ;

int main(){

    int x ; 
    int y ; 

cin>>x ; 
cin>>y ; 

if(x%y==0 || y%x==0){
    cout<<"Multiples"<<endl;
}
else{
    cout<<"No Multiples"<<endl;
}

}
