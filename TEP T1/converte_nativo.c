#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "converte_nativo.h"
#ifdef NATIVO_
#ifdef PREF_ 
#ifdef FORMAT_

PREF_(pt) PREF_(criar)(NATIVO_ num)
{
	PREF_(pt) retorno = (PREF_(pt)) malloc (sizeof(num));
	*retorno = num;
	return (retorno);
}

PREF_(pt) PREF_(copiar) (PREF_(pt) num)
{
	PREF_(pt) retorno = (PREF_(pt)) malloc (sizeof(*num));
	*retorno = *num;
	return (retorno);
}

void PREF_(destruir) (PREF_(pt) num)
{
	free (num);
}

void PREF_(atrib_vals) (NATIVO_ val, PREF_(pt) dest)
{
	*dest = val;
}
										    
void PREF_(atribuir) (PREF_(pt) orig, PREF_(pt) dest)
{
	*dest = *orig;
}

 PREF_(pt) PREF_(somar) ( PREF_(pt) a, PREF_(pt) b, PREF_(pt) res)
{
	*res = *a + *b;
	return 	res;
}

 PREF_(pt) PREF_(subtr) (PREF_(pt) a, PREF_(pt) b, PREF_(pt) res)
{
	*res = *a - *b;
	return res;
}

 PREF_(pt) PREF_(multp) (PREF_(pt) a, PREF_(pt) b, PREF_(pt) res)
{
	*res =  (*a) * (*b);
	return res;
}

 PREF_(pt)  PREF_(divid) (PREF_(pt) a, PREF_(pt) b, PREF_(pt) res)
{
	*res = *a / *b;
	return res;
}

int PREF_(sinal) ( PREF_(pt) num)
{
	if (*num > 0)
	{	return (+1);
	}
	else if (*num < 0)
	{   return (-1);
	}
	else
	{	return (0);
	}
}

void PREF_(exibe) ( PREF_(pt) num, char *msg)
{
	char format[10] = "";
	strcat (format,FORMAT_);
	printf ("%s", msg);
	printf (format,*num);
}

int PREF_(Complexo_ModuloZero) (PREF_(pt) real, PREF_(pt) imag)
{
	NATIVO_ r, i, modulo;
	r = *real;
	i = *imag;
	modulo = sqrt((r*r)+(i*i));
	if(modulo == 0) return 1;
	else return 0;
}

int PREF_(Complexo_Real) (PREF_(pt) real, PREF_(pt) imag)
{
	NATIVO_ r, i, modulo;
	r = *real;
	i = *imag;
	if(i == 0) return 1;
	else return 0;
}

int PREF_(Complexo_Imag) (PREF_(pt) real, PREF_(pt) imag)
{
	NATIVO_ r, i, modulo;
	r = *real;
	i = *imag;
	if(r == 0) return 1;
	else return 0;
}

NATIVO_ PREF_(Modulo)(PREF_(pt) real, PREF_(pt) imag)
{
	NATIVO_ r, i, modulo;
	r = *real;
	i = *imag;
	modulo = sqrt((r*r)+(i*i));
	return modulo;
}
NATIVO_ PREF_(Fase)(PREF_(pt) real, PREF_(pt) imag)
{
	NATIVO_ angulo;
	angulo = tan(PREF_(Modulo)(real, imag));
	return angulo;
}

#endif 
#endif 
#endif 

