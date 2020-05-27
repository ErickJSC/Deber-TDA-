/*********************************************************************
                        UNIVERSIDAD DE LAS FUERZAS ARMADAS"ESPE"
* Autor: Erick Santamaria
* Carrera: Ingenieria de Software
* Materia: Estructuras de datos
* Nrc: 6396
*********************************************************************
-   Programa basado en TDA que realice la siguiente operación matemática.
    a c numerador
    ___ * _____ = _____________
    b d denominador
    Proceso
    numerador ((a*d)+(b*c))
    ___________ = ______________
    denominador (b*d)
**********************************************************************
*/
#include<iostream>
#include <sstream>
#include"Formula.cpp"
#include"Fraccion.cpp"
#include"Ingreso.h"

using namespace std;

int main(){

	Formula obj;
	Fraccion obj2;
	Ingreso ingreso;
	float a,b,c,d;
	string dim;

	cout<<">Ingrese los datos para la resolucion de numerador=[((a*d)+(b*c))]/ [denominador=(b*d)]"<<endl;

		dim=ingreso.leer("Ingrese el valor de a: ",2);
    	istringstream (dim) >> a;
		obj.setNum1(a);

		dim=ingreso.leer("Ingrese el valor de b: ",2);
    	istringstream (dim) >> b;
		obj.setNum2(b);

		dim=ingreso.leer("Ingrese el valor de c: ",2);
    	istringstream (dim) >> c;
		obj.setNum3(c);

		dim=ingreso.leer("Ingrese el valor de d: ",2);
    	istringstream (dim) >> d;
		obj.setNum4(d);


	obj2.calcular(obj.getNum1(),obj.getNum2(),obj.getNum3(),obj.getNum4());

	return 0;
}
