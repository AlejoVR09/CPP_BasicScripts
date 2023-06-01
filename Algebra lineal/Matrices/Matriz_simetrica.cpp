#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int a[100][100],b,c[100][100],i,j,e,h[100][100];
	e=3;
	b=3;
	for(i=0;i<e;i++){
		for(j=0;j<b;j++)
		cin>>a[i][j];
	}
	int comp=0;
	for(i=0;i<e;i++){
		for(j=0;j<b;j++){
			if(a[i][j]!=a[j][i]){
				cout<<"No es";
				comp=1;
				break;
			}
		}
		if(comp==1){
		break;
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
