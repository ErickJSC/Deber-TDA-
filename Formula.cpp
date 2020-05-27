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

#include "Fraccion.h"
#include "Formula.h"

////////////////////////////////////////////////////////////////////////
// Name:       Formula::Formula()
// Purpose:    Implementation of Formula::Formula()
// Return:
////////////////////////////////////////////////////////////////////////

Formula::Formula()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::getNum1()
// Purpose:    Implementation of Formula::getNum1()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Formula::getNum1(void)
{
   return num1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::setNum1(float newNum1)
// Purpose:    Implementation of Formula::setNum1()
// Parameters:
// - newNum1
// Return:     void
////////////////////////////////////////////////////////////////////////

void Formula::setNum1(float newNum1)
{
   num1 = newNum1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::getNum2()
// Purpose:    Implementation of Formula::getNum2()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Formula::getNum2(void)
{
   return num2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::setNum2(float newNum2)
// Purpose:    Implementation of Formula::setNum2()
// Parameters:
// - newNum2
// Return:     void
////////////////////////////////////////////////////////////////////////

void Formula::setNum2(float newNum2)
{
   num2 = newNum2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::getNum3()
// Purpose:    Implementation of Formula::getNum3()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Formula::getNum3(void)
{
   return num3;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::setNum3(float newNum3)
// Purpose:    Implementation of Formula::setNum3()
// Parameters:
// - newNum3
// Return:     void
////////////////////////////////////////////////////////////////////////

void Formula::setNum3(float newNum3)
{
   num3 = newNum3;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::getNum4()
// Purpose:    Implementation of Formula::getNum4()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Formula::getNum4(void)
{
   return num4;
}

////////////////////////////////////////////////////////////////////////
// Name:       Formula::setNum4(float newNum4)
// Purpose:    Implementation of Formula::setNum4()
// Parameters:
// - newNum4
// Return:     void
////////////////////////////////////////////////////////////////////////

void Formula::setNum4(float newNum4)
{
   num4 = newNum4;
}
