#include<iostream>
#include<iomanip>
using namespace std ; 

int main(){
	
	double discount , price ;
	cin>>discount>>price ; 

	double k = (price*100);
	double j = (100-discount);

	double price_old  = k/j ; 
	cout<<fixed<<setprecision(2)<<price_old<<endl;

	


}