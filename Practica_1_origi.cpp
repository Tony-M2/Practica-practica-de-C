//Titulo: Valores de tipos de datos
//Autor: Luis Antonio Moreno Miranda 
//Descripcion: Programa para probar los tipos de valores de datos
//Fecha: 2024-01-11


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	short int numero_entero_p;
	unsigned short int numero_entero_p1;
	int numero_entero;
	unsigned int numero_entero_s;
	//float numero_decimal;
	//double numero_decimal_g;
	//asignamos valores limites de los tipos de datos
	numero_entero_p=32767; //valor limite del tipo de dato
	cout <<"Numero entero pequeño: " <<numero_entero_p<<endl;
	numero_entero_p1=-6; //valor fuera del rango 65535 65530
	cout <<"Numero entero pequeño positivo: " <<numero_entero_p1<<endl;
	//asignar los valores maximos para unsigned int y int
	numero_entero=2147483647;
	cout <<"Numero entero " <<numero_entero<<endl;
	
	/*numero_entero_s=2147483647;
	cout <<"Numero entero " <<numero_entero_s<<endl;
	//asignar los valores maximos para unsigned int y int
	numero_entero_p1=numero_entero_p; //NO es correcta!. 
	cout <<"Numero entero pequeño 1ra asignacion " <<numero_entero_p1<<endl;*/
	
	//asignacion de valores
	numero_entero_p1 = numero_entero_p;//no es correcta!. Los valores sn correctos?
	cout << "Numero entero pequeño 1ra asignacion: "<<numero_entero_p1<<endl;
	/*Rango del short int = -32768 al 32767 // unsigned short int = limite de 0 a 65535*/
	numero_entero_p=32767;
	numero_entero_p1 = numero_entero_p;//no es correcta!. Los valores son correctos?
	cout << "Numero entero pequeño 2da asignacion: "<<numero_entero_p1<<endl;
	numero_entero_p=32760;
	numero_entero_p1 = numero_entero_p;//Si es correcta. Los valores son correctos?
	cout << "Numero entero pequeño 2da asignacion: "<<numero_entero_p1<<endl;	
	
	
	return 0;
}
