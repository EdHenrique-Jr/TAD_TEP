#include <stdio.h>
#include <stdlib.h>
#include "Binumero.c"
#ifdef TIPO_B_
#ifdef PREF_B_  
                           
PREF_B_(Complexo_pt) PREF_B_(Complexo_somar) (PREF_B_(Complexo_pt) num1, PREF_B_(Complexo_pt) num2, PREF_B_(Complexo_pt) result)
{
	TIPO_B_ temp1 = PREF_B_ (copiar) (num1->p1);
	TIPO_B_ temp2 = PREF_B_ (copiar) (num2->p2);
	
	PREF_B_(Complexo_atrib_vals) (result,PREF_B_ (somar) (PREF_B_(Complexo_p1) (num1),PREF_B_(Complexo_p1) (num2), temp1),PREF_B_ (somar) (PREF_B_(Complexo_p2)(num1),PREF_B_ (Complexo_p2)(num2),temp2));
	                      	
	PREF_B_ (destruir) (temp1);
	PREF_B_ (destruir) (temp2);
	return (result);									  
}
                                               
PREF_B_(Complexo_pt) PREF_B_ (Complexo_subtr) (PREF_B_ (Complexo_pt) num1, PREF_B_ (Complexo_pt) num2, PREF_B_ (Complexo_pt) result)
{
	TIPO_B_ temp1 = PREF_B_ (copiar) (num1->p1);
	TIPO_B_ temp2 = PREF_B_ (copiar) (num2->p2);
		
	PREF_B_ (Complexo_atrib_vals) (result,
	PREF_B_ (subtr) (PREF_B_ (Complexo_p1) (num1),
	PREF_B_ (Complexo_p1) (num2), temp1), 
	PREF_B_ (subtr) (PREF_B_ (Complexo_p2) (num1),
	PREF_B_ (Complexo_p2) (num2),temp2));
		
	PREF_B_ (destruir) (temp1);
	PREF_B_ (destruir) (temp2);
	return (result);										  
}                             									 

PREF_B_(Complexo_pt) PREF_B_ (Complexo_multp) (PREF_B_ (Complexo_pt) num1, PREF_B_ (Complexo_pt) num2,PREF_B_ (Complexo_pt) result)
{
	TIPO_B_ temp1 = PREF_B_ (copiar) (num1->p1);
	TIPO_B_ temp2 = PREF_B_ (copiar) (num2->p1);
	TIPO_B_ temp3 = PREF_B_ (copiar) (num1->p1);
	TIPO_B_ temp4 = PREF_B_ (copiar) (num2->p1);
	PREF_B_ (Complexo_pt) res1,  res2; 
	
	res1 = PREF_B_ (Complexo_copiar) (num1);
	res2 = PREF_B_ (Complexo_copiar) (num2);
	
	PREF_B_(Complexo_atrib_vals) 
	   (result, PREF_B_ (subtr) ( PREF_B_ (multp) (PREF_B_ (Complexo_p1) (num1), 
        PREF_B_ (Complexo_p1) (num2), temp1), 
        PREF_B_ (multp) (PREF_B_ (Complexo_p2) (num1),
        PREF_B_ (Complexo_p2) (num2),temp2),temp3), 
        PREF_B_ (somar) ( PREF_B_ (multp) (PREF_B_ (Complexo_p1) (num1),
        PREF_B_ (Complexo_p2) (num2), temp1),
		PREF_B_ (multp) (PREF_B_ (Complexo_p2) (num1), PREF_B_ (Complexo_p1) (num2), temp2), temp4));
					 
        PREF_B_ (destruir) (temp1);
        PREF_B_ (destruir) (temp2);
        PREF_B_ (destruir) (temp3);
        PREF_B_ (destruir) (temp4);
        return (result);	
}                                
                                             
PREF_B_(Complexo_pt) PREF_B_ (Complexo_divid) (PREF_B_ (Complexo_pt) num1, PREF_B_ (Complexo_pt) num2, PREF_B_ (Complexo_pt) result)
{
	TIPO_B_ temp1 = PREF_B_ (copiar) (num1->p1);
	TIPO_B_ temp2 = PREF_B_ (copiar) (num2->p2);

	PREF_B_(Complexo_atrib_vals) (result, PREF_ (Complexo_p1) (num1), PREF_ (Complexo_p2) (num2));
					 
		PREF_B_ (destruir) (temp1);
	    PREF_B_ (destruir) (temp2);
	    
		return (result);									  
}
                    				 
void  PREF_B_ (Complexo_exibe)  (PREF_B_ (Complexo_pt) num, char * nome)
{
	printf ("%s =",nome);
	
    if (PREF_B_(sinal) (PREF_B_(Complexo_p1)(num)) !=0)	
	{	
        PREF_B_(exibe) (PREF_B_(Complexo_p1)(num),"");
	}
	else 
	{	printf (" 0 ");
	}
	
	if (PREF_B_(sinal) (PREF_B_(Complexo_p2) (num)) != 0)
	{
		if (PREF_B_(sinal) (PREF_B_(Complexo_p2)(num)) > 0)
		{ 
            printf ("+");
		}
		PREF_B_(exibe) (PREF_B_(Complexo_p2)(num),"");
		printf (" i ");
	}
}

typedef TIPO_B_(*fptrOperacao)(TIPO_B_,TIPO_B_);

fptrOperacao select(char tipo_op) 
{
	switch(tipo_op) 
	{
		case '+': return PREF_B_(Complexo_somar);
		case '-': return PREF_B_(Complexo_subtr);
		case '*': return PREF_B_ (Complexo_multp);
		case '/': return PREF_B_ (Complexo_divid);
		case '+=': return ;
		case '*=': return ;
	}
}


#endif    
#endif 
