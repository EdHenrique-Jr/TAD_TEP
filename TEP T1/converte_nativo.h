/* CONVERTE_NATIVO.H */
#ifdef NATIVO_
#ifdef PREF_

typedef NATIVO_  *  PREF_(pt)  ;

PREF_(pt) PREF_(criar)  	(NATIVO_ num);

PREF_(pt) PREF_(copiar) 	(PREF_(pt) num);

void      PREF_(destruir) 	(PREF_(pt) num);

void      PREF_(atrib_vals) (NATIVO_ val, PREF_(pt) dest);
										    
void      PREF_(atribuir) (PREF_(pt) orig, PREF_(pt) dest);

PREF_(pt) PREF_(somar)  ( PREF_(pt) a, PREF_(pt) b, PREF_(pt) res);
PREF_(pt) PREF_(subtr)  ( PREF_(pt) a, PREF_(pt) b, PREF_(pt) res);
PREF_(pt) PREF_(multp)  ( PREF_(pt) a, PREF_(pt) b, PREF_(pt) res);
PREF_(pt) PREF_(divid)  ( PREF_(pt) a, PREF_(pt) b, PREF_(pt) res);
  
int PREF_(sinal)  ( PREF_(pt) num);
void PREF_(exibe) ( PREF_(pt) num, char *msg);


#endif /* ifdef pref_ */
#endif /* ifdef nativo_ */


