#ifdef BINUMERO_
#ifdef PREF_B_
#ifdef TIPO_B_
#include <stdlib.h>
#include "Binumero.h"


struct BINUMERO_(Base, Tipo, st) 
{
	TIPO_B_ p1;
	TIPO_B_ p2;
};
 
BINUMERO_(Base_, Tipo_, pt) BINUMERO_(Base_,Tipo_,criar) (TIPO_B_ p1, TIPO_B_ p2)
{	
	BINUMERO_(Base_, Tipo_, pt) retorno;
	retorno = (BINUMERO_(Base_, Tipo_, pt))malloc(sizeof(BINUMERO_(Base_, Tipo_, pt)*));
	
	retorno->p1 = PREF_B_(criar)(*p1);
	retorno->p2 = PREF_B_(criar)(*p2);
	
	return (retorno);
}
BINUMERO_(Base_,Tipo_,pt) BINUMERO_(Base_,Tipo_,copiar) (BINUMERO_(Base_,Tipo_,pt) num)
{ 
	BINUMERO_(Base_,Tipo_,pt) copia;
	copia = (BINUMERO_(Base_, Tipo_, pt))malloc(sizeof( BINUMERO_(Base_,Tipo_,pt)*));
	copia->p1 = PREF_B_(copiar) (BINUMERO_(Base_,Tipo_,p1) (num)); 
	copia->p2 = PREF_B_(copiar) (BINUMERO_(Base_,Tipo_,p2) (num)); 
	return (copia);
}
void  BINUMERO_(Base_,Tipo_,destruir)  (BINUMERO_(Base_,Tipo_,pt) num)
{
	free (num->p1);
	free (num->p2);
	free (num);
}
void  BINUMERO_(Base_,Tipo_,atrib_vals)(BINUMERO_(Base_,Tipo_,pt) num,TIPO_B_ p1, TIPO_B_ p2)
{
	PREF_B_(atribuir) ( p1, num->p1 );
	PREF_B_(atribuir) ( p2, num->p2 );
}										    
void  BINUMERO_(Base_,Tipo_,atribuir) (BINUMERO_(Base_,Tipo_,pt) orig,BINUMERO_(Base_,Tipo_,pt) dest)
{ 
	PREF_B_(atribuir)(orig->p1,dest->p1 )  ; 
	PREF_B_(atribuir)(orig->p2,dest->p2 )  ; 
}									    										  
TIPO_B_  BINUMERO_(Base_,Tipo_,p1) (BINUMERO_(Base_,Tipo_,pt) num)
{ 
	return (num->p1); 
}

TIPO_B_  BINUMERO_(Base_,Tipo_,p2) (BINUMERO_(Base_,Tipo_,pt) num)
{
	return (num->p2);
}

int BINUMERO_(Base, Tipo, Compara_Modulo)(BINUMERO_(Base, Tipo, pt) c1, BINUMERO_(Base, Tipo, pt)  c2)
{
	NATIVO_ r1, i1, modulo1, r2, i2, modulo2;
	r1 = *c1->p1;
	i1 = *c1->p2;
	modulo1 = sqrt((r1*r1)+(i1*i1));
	
	r2 = *c2->p1;
	i2 = *c2->p2;
	modulo2 = sqrt((r2*r2)+(i2*i2));
	
	if(modulo1 == modulo2){
		return 0;
	}
	else if(modulo1 > modulo2)
	{
		return 1; 
	}
	else return -1;
};

int BINUMERO_(Base, Tipo, Compara_Angulo)(BINUMERO_(Base, Tipo, pt) c1, BINUMERO_(Base, Tipo, pt)  c2)
{
	NATIVO_ r1, i1, modulo1, r2, i2, modulo2, ang1, ang2;
	r1 = *c1->p1;
	i1 = *c1->p2;
	modulo1 = sqrt((r1*r1)+(i1*i1));
	ang1 = tan(modulo1);

	r2 = *c2->p1;
	i2 = *c2->p2;
	modulo2 = sqrt((r2*r2)+(i2*i2));
	ang2 = tan(modulo2);

	if(ang1 == ang2){
		return 0;
	}
	else if(ang1 > ang2)
	{
		return 1; 
	}
	else return -1;

}

NATIVO_  BINUMERO_(Base, Tipo, Conjugado)(BINUMERO_(Base, Tipo, pt) complexo)
{
	NATIVO_ conjugado;
	conjugado = *complexo->p1 - *complexo->p2;
	return conjugado;
}

// int complexo modulo zero 

#endif 
#endif
#endif 
