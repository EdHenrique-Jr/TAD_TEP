#include "longint.h"
#ifndef COMPLEXO_LONGINT_H_INCLUDED
#define COMPLEXO_LONGINT_H_INCLUDED
#undef  TIPO_B_ 
#undef  PREF_B_
#undef  BINUMERO_
#define TIPO_B_      Longint_pt 
#define PREF_B_(x)   Longint_ ## x
#define BINUMERO_(Base_,Tipo_,z) Double ## _ ## Complexo ## _ ## z
#define FORMAT_ "%lu"


#include "Complexo_base.h"
#endif /* complexo_double_h_included */
