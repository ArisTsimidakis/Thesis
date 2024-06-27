void FUN1(VAR1 *VAR2,
                              UWORD32 VAR3,
                              UWORD32 VAR4,
                              WORD8 VAR5)
{
 VAR6 *VAR7 = &VAR2->VAR8;
 VAR9 *VAR10 = &VAR7->VAR11;
    WORD32 VAR12 = 0;
 VAR13 *VAR14;

    UWORD32 VAR15;

 for(VAR15 = 0; VAR15 < VAR16; VAR15++)
 {
        VAR14 = VAR2->VAR17 + VAR15;
 if(VAR14->VAR18)
 {
 break;
 }
 }
 if(NULL == VAR14)
 {
 return;
 }

 if(VAR19 == VAR5)
 {
 switch(VAR3)
 {
 case VAR20:
                VAR7->VAR21.VAR22 = 1;
                FUN2(VAR2, VAR14);
 break;

 case VAR23:
                VAR7->VAR21.VAR22 = 1;
                FUN3(VAR2, VAR14);
 break;

 case VAR24:
                VAR7->VAR21.VAR22 = 1;
                FUN4(VAR2);
 break;

 case VAR25:
                VAR7->VAR21.VAR26 = 1;
                FUN5(VAR2);
 break;

 
             case VAR27:
                 VAR7->VAR21.VAR22 = 1;

                FUN6(VAR2,

                                                            VAR4);




























                 break;
 
             default:
 for(VAR15 = 0; VAR15 < VAR4; VAR15++)
 {
                    FUN7(VAR10, 8);
 }
 break;
 }
 }
 else 
 {
 switch(VAR3)

         {
             case VAR27:
                 VAR7->VAR21.VAR22 = 1;

                FUN6(VAR2,

                                                            VAR4);




























                 break;
 
             default:
 for(VAR15 = 0; VAR15 < VAR4; VAR15++)
 {
                    FUN7(VAR10, 8);
 }
 break;
 }
 }

 

    VAR12 = FUN8(VAR10);
 if(VAR12) 
 {
        WORD32 VAR28;
        WORD32 VAR29 = 0;
        WORD32 VAR30 = 0xFF;
        UWORD32 VAR31;
        UWORD32 VAR32;
        FUN9(VAR31);
        FUN9(VAR32);

 while(VAR12 > 9)
 {
            FUN10("",
                       VAR32, VAR10, 1);
            VAR12--;
 }

        VAR28 = FUN11(VAR10, VAR12);

 while(VAR28 & (VAR30 >> VAR29))
 {
            VAR29++;
 continue;
 }

 while(VAR12 > (9 - VAR29))
 {
            FUN10("",
                       VAR32, VAR10, 1);
            VAR12--;
 }

        FUN10("", VAR31, VAR10, 1);
        VAR12--;
 while(VAR12)
 {
            FUN10("", VAR31, VAR10, 1);
            VAR12--;
 }
 }

 return;
}