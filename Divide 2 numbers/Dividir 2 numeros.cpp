#include <iostream>
#include <cmath> // Para la función fabs

void dividir(float a, float b);
using namespace std;

main(){	
	float a=0,b=0;
	 
	 
	cout<<"Ingrese el numerador ";
	cin>>a;
	cout<<"Ingrese el divisor ";	
	cin>>b;
	
	dividir(a,b);

	return 0;
}

void dividir(float a, float b){
	
	float c=0, g=0;
	float epsilon = 0.0001; // Valor de epsilon para la comparación
	
	
	for(float i = 0; i < 1000; i=i+0.01){
		g=i;
		c = i+0.00;
		for(int j = 1; j < b; j++){	
			//cout<<endl<<"++++++++++++++++++++++"<<endl;
			c += i;	
			//cout<<"a: "<<c<<endl;
			//cout<<"b: "<<j<<endl;
			if(j == b-1){
				if (fabs(c + 0.1 -a) < epsilon) 
        			cout<<"Resultado: "<<g<<endl;
				if (fabs(c + 0.01 - a) < epsilon) 
        			cout<<"Resultado: "<<g<<endl;
				if(c == a)
					cout<<"Resultado: "<<g<<endl;
			}
		}	
	}
}