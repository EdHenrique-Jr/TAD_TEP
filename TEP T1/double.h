#ifndef DOUBLE_H_INCLUDED
#define DOUBLE_H_INCLUDED

#undef NATIVO_ 
#undef PREF_

#define NATIVO_ double
#define PREF_(COISA) Double_ ## COISA 
#include "converte_nativo.h"
#endif 

