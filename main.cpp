
#include <iostream>
using namespace std;

void imprimir(int a[], int n);

int main() {

	int XD[100];
	int n,i=0, YT = 0 , j=1;
  j++;
	cout << "INGRESE EL TAMANIO:";
	cin >> n;
	imprimir(XD, n);
	cout <<"Arreglo"<<i+1<< "    "<< XD[i]<< endl ;

}


void imprimir(int a[], int n)
{
	int  i, YT = 0;
	int XD[100];
	
	for (i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			XD[YT] = i;
			YT++;
		}
	}
	for (i = 0; i < n; i++)
	{
		cout <<"Arreglo"<<i+1<< "    "<< XD[i]<< endl ;
	}
}

