/*DOUBLE_T.H */
#ifndef LONGINT_H_INCLUDED
#define LONGINT_H_INCLUDED

#undef NATIVO_ 
#undef PREF_

#define NATIVO_ long int
#define PREF_(COISA) Longint_ ## COISA 
#include "converte_nativo.h"
#endif /* ifndef double_h_included_ */ 

