FUN1(VAR1 *VAR2,
                         const VAR3 *VAR4, const char *VAR5, uint16_t VAR6)
{
    char VAR7[20];
    uint8_t VAR8[sizeof(struct VAR9)]; 
    u_int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;

    if (!FUN2(*VAR4, 4))
        return (0);
    VAR10 = FUN3(VAR4);
    VAR15=4;
    VAR4+=4;

    if (VAR6 == VAR18) {
        if (!FUN2(*VAR4, 1)) 
            return (0);
        VAR11=*(VAR4++);
        VAR12 = VAR11&0x3f;
        if (VAR12 > 32) {
            FUN4((VAR2, "",
                   VAR5,
                   VAR12));
            return (0);
         }
         VAR15++;
     } else if (VAR6 == VAR19) {

        if (!FUN2(*VAR4, 1)) 


             return (0);
         VAR11=*(VAR4++);
         VAR12=*(VAR4++);
        if (VAR12 > 128) {
            FUN4((VAR2, "",
                   VAR5,
                   VAR12));
            return (0);
        }
        VAR15+=2;
    } else
        return (0); 

    VAR13 = (VAR12 + 7) / 8; 

    if (!FUN2(*VAR4, VAR13))
        return (0);
    memset(VAR8, 0, sizeof VAR8);   
    memcpy(VAR8,VAR4,VAR13);    
    VAR4+=VAR13;
    VAR15+=VAR13;

    if (VAR6 == VAR18)
        FUN4((VAR2, "",
               VAR5,
               FUN5(VAR2, VAR8),
               VAR12));
    else if (VAR6 == VAR19)
        FUN4((VAR2, "",
               VAR5,
               FUN6(VAR2, VAR8),
               VAR12));

    FUN4((VAR2, "",
           FUN7(VAR11) ? "" : "",
           VAR10));

    if (VAR6 == VAR18 && FUN8(VAR11))
        FUN4((VAR2, ""));
    else if (VAR6 == VAR19)
        FUN4((VAR2, "",
               FUN9(VAR11) ? "" : "",
               FUN10(VAR11) ? "" : ""));

    if ((VAR6 == VAR18  && FUN8(VAR11))
     || (VAR6 == VAR19 && FUN10(VAR11))
	) {
        
        if (!FUN2(*VAR4, 1))
            return (0);
        VAR14=*(VAR4++);
        VAR15+=VAR14+1;
        FUN4((VAR2, "", VAR14));   

        while (VAR14>0) {
            if (!FUN2(*VAR4,2))
                return (0);
            VAR16=*(VAR4++);
            VAR17=*(VAR4++);
            
            snprintf(VAR7, sizeof(VAR7), "",VAR5);
            if (!FUN11(VAR2, VAR4, VAR16, VAR17, VAR7))
                return(0);
            VAR4+=VAR17;
            VAR14-=(VAR17+2);
        }
    }
    return (VAR15);
}