#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int array[100][100],row=3,column=3;
	
	for(int i=0;i<row;i++){
		
		for(int j=0;j<column;j++){
			
			cin>>array[i][j];
			fflush(stdin);
			
		}
	}
	
	fflush(stdin);
	
	for(int i=0;i<row;i++){
		
		for(int j=0;j<column;j++){

			cout<<array[i][j]<<" ";	
						
		}
		cout<<endl;
	}
	getch();
	return 0;
}
