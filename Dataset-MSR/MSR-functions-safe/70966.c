void *FUN1(struct VAR1* VAR2, VAR3* VAR4, VAR5* VAR6, cmsUInt32Number VAR7)
{
    VAR8* VAR9;
    cmsUInt16Number VAR10, VAR11;

    *VAR6 = 0;
    VAR9 =  (VAR8*) FUN2(VAR2 ->VAR12, sizeof(VAR8));
    if (VAR9 == NULL) return NULL;

    if (!FUN3(VAR4, &VAR10)) goto VAR13;

    
    if (VAR10 == 0 && VAR7 == 32) {

        if (!FUN3(VAR4, NULL)) goto VAR13;
        if (!FUN3(VAR4, &VAR10)) goto VAR13;
    }

    if (VAR10 != 3) goto VAR13;

    if (!FUN3(VAR4, &VAR11)) goto VAR13;

    if (!FUN4(VAR4, &VAR9 ->VAR14.VAR15)) goto VAR13;
    if (!FUN4(VAR4, &VAR9 ->VAR14.VAR16)) goto VAR13;

    VAR9 ->VAR14.VAR17 = 1.0;

    if (!FUN4(VAR4, &VAR9 ->VAR18.VAR15)) goto VAR13;
    if (!FUN4(VAR4, &VAR9 ->VAR18.VAR16)) goto VAR13;

    VAR9 ->VAR18.VAR17 = 1.0;

    if (!FUN4(VAR4, &VAR9 ->VAR19.VAR15)) goto VAR13;
    if (!FUN4(VAR4, &VAR9 ->VAR19.VAR16)) goto VAR13;

    VAR9 ->VAR19.VAR17 = 1.0;

    *VAR6 = 1;
    return (void*) VAR9;

VAR13:
    FUN5(VAR2 ->VAR12, (void*) VAR9);
    return NULL;

    FUN6(VAR7);
}