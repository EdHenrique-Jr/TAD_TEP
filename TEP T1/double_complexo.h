#include "double.h"
#ifndef COMPLEXO_DOUBLE_H_INCLUDED
#define COMPLEXO_DOUBLE_H_INCLUDED
#undef  TIPO_B_ 
#undef  PREF_B_
#undef  BINUMERO_
#define TIPO_B_      Double_pt 
#define PREF_B_(x)   Double_ ## x
#define BINUMERO_(Base_,Tipo_,z) Double ## _ ## Complexo ## _ ## z
#define FORMAT_ "%lf"


#include "Complexo_base.h"
#endif 
