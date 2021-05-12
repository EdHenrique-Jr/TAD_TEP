#include "TAD_Racionais.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdint.h>

    typedef struct Racional_st
    {long int num;
     long int den;
    } Racional_t;
    typedef struct Racional_st Racional_t;
    
    typedef struct Racional_st *Racional_pt;
    
    int RetornaMDC(long int num,long int den)
    {
        if(den == 0) return num;
        return RetornaMDC(den, num % den);
    }
    void RacionalIrredutivel(Racional_t *r)
    {
         long int numerador, denominador, mdc;
         mdc = RetornaMDC(r->num, r->den);
         numerador = r->num/mdc;
         denominador = r->den/mdc; 
         r->num = numerador;
         r->den = denominador;
    }
    long int MMC(long int num, long int den)
    {
        long int mmc, mdc;
        mdc = RetornaMDC(num, den);
        mmc = (num * den)/mdc;
        return mmc;
    }
    Racional_pt criaRacional(long int numerador, long int denominador)
    {
        Racional_t *r;
        r = (Racional_t*) malloc(sizeof(Racional_t));
        r->num = numerador;
        r->den = denominador;
        return r;
    }
    void DestroiRacional(Racional_pt *r)
    {
        free(*r);
        *r = NULL;
    }
    void CopiaRacional(Racional_t *r, Racional_t *r2)
    {
        r2->num = r->num;
        r2->den = r->den;
    }
    int ComparaRacional(Racional_t r, Racional_t r2)
    {
        if(r.num == r2.num && r.den == r2.den)
        {
            return 1;
        }else return 0;
    }
    int VerificaEquivalentes(Racional_t *r, Racional_t *r2)
    {
        RacionalIrredutivel(r);
        RacionalIrredutivel(r2);
        if(r == r2)
        {
            return 1;
        }else return 0;
    }
    int VerificaDenominadorZero(Racional_t *r)
    {
        if(r->den == 0)
        {
            return 1;
        }else return 0;
    }
    int VerificaNumeradorZero(Racional_t *r)
    {
        if(r->num == 0)
        {
            return 1;
        }else return 0;
    }
    int Verifica_Num_Den_Zero(Racional_t *r)
    {
        if(r->num == 0 && r->den == 0)
        {
            return 1;
        } else return 0;
    }
    Racional_t SomaRacionais(Racional_t *r, Racional_t *r2) 
    {
        Racional_t r3;
        long int mmc;
        if(r->den == r2->den)
        {
            r3.num = r->num + r2->num;
            r3.den = r->den;
            return r3;
        }else
            mmc = MMC(r->den, r2->den);
            r->num = (mmc/r->den) * r->num;
            r2->num = (mmc/r2->den) * r2->num;
            r3.num = r->num + r2->num;
            r3.den = (mmc/r->den) * r->den;
            return r3; 
    }
    void AcumulaRacional(Racional_t *r, Racional_t *r2) 
    {
        long int mmc;
        if(r->den == r2->den)
        {
            r->num += r2->num;
        }else
            mmc = MMC(r->den, r2->den);
            r->num = (mmc/r->den) * r->num;
            r2->num = (mmc/r2->den) * r2->num;
            r->num = r->num + r2->num;
            r->den = (mmc/r->den) * r->den;
    }
    Racional_t SubtraiRacionais(Racional_t *r, Racional_t *r2) 
    {
        Racional_t r3;
        long int mmc;
        if(r->den == r2->den)
        {
            r3.num = r->num - r2->num;
            r3.den = r->den;
            return r3;
        }else 
            mmc = MMC(r->den, r2->den);
            r->num = (mmc/r->den) * r->num;
            r2->num = (mmc/r2->den) * r2->num;
            r3.num = r->num - r2->num;
            r3.den = (mmc/r->den) * r->den;
            return r3;
    }
    Racional_t MultiplicaRacionais(Racional_t *r, Racional_t *r2)
    {
        Racional_t r3;
        r3.num = r->num * r2->num;
        r3.den = r->den * r2->den;
        return r3;
    }
    void MultiplicaRacional(Racional_t *r, Racional_t *r2)
    {
        r->num = r->num * r2->num;
        r->den = r->den * r2->den;
    }
    Racional_t DivideRacionais(Racional_t *r, Racional_t *r2)
    {
        Racional_t r3;
        r3.num = r->num * r2->den;
        r3.den = r->den * r2->num;
    }
    void QuadradoRacional(Racional_t *r)
    {
        r->num *= r->num;
        r->den *= r->den;
    }
    void RaizRacional(Racional_t *r)
    {
        r->num = sqrt(r->num);
        r->den = sqrt(r->den);
    }
    double ConverteRacional(Racional_t *r)
    {
        double r_convertido;
        r_convertido = r->num/r->den;
        return r_convertido;
    }
    Racional_t ConverteDouble(double f, int64_t *num, int64_t *den)
    {
        int64_t md = 4094;
        int64_t a, h[3] = { 0, 1, 0 }, k[3] = { 1, 0, 0 };
        int64_t x, d, n = 1;
        int i, neg = 0;
    
        if (md <= 1) { *den = 1; *num = (int64_t) f; return; }
    
        if (f < 0) { neg = 1; f = -f; }
    
        while (f != floor(f)) { n <<= 1; f *= 2; }
        d = f;

        for (i = 0; i < 64; i++) {
            a = n ? d / n : 0;
            if (i && !a) break;
    
            x = d; d = n; n = x % n;
    
            x = a;
            if (k[1] * a + k[0] >= md) {
                x = (md - k[0]) / k[1];
                if (x * 2 >= a || k[1] >= md)
                    i = 65;
                else break;
		}
        h[2] = x * h[1] + h[0]; h[0] = h[1]; h[1] = h[2];
		k[2] = x * k[1] + k[0]; k[0] = k[1]; k[1] = k[2];
	}
	*den = k[1];
	*num = neg ? -h[1] : h[1];

    }
    int VerificaRacionalInt()
    {

    }
