/*********************************************************************
                        UNIVERSIDAD DE LAS FUERZAS ARMADAS"ESPE"
* Autor: Erick Santamaria
* Carrera: Ingenieria de Software
* Materia: Estructuras de datos
* Nrc: 6396
*********************************************************************
    Programa basado en TDA que realice la siguiente operación matemática.
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
#include<math.h>
#include "Fraccion.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::calcular()
// Purpose:    Implementation of Fraccion::calcular()
// Return:     float
////////////////////////////////////////////////////////////////////////

// Calcula numerador ((a*d)+(b*c)) y denominador (b*d)
void Fraccion::calcular(float a, float b, float c,float d)
{
	Fraccion fraccion;

   float fraccionValidacion;
			//Valida que la fraccion no sea 1/0 || 0/0
			if(b==0||d==0){
				cout<<"No existe solucion en el campo de los reales"<<endl;
				system("pause");
			}else{
   				fraccion.setNumerator((a*d)+(b*c));
				fraccion.setDenominator(b*d);
				cout<<"La solucion de numerador ((a*d)+(b*c)) / denominador (b*d) es: "<<fraccion.getNumerator()<<"/"<<fraccion.getDenominator()<<endl;
				system("pause");
			}
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getNumerator()
// Purpose:    Implementation of Fraccion::getNumerator()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Fraccion::getNumerator(void)
{
   return numerator;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setNumerator(float newResult1)
// Purpose:    Implementation of Fraccion::setNumerator()
// Parameters:
// - newResult1
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setNumerator(float newNumerator)
{
   numerator = newNumerator;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getDenominator()
// Purpose:    Implementation of Fraccion::getDenominator()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Fraccion::getDenominator(void)
{
   return denominator;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setDenominator(float newResult2)
// Purpose:    Implementation of Fraccion::setDenominator()
// Parameters:
// - newResult2
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setDenominator(float newDenominator)
{
   denominator = newDenominator;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::Fraccion()
// Purpose:    Implementation of Fraccion::Fraccion()
// Return:
////////////////////////////////////////////////////////////////////////

Fraccion::Fraccion()
{
}
