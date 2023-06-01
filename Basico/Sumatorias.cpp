#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	a=1;
	b=2;
	c=0;
	for(d=1;d<=5;d++){
		c+=a-b;
		a=a+2;
		b=b+2;
	} 
	cout<<c;
	return 0;
}
