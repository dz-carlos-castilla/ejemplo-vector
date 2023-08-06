
#include <iostream>
#include <string>

using namespace std;

string primerNombres[100] = {};
string primerApellidos[100] = {};
string correos[100] = {};
string telefonos[100] = {};
int edades[100] = {};
int puestoVotaciones[100] = {};
string cedulas[100] = {};


void visualizarVotantes();
void crearVotantes();
void eliminarVotantes();
void actualizarVotantes();
void consultarVotantes();


bool crear(string nombre, 
	string apellido,
	string correo,
	string telefono,
	int edad,
	int puestoVotacion,
	string cedula);


bool actualizar(string nombre,
	string apellido,
	string correo,
	string telefono,
	int edad,
	int puestoVotacion,
	string cedula,
	int indece);