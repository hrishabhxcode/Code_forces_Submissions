#include <bits/stdc++.h>
using namespace std;

// Main function to run the program
int main() 
{ 

    int t ; 
    int arr[100000000] ;
    cin>>t ;

    for(int i = 0 ; i<t ; i++){
        cin>>arr[i];
    }




    int visited[t], count_dis=0;    

    for(int i=0; i<t; i++){

        if(visited[i]!=1){
           for(int j=i+1; j<t; j++){
              if(arr[i]==arr[j]){
                 visited[j]=1;
              }
            }
             count_dis++;
         }
     }
    cout<<count_dis;
    return 0; 
}