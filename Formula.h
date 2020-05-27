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

#if !defined(__FormulaGeneralModel_Formula_h)
#define __FormulaGeneralModel_Formula_h

class Fraccion;

class Formula
{
public:
   Formula();
   float getNum1(void);
   void setNum1(float newNum1);
   float getNum2(void);
   void setNum2(float newNum2);
   float getNum3(void);
   void setNum3(float newNum3);
   float getNum4(void);
   void setNum4(float newNum4);

   Fraccion* formula;

protected:
private:
   float num1;
   float num2;
   float num3;
   float num4;


};

#endif
