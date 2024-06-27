void FUN1(VAR1 *VAR2)
 {
     FUN2(&VAR2->VAR3);
{
    VAR4 *VAR5;
    VAR4 *VAR6;
    unsigned int VAR7;
    unsigned int VAR8;

    FUN3(&VAR2->VAR3);

    if (VAR2->VAR9) {
        VAR5 = VAR2->VAR9->VAR5;
        VAR6 = VAR2->VAR9->VAR6;
        VAR7 = VAR2->VAR9->VAR7;
        VAR8 = VAR2->VAR9->VAR8;

        FUN4(VAR2);

        memset(VAR2->VAR9, 0, sizeof(*VAR2->VAR9));

        if (VAR2->VAR10) {
            VAR2->VAR9->VAR11 = sizeof(VAR2->VAR9->VAR12);
        }

        if (FUN5(VAR2) & VAR13) {
            VAR2->VAR9->VAR7 = VAR7;
            VAR2->VAR9->VAR8 = VAR8;
        }

        VAR2->VAR9->VAR5 = VAR5;
        VAR2->VAR9->VAR6 = VAR6;
    }

    FUN6(VAR2);

    if (VAR2->VAR14->VAR15 == VAR16)
        VAR2->VAR15 = VAR17;
#ifndef VAR18
    else if (VAR2->VAR19 & VAR20)
        VAR2->VAR21 = VAR2->VAR15 = VAR22;
#endif
    else
        VAR2->VAR15 = VAR2->VAR14->VAR15;
}

long FUN7(VAR1 *VAR2, int VAR23, long VAR24, void *VAR25)
{
    int VAR26 = 0;

    switch (VAR23) {
    case VAR27:
        if (FUN8(VAR2, (struct VAR28 *)VAR25) != NULL) {
            VAR26 = 1;
        }
        break;
    case VAR29:
        VAR26 = FUN9(VAR2);
        break;
    case VAR30:
        if (VAR24 < (long)FUN10())
            return 0;
        VAR2->VAR9->VAR8 = VAR24;
        return 1;
    case VAR31:
        return (long)FUN10();
    case VAR32:
        
        if (VAR24 < (long)FUN10() - VAR33)
            return 0;
        VAR2->VAR9->VAR7 = VAR24;
        return VAR24;
    default:
        VAR26 = FUN11(VAR2, VAR23, VAR24, VAR25);
        break;
    }
    return (VAR26);
}

void FUN12(VAR1 *VAR2)
{
#ifndef VAR34
    
    if (FUN13(FUN14(VAR2))) {
        memset(&VAR2->VAR9->VAR35, 0, sizeof(VAR2->VAR9->VAR35));
        return;
    }
#endif

    
    if (VAR2->VAR9->VAR35.VAR36 == 0 && VAR2->VAR9->VAR35.VAR37 == 0) {
        VAR2->VAR9->VAR38 = 1;
    }

    
    FUN15(&(VAR2->VAR9->VAR35));

    
    VAR2->VAR9->VAR35.VAR36 += VAR2->VAR9->VAR38;
    FUN16(FUN17(VAR2), VAR39, 0,
             &(VAR2->VAR9->VAR35));
}

struct VAR28 *FUN8(VAR1 *VAR2, struct VAR28 *VAR40)
{
    struct timeval VAR41;

    
    if (VAR2->VAR9->VAR35.VAR36 == 0 && VAR2->VAR9->VAR35.VAR37 == 0) {
        return NULL;
    }

    
    FUN15(&VAR41);

    
    if (VAR2->VAR9->VAR35.VAR36 < VAR41.VAR36 ||
        (VAR2->VAR9->VAR35.VAR36 == VAR41.VAR36 &&
         VAR2->VAR9->VAR35.VAR37 <= VAR41.VAR37)) {
        memset(VAR40, 0, sizeof(*VAR40));
        return VAR40;
    }

    
    memcpy(VAR40, &(VAR2->VAR9->VAR35), sizeof(struct VAR28));
    VAR40->VAR36 -= VAR41.VAR36;
    VAR40->VAR37 -= VAR41.VAR37;
    if (VAR40->VAR37 < 0) {
        VAR40->VAR36--;
        VAR40->VAR37 += 1000000;
    }

    
    if (VAR40->VAR36 == 0 && VAR40->VAR37 < 15000) {
        memset(VAR40, 0, sizeof(*VAR40));
    }

    return VAR40;
}

int FUN18(VAR1 *VAR2)
{
    struct timeval VAR40;

    
    if (FUN8(VAR2, &VAR40) == NULL) {
        return 0;
    }

    
    if (VAR40.VAR36 > 0 || VAR40.VAR37 > 0) {
        return 0;
    }

    
    return 1;
}

void FUN19(VAR1 *VAR2)
{
    VAR2->VAR9->VAR38 *= 2;
    if (VAR2->VAR9->VAR38 > 60)
        VAR2->VAR9->VAR38 = 60;
    FUN12(VAR2);
}

void FUN20(VAR1 *VAR2)
{
    
    memset(&VAR2->VAR9->VAR42, 0, sizeof(VAR2->VAR9->VAR42));
    memset(&VAR2->VAR9->VAR35, 0, sizeof(VAR2->VAR9->VAR35));
    VAR2->VAR9->VAR38 = 1;
    FUN16(FUN17(VAR2), VAR39, 0,
             &(VAR2->VAR9->VAR35));
    
    FUN21(VAR2);
}

int FUN22(VAR1 *VAR2)
{
    unsigned int VAR7;

    VAR2->VAR9->VAR42.VAR43++;

    
     FUN16(FUN17(VAR2), VAR39, 0,
              &(VAR2->VAR9->VAR35));
     

    FUN21(VAR2);


 }
 
 int FUN22(VAR1 *VAR2)

    if (VAR2->VAR9->VAR42.VAR43 > VAR44) {
        
        FUN23(VAR45, VAR46);
        return -1;
    }

    return 0;
}