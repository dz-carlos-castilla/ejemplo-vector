#include <iostream>
#include <string>
using namespace std;
/*
	* En el centro comercial se cometio un robo
	* donde habian 10 personas nada mas
	* se dice que el robo lo cometio la persona que estaba
	* en la fila en la posición 4 pero su nombre segun dicen
	* se llama carlos, recorrer toda la fila y preguntar si en la 
	* posición   4 el individuo se llama carlos
*/

int main()
{

	string nombres[10];
	cout << size(nombres)<<endl;
	for (int i = 0; i < size(nombres); i++) {
		cout << "Digite el nombre de la persona de la fila " << i << " :"<<endl;
		cin >> nombres[i];
	}

	for (int i = 0; i < size(nombres); i++) {
		cout << nombres[i]<<endl;
		if (i == 4 && nombres[i] == "carlos") {
			cout << "Te encontre "<<nombres[i]<<" eres el ladron" << endl;
		}
	}
}

