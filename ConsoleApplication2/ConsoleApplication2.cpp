#include <iostream>
#include <string>
#include <Windows.h>
#include "miLib.h"
using namespace std;

/*
	* En octubre inician las votaciones de gobernación
	* Asamblea, Alcadias, Consejos, sabiendo esto
	* el aspirante a la gobernación del cesar, pepito perez
	* desea conocer cuantos votantes tiene con votos fuertes un
	* dia antes de la elección, para ello, pepito perez
	* necesita registrar en una base de datos con n personas 
	* y estas personas tiene los siguientes datos:
	* Primer Nombre, Primer Apellido, Correo, 
	* Numero telefono, Edad, puesto de votación y Cedula
	* para ellos debes construir un algoritmo que nos permita
	* almacenar la información de cada persona que es un votante para 
	* pepito, pero pepito no sabe cuantos va a registrar por ende no
	* el debe cerrar la sesión de software para finalizar
	* se debe construir un menu con la siguiente funcionalidades
	* //1 -> visualizar votantes
	* //2 -> crear votantes
	* //3 -> eliminar votantes
	* //4 -> Actualizar votantes
	* //5 -> Consultar vontantes por cedula
	* //6 -> cerrar software
*/



int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	system("color 02");
	string seguir = "";

	do {
		seguir = "n";
		cout << "*******************************************" << endl;
		cout << "*******************MENU********************" << endl;
		cout << endl;
		cout << "Seleccione una opción:"<<endl;
		cout << "*******************************************" << endl;
		cout << "1: Visualizar Votantes"<<endl;
		cout << "2: Crear Votantes " << endl;
		cout << "3: Eliminar Votantes" << endl;
		cout << "4: Actualizar Votantea" << endl;
		cout << "5: Consultar Votantes" << endl;
		cout << "6: Cerrar Sesión" << endl;
		cout << "*******************************************" << endl;
		cout << "****************FIN MENU*******************" << endl;
		cout << endl;

		int opcion = 0;
		cout << "Escriba la opción:";
		cin >> opcion;

		switch (opcion)
		{
			case 1: {
				//visualizar
				visualizarVotantes();
				seguir = "s";
				break;
			}
			case 2: {
				//crear
				crearVotantes();
				seguir = "s";
				break;
			}
			case 3: {
				//eliminiar
				break;
			}
			case 4: {
				actualizarVotantes();
				seguir = "s";
				break;
			}
			case 5: {
				consultarVotantes();
				seguir = "s";
				break;
			}
			case 6: {
				//cerrar
				break;
			}
			default: {
				system("cls");
				seguir = "s";
				cout << "\nDigito una opción invalidad, por favor vuelva escribir una" <<
					" Opción valida"<<endl;
				break;
			}
		}
	} while (seguir == "s" || seguir == "S");

}

void visualizarVotantes() {
	system("cls");
	cout << "**************************" <<endl;
	cout << "*****Visualizar datos*****" << endl;
	cout << "**************************" << endl;
	for (int i = 0; i < size(primerNombres); i++) {
		if (primerNombres[i] == "") {
			break;
		}
		cout << "Primer Nombre: " << primerNombres[i] << endl;
		cout << "Primer Apellido: " << primerApellidos[i] << endl;
		cout << "Correo: " << correos[i] << endl;
		cout << "Telefono: " << telefonos[i] << endl;
		cout << "Edad: " << edades[i] << endl;
		cout << "Puesto Votación: " << puestoVotaciones[i] << endl;
		cout << "Cedula: " << cedulas[i] << endl;
	}
}
void crearVotantes() {
	system("cls");
	bool seguir = false;
	do {
		int opcion = 0;
		cout << "********************"<<endl;
		cout << "***Sub Menu Crear***" << endl;
		cout << "********************" << endl;
		cout << "1: Crear"<<endl;
		cout << "2: Salir"<<endl;
		cout << "Digite una opcion:";
		cin >> opcion;
		
		switch (opcion)
		{

		case 1: {
			string nombre = "";
			string apellido = "";
			string correo = "";
			string telefono = "";
			int edad = 0;
			int puestoVotacion = 0;
			string cedula = "";
			//falta tomar los datos de cada persona

			cout << "\n Digite el Primer Nombre: ";
			cin >> nombre;
			cout << "\n Digite el Primer Apellido: ";
			cin >> apellido;
			cout << "\n Digite el Correo: ";
			cin >> correo;
			cout << "\n Digite el telefono: ";
			cin >> telefono;
			cout << "\n Digite la edad: ";
			cin >> edad;
			cout << "\n Digite puesto de votación: ";
			cin >> puestoVotacion;
			cout << "\n Digite su cedula: ";
			cin >> cedula;
			bool resultado =
				crear(nombre,
					apellido,
					correo,
					telefono,
					edad,
					puestoVotacion,
					cedula);

			if (resultado) {
				cout << "\n Registro exitoso"<<endl;
			}
			else {
				cout << "\n Registro Fallido"<<endl;
			}
			break;
		}
		case 2: {
			seguir = false;
			break;
		}
		default:
			seguir = true;
			cout << "Digite una opción correcta:" << endl;
			break;
		}
		system("cls");
	} while (seguir);
}

