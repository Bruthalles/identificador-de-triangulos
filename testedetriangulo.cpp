#include <iostream>

using namespace std;

int main()
{    int a,b,c;
     cout<< "Teste identificador de triangulo"<<endl;
     cout<< "Digite valor de a"<<endl;
     cin>> a;
     cout<< "Digite valor de b"<<endl;
     cin>> b;
     cout<< "Digite valor de c"<<endl;
     cin>> c;
     
if ((a<b+c)&&(b<a+c)&&(c<a+b)){
	if ((a==b)&&(b==c)){
		cout<< "triangulo equilatero";
	}
	else{
		if ((a==b) || (a==c) || (c==b)){
			cout<< "triangulo isosceles";
			
			
			
		}
		
		else { ((a!=b)&&(b!=c));
			cout<< "triangulo escaleno";
		
			
			
			
		}
		}
	}
	

	
	
	
	
	
	
	
	
	
}	



