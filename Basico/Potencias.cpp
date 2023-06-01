#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	a=5;
	d=5;
	b=3;
	c=1;
	while(c<b){
		a*=d;			
		c++;
	}
	cout<<a;
	return 0;
}