void actualizarVotantes() {
	system("cls");

	cout << "***********************" << endl;
	cout << "***Consultar Votante y actualizar***" << endl;
	cout << "**********************" << endl;
	bool seguir = true;
	do {
		seguir = true;
		string cedula = "";
		cout << "Escriba el documento a consultar: " << endl;
		cin >> cedula;
		int indice = -1;
		for (int i = 0; i < size(primerNombres); i++) {
			if (cedulas[i] == cedula) {
				seguir = false;
				cout << "******************************" << endl;
				cout << "*******Cedula Encontrada******" << endl;
				cout << "Primer Nombre: " << primerNombres[i] << endl;
				cout << "Primer Apellido: " << primerApellidos[i] << endl;
				cout << "Correo: " << correos[i] << endl;
				cout << "Telefono: " << telefonos[i] << endl;
				cout << "Edad: " << edades[i] << endl;
				cout << "Puesto Votación: " << puestoVotaciones[i] << endl;
				cout << "Cedula: " << cedulas[i] << endl;
				indice = i;
				break;
			}
		}

		if (indice != -1) {
			string nombre = "";
			string apellido = "";
			string correo = "";
			string telefono = "";
			int edad = 0;
			int puestoVotacion = 0;
			string cedula = "";
			//falta tomar los datos de cada persona

			cout << "\n Digite el Primer Nombre: ";
			cin >> nombre;
			cout << "\n Digite el Primer Apellido: ";
			cin >> apellido;
			cout << "\n Digite el Correo: ";
			cin >> correo;
			cout << "\n Digite el telefono: ";
			cin >> telefono;
			cout << "\n Digite la edad: ";
			cin >> edad;
			cout << "\n Digite puesto de votación: ";
			cin >> puestoVotacion;
			cout << "\n Digite su cedula: ";
			cin >> cedula;
			bool resultado =
				actualizar(nombre,
					apellido,
					correo,
					telefono,
					edad,
					puestoVotacion,
					cedula,
					indice);

			if (resultado) {
				cout << "\n Registro exitoso" << endl;
			}
			else {
				cout << "\n Registro Fallido" << endl;
			}
		}
		if (seguir) {


			cout << "\n no se encontro información de la persona" << endl;
			string s = "";
			cout << "\nDesea Seguir Consultando (s/n)?" << endl;
			cin >> s;
			if (s == "s") {
				seguir = true;
			}
			else {
				seguir = false;
			}
		}
	} while (seguir);
}
void consultarVotantes() {
	system("cls");

	cout << "***********************" << endl;
	cout << "***Consultar Votante***" << endl;
	cout << "**********************" << endl;
	bool seguir = true;
	do {
		seguir = true;
		string cedula = "";
		cout << "Escriba el documento a consultar: "<<endl;
		cin >> cedula;
		for (int i = 0; i < size(primerNombres); i++) {
			if (cedulas[i] == cedula) {
				seguir = false;
				cout << "******************************"<<endl;
				cout << "*******Cedula Encontrada******" << endl;
				cout << "Primer Nombre: " << primerNombres[i] << endl;
				cout << "Primer Apellido: " << primerApellidos[i] << endl;
				cout << "Correo: " << correos[i] << endl;
				cout << "Telefono: " << telefonos[i] << endl;
				cout << "Edad: " << edades[i] << endl;
				cout << "Puesto Votación: " << puestoVotaciones[i] << endl;
				cout << "Cedula: " << cedulas[i] << endl;
				break;
			}
		}
		if (seguir) {


			cout << "\n no se encontro información de la persona" << endl;
			string s =  "";
			cout << "\nDesea Seguir Consultando (s/n)?"<<endl;
			cin >> s;
			if (s == "s") {
				seguir = true;
			}
			else {
				seguir = false;
			}
		}
	} while (seguir);
	
}


bool crear(string nombre,
	string apellido,
	string correo,
	string telefono,
	int edad,
	int puestoVotacion,
	string cedula) {

	int indece = -1;
	for (int i = 0; i < size(primerNombres); i++) {
		if (primerNombres[i] == "") {
			indece = i;
			break;
		}
	}
	if (indece == -1) return false;
	primerNombres[indece] = nombre;
	primerApellidos[indece] = apellido;
	correos[indece] = correo;
	telefonos[indece] = telefono;
	edades[indece] = edad;
	puestoVotaciones[indece] = puestoVotacion;
	cedulas[indece] = cedula;
	return true;
}


bool actualizar(string nombre,
	string apellido,
	string correo,
	string telefono,
	int edad,
	int puestoVotacion,
	string cedula,
	int indece) {

	if (nombre.length() > 0) {
		primerNombres[indece] = nombre;
	}
	if (apellido != "") {
		primerApellidos[indece] = apellido;
	}
	if (correo != "") {
		correos[indece] = correo;
	}
	if (telefono != "") {
		telefonos[indece] = telefono;
	}

	if (edad > 0) {
		edades[indece] = edad;
	}

	if (puestoVotacion > 0) {
		puestoVotaciones[indece] = puestoVotacion;
	}

	if (!cedula.empty()) {
		cedulas[indece] = cedula;
	}
	return true;
}