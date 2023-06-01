#include<iostream>
using namespace std;
int main(){
	int limite,numero,c;
	numero=15;
	for(limite=1;limite<=numero;limite++){
		if (numero%limite==0){
			numero/=limite;
			cout<<limite<<endl;
		}
	}
	return 0;
}
