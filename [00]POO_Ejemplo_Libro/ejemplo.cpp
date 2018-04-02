/*Cuando la funcion se define fuera de la clase se debe usar el operador de hambito ::*/
//&n = La direccion de n
#include<iostream>
#include<stdlib.h>
using namespace std;

class Pareja{
	private:// Atributos
	int a, b;
	
	public:// Metodos
	Pareja (int, int);//Constructor(debe tener el nombre de la clase)
	void Guarda();
	void Lee();
};

//Constructor, nos sirve para inicializar los atributos
//Inicializar el constructor(los atributos casi siempre tienen un nombre diferente a las que inicializamos).
Pareja::Pareja(int _a, int _b){
	a = _a;
	b = _b;
}

void Pareja::Guarda(){
	a=33;
	b=44;
}

void Pareja::Lee() {
	cout << "Valor de a: " << a << endl;
	cout << "Valor de b: " << b << endl;
}


int main(){
	//Creo mi objeto
	Pareja par1(12,22);
	
	//Llamo mi funcion.
	par1.Guarda();
	par1.Lee();
	
	system ("pause");
	return 0;
}
