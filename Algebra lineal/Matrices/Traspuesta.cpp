#include<iostream>
using namespace std;

int main(){
	int original[100][100],row=3,column=3,traspuesta[100][100];
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cin>>original[i][j];
		}
	}
	cout<<"Original"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cout<<original[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"Traspuesta"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			traspuesta[i][j]=original[j][i];
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cout<<traspuesta[i][j]<<" ";
		}
		cout<<"\n";
	}	
	return 0;
}
