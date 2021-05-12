#undef NATIVO_ 
#undef PREF_
#undef FORMAT_
#define NATIVO_ double 
#define PREF_(COISA) Double_ ## COISA 
#define FORMAT_ "%lf"
#include "converte_nativo.h"
#include "converte_nativo.c"


