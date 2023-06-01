#include<iostream>
using namespace std;
int main(){
	int iterador,limite,vector[100],limiteInverso;
	limite=5;
	for(iterador=0;iterador<limite;iterador++){
		cin>>vector[iterador];
	}
	for(limiteInverso=limite-1;limiteInverso>=0;limiteInverso--){
		cout<<vector[limiteInverso]<<endl;
	}
	return 0;
}
