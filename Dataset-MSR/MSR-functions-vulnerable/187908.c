VAR1 FUN1( const VAR2 *VAR3, uint8_t VAR4,

                                uint8_t VAR5, VAR6 *VAR7)
 {
     FUN2("", VAR8, VAR4);

    if (VAR7 == NULL)


         return VAR9;
 #if (FUN3(VAR10) && (VAR10 == VAR11))
 
 if (VAR12.VAR13)
 {
 int VAR14;
        UINT32 VAR15 = 0;
 int VAR16[] = {100000, 10000, 1000, 100, 10,1};
        BD_ADDR VAR17;
        FUN4(VAR17, VAR3->VAR18);
 for (VAR14 = 0; VAR14 < 6; VAR14++)
 {
            VAR15 += (VAR16[VAR14] * (VAR7->VAR19[VAR14] - ''));
 }
        FUN5("", VAR15);
        FUN6(VAR17, VAR4, VAR15);

 }
 else
 {
        FUN7( (VAR20 *)VAR3->VAR18, VAR4, VAR5, VAR7->VAR19);
 if (VAR4)
            VAR12.VAR21 = VAR5;
 }
#else
    FUN7( (VAR20 *)VAR3->VAR18, VAR4, VAR5, VAR7->VAR19);

 if (VAR4)
        VAR12.VAR21 = VAR5;
#endif
 return VAR22;
}