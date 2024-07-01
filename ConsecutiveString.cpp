#include<iostream>
#include<string>

#define N 1e6 

using namespace std ; 




int maxCount(string &s ){

int length = s.length() ; 
int count = 0 ; 

for(int i = 0 ; i<length ; i++){
	for(int j = i+1 ; j<length ; j++){

		if(s[i]==s[j]){
			count++ ; 
		}


	}

	
}
return count ; 
}





int main(){
	
	string s ; 
	
	s = "AAAAAA";
	
	cout<<maxCount(s);
	
	
	
return 0 ;
}