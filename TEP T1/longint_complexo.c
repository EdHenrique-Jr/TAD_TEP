#include "longint.h"


#undef  TIPO_B_ 
#undef  PREF_B_
#undef  BINUMERO_
#define TIPO_B_      Longint_pt 
#define PREF_B_(x)   Longint_ ## x
#define BINUMERO_(Base_,Tipo_,z) Longint ## _ ## Complexo ## _ ## z 
#define FORMAT_ "%lu"
#include "Complexo_base.h"
#include "Complexo_base.c"

