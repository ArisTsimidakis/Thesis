cmsBool  VAR1 FUN1(VAR2* VAR3,
                                       const char* VAR4,
                                       cmsUInt16Number VAR5[3], cmsUInt16Number VAR6[VAR7])
{
    cmsUInt32Number VAR8;

    if (VAR3 == NULL) return VAR9;

    if (VAR3 ->VAR10 + 1 > VAR3 ->VAR11) {
        if (!FUN2(VAR3)) return VAR9;
    }

    for (VAR8=0; VAR8 < VAR3 ->VAR12; VAR8++)
        VAR3 ->VAR13[VAR3 ->VAR10].VAR14[VAR8] = VAR6 == NULL? 0 : VAR6[VAR8];

    for (VAR8=0; VAR8 < 3; VAR8++)
        VAR3 ->VAR13[VAR3 ->VAR10].VAR5[VAR8] = VAR5 == NULL ? 0 : VAR5[VAR8];
 
     if (VAR4 != NULL) {
 

        strncpy(VAR3 ->VAR13[VAR3 ->VAR10].VAR4, VAR4,

                    sizeof(VAR3 ->VAR13[VAR3 ->VAR10].VAR4));




         VAR3 ->VAR13[VAR3 ->VAR10].VAR4[VAR15-1] = 0;
 
     }
    else
        VAR3 ->VAR13[VAR3 ->VAR10].VAR4[0] = 0;


    VAR3 ->VAR10++;
    return VAR16;
}