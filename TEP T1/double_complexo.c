#include "double.h"
#undef  TIPO_B_ 
#undef  PREF_B_
#undef  BINUMERO_
#define TIPO_B_      Double_pt 
#define PREF_B_(x)   Double_ ## x
#define BINUMERO_(Base_,Tipo_,z) Double ## _ ## Complexo ## _ ## z 
#define FORMAT_ "%lf"
#include "complexo_base.h"
#include "complexo_base.c"

