#include <iostream>
#include <fstream>//biblioteca necesaria para el manejo de archivos
using namespace std;



int main(){
	ofstream archivo("C:\\Users\\PROGRAMACION\\Desktop\\hola.txt");
	
	if(archivo.is_open()) {
		archivo << "Hola, mundo!\n";
		archivo << "Este es un archivo creado en C++. \n";
		
		archivo.close();
		cout << "archivo creado y datos escritos exitosamente." <<endl;
	} else {
		cerr << "NO se pudo abrir el archivo. " << endl;
	}
	return 0;
}




