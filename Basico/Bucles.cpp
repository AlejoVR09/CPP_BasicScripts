#include<iostream>
#include<string>
using namespace std;
int main(){
	
	int val,acum;
	val=1;
	acum=0;
	
	while(val!=0){
		
		cin>>val;
		
		if(val>=0){
			
			acum+=val;	
						
		}
	}
	
	cout<<acum;
	return 0;
}
