#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std ; 


int main(){

//Ax^2+Bx+C = 0 


int l ; 

int a , b, c , d ; 

cin>>a ; 
cin>>b;
cin>>c;

//Calculate Discriminant


d = b*b - 4*a*c ;

double k = sqrt(d);

if(a!=0){
float p = ((-b)/(2*a));
}

double r1 = (((-b)+k)/(2*a));
double r2 = (((-b)-k)/(2*a));


if(a==0  && b!=0){
    cout<<1<<endl;
    cout<<(-c/(-b))<<endl;
}



if(a==0  && b==0 && c==0){
    cout<<-1<<endl;
}

if(a!=0){
if(d==0 && ((b/(2*a))==1)){
cout<<1<<endl;
cout<<(-1)<<endl;
}

}





if(d>0){
    cout<<2<<endl;

cout<<r2<<endl;
cout<<r1<<endl;

}


if(d<0){
    cout<<0<<endl;
}




}