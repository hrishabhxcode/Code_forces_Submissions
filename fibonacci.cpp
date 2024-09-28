#include <bits/stdc++.h>

using namespace std;




int fact(int n )
{

if(n==1){
    return 0 ; 

}
else if(n==2){
    return 1 ; 

}
else{
    int  k = fact(n-1) + fact(n-2) ; 

return  k ; 

}


int main(){



   int n ; 
   cin>> n; 
   

   



    for(int i = 0 ; i<n ; i++){

        cout<<fact(i)<<" ";
    }


   
 

    return 0;
}