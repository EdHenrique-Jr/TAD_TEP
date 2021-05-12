#ifndef COMPLEXO_BASE_H_INCLUDED
#define COMPLEXO_BASE_H_INCLUDED
#ifdef TIPO_B_    /* só vai compilar se TIPO_B e PREF_B */
#ifdef PREF_B_  /* ... tiverem sido definidos         */

/* -------- definindo o ponteiro para aquele tipo de binumeral 
 * por exemplo: ponteiro para complexo de doubles, isto é, 
 *        Double_Complexo_pt *
 *              PREF_B_   = Double_
 *              BINUMERO_ = Complexo
 *              TIPO_B_   = double_pt
 * -------------------------------------------------------------------*/
/*------------------------------------------------------*
 *  declara os métodos que são comuns a todos os        * 
 * "BINUMERAIS": racional, complexo, coord. polar ,     *
 *                campo eletro-magnetico,  ...          * 
 * -----------------------------------------------------*/
#include "Binumero.h"

/*------------------------------------------------------*
 *  declara os métodos que são específicos dos números  *
 *  COMPLEXOS: soma, subtração, multiplicação, divisão, *
 *             exibição, entrada_teclado, entrada_csv,..*
 * -----------------------------------------------------*/
 PREF_B_(Complexo_pt)  PREF_B_(Complexo_somar) (PREF_B_(Complexo_pt) num1, PREF_B_(Complexo_pt) num2, PREF_B_(Complexo_pt) res);

 PREF_B_(Complexo_pt) PREF_B_(Complexo_subtr) (PREF_B_(Complexo_pt) num1, PREF_B_(Complexo_pt) num2, PREF_B_(Complexo_pt) res);
											
 PREF_B_(Complexo_pt)  PREF_B_(Complexo_multp) (PREF_B_(Complexo_pt) num1, PREF_B_(Complexo_pt) num2, PREF_B_(Complexo_pt) res);
										
 PREF_B_(Complexo_pt) PREF_B_(Complexo_divid) (PREF_B_(Complexo_pt) num1, PREF_B_(Complexo_pt) num2,PREF_B_(Complexo_pt) res);
											                                
void  		PREF_B_(Complexo_exibe) (	PREF_B_ (Complexo_pt) num,
										char * nome);
#endif /*TIPO_*/    
#endif /*PREF_*/ 
#endif /*complexo_bas_included */
