#ifndef T_Racionais
#define T_Racionais

    typedef struct Racional_st
        {long int num;
        long int den;
        } Racional_t;
        typedef struct Racional_st Racional_t;
        
        typedef struct Racional_st *Racional_pt;
    
    int RetornaMDC(long int num,long int den);
    void RacionalIrredutivel(Racional_t *r);
    long int MMC(long int num, long int den);
    Racional_pt criaRacional(long int numerador, long int denominador);
    void DestroiRacional(Racional_pt *r);
    void CopiaRacional(Racional_t *r, Racional_t *r2);
    int ComparaRacional(Racional_t r, Racional_t r2);
    int VerificaEquivalentes(Racional_t *r, Racional_t *r2);
    int VerificaDenominadorZero(Racional_t *r);
    int VerificaNumeradorZero(Racional_t *r);
    int Verifica_Num_Den_Zero(Racional_t *r);
    Racional_t SomaRacionais(Racional_t *r, Racional_t *r2);
    void AcumulaRacional(Racional_t *r, Racional_t *r2);
    Racional_t SubtraiRacionais(Racional_t *r, Racional_t *r2);
    Racional_t MultiplicaRacionais(Racional_t *r, Racional_t *r2);
    void MultiplicaRacional(Racional_t *r, Racional_t *r2);
    Racional_t DivideRacionais(Racional_t *r, Racional_t *r2);
    void QuadradoRacional(Racional_t *r);
    void RaizRacional(Racional_t *r);
    double ConverteRacional(Racional_t *r);

#endif
