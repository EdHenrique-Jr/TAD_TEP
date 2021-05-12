#ifndef BINUMERO_H_INCLUDED
#define BINUMERO_H_INCLUDED
#ifdef BINUMERO_
#ifdef PREF_B_
#ifdef TIPO_B_
			    
typedef struct BINUMERO_(Base_, Tipo_, st) *BINUMERO_(Base_, Tipo_, pt);

BINUMERO_(Base_, Tipo_, pt) BINUMERO_(Base_,Tipo_,criar) (TIPO_B_ parte1, TIPO_B_ parte2);

BINUMERO_(Base_,Tipo_,pt) BINUMERO_(Base_,Tipo_,copiar) (BINUMERO_(Base_,Tipo_,pt) num);

void  BINUMERO_(Base_,Tipo_,destruir)  (BINUMERO_(Base_,Tipo_,pt) num);

void  BINUMERO_(Base_,Tipo_,atrib_vals)(BINUMERO_(Base_,Tipo_,pt) num, TIPO_B_ parte1, TIPO_B_ parte2);
										    
void  BINUMERO_(Base_,Tipo_,atribuir)  (BINUMERO_(Base_,Tipo_,pt) orig, BINUMERO_(Base_,Tipo_,pt) dest);
										  
TIPO_B_  BINUMERO_(Base_,Tipo_,p1) (BINUMERO_(Base_,Tipo_,pt) num);
TIPO_B_  BINUMERO_(Base_,Tipo_,p2) (BINUMERO_(Base_,Tipo_,pt) num);

#endif 
#endif 
#endif 
#endif 
