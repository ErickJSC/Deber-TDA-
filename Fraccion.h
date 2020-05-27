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
#if !defined(__FormulaGeneralModel_Fraccion_h)
#define __FormulaGeneralModel_Fraccion_h

class Fraccion
{
public:
   void calcular(float a, float b, float c,float d);
   float getNumerator(void);
   void setNumerator(float newNumerator);
   float getDenominator(void);
   void setDenominator(float newDenominator);
   Fraccion();

protected:
private:
   float numerator;
   float denominator;


};

#endif
