#undef NATIVO_ 
#undef PREF_
#undef FORMAT_
#define NATIVO_ long int 
#define PREF_(COISA) Longint_ ## COISA 
#define FORMAT_ "%lu"
#include "converte_nativo.h"
#include "converte_nativo.c"




