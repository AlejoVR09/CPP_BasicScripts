#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	int x;
	srand(time(NULL));
	x=1+rand()%(100);
	cout<<x;
	return 0;
}
