//Multiply 2 numbers without using the multiplication symbol
#include<iostream>

using namespace std;


void Mulply(int a, int b);

main(){
	
	int a,b;
	cout<<"Enter a number ";
	cin>>a;	
	cout<<"Enter a number ";
	cin>>b;
	
	Mulply(a,b);
	return 0;
}

void Mulply(int a, int b){
	int r = 0;
	
	if(a > b){
		for( int i = 0; i < a; i++){
		r += b;
		}	
	}
	else{
		for( int i = 0; i < b; i++){
		r += a;
		}	
	}
	
	cout<<"El resultado es: "<<r<<endl;
}