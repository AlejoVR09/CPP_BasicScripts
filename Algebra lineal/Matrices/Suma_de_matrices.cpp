#include<iostream>
using namespace std;

int main(){
	int a[100][100]={{1,6,4},{7,2,1},{5,6,7}},d[100][100]={{1,2,3},{3,2,1},{5,6,7}},c[100][100];	

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			
			c[i][j]=a[i][j]*d[j][i]+a[i][j+1]*d[j+1][i]+a[i][j+2]*d[j+2][i];
			
			
		}		
		
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<d[i][j]<<"\t";
		}
		cout<<"\n";
	}	
	cout<<"\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<c[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
