VAR1 FUN1(VAR2 *VAR3, UWORD16 VAR4)
{
 VAR5 * VAR6 = VAR3->VAR7;
 VAR8 * VAR9 = VAR3->VAR9;
 VAR10 *VAR11 = VAR3->VAR11;
    VAR12 *VAR13 = VAR11->VAR14;
    VAR12 *VAR15 = &VAR11->VAR16;
    UWORD8 VAR17 = VAR3->VAR9->VAR18; 
    UWORD8 VAR19 = VAR9->VAR19;

    UWORD32 VAR20;
    WORD32 VAR21;
    WORD32 VAR22;

 
 
 
 {
        VAR23 *VAR24;
        VAR25 *VAR26 = VAR3->VAR27.VAR28;
        VAR1 *VAR29 = (VAR1*)VAR26;
        VAR25 *VAR30;

        VAR24 = VAR3->VAR27.VAR31;
        VAR30 = (VAR25*)VAR24;
 *VAR29 = 0;
 *(VAR29 + 1) = 0;
 *VAR30 = VAR32;
        VAR3->VAR27.VAR33 = (VAR34)-1;
        VAR3->VAR27.VAR35 = (VAR34)-1;
 }

    VAR9->VAR36 = FUN2(
                    VAR11);

    FUN3("",
                    VAR9->VAR36);

    VAR20 = VAR3->VAR7->VAR37[0];
 if(VAR9->VAR36)
 {
        VAR20 = FUN4(VAR15, VAR13) + 1;
 }

 {



        UWORD8 VAR38 = VAR39 << VAR19;
 if(VAR20 > VAR38)
 {
 return VAR40;
 }
        VAR9->VAR37[0] = VAR20;
        FUN3("",
                        VAR9->VAR37[0] - 1);

 }

 {
        UWORD8 VAR41 = FUN2(VAR11);
        FUN3("",VAR41);

 
 
 
 
 {
            UWORD8 VAR42 = (VAR3->VAR43
 != VAR3->VAR9->VAR44);
 if(VAR3->VAR45
 || (VAR42 & !VAR3->VAR46)
 || VAR3->VAR47
 != VAR9->VAR37[0])
 {
                FUN5(VAR3);
 }
 if(VAR3->VAR45 & VAR3->VAR46)
                VAR3->VAR45 = 0;
 }
 
        VAR3->VAR47 =
                        VAR9->VAR37[0];

 
 if(VAR41)
 {
            WORD8 VAR22;
            VAR3->VAR48[0] = VAR3->VAR49->VAR50[0];
            VAR22 = FUN6(VAR3, 0);
 if(VAR22 == -1)
 return VAR51;
            VAR3->VAR48[0] = VAR3->VAR49->VAR50[0];
 }
 else
            VAR3->VAR48[0] =
                            VAR3->VAR49->VAR52[0];
 }
 
 {
 void **VAR53, **VAR54;
        WORD8 VAR55;
 struct VAR56 *VAR57;

        VAR53 = VAR3->VAR58 + VAR59;
        VAR53[0] = 0; 
        VAR53++;
 for(VAR55 = 0; VAR55 < VAR9->VAR37[0]; VAR55++)
 {
            VAR57 = VAR3->VAR48[0][VAR55];
            VAR53[VAR55] = (VAR57->VAR60);
 }

 
        VAR54 = VAR3->VAR58 + VAR61;
        VAR54[0] = 0;

 if(VAR17)
 {
 void **VAR62, **VAR63;
 void **VAR64, **VAR65;
 VAR62 = VAR3->VAR58
 + VAR66;
            VAR63 = VAR3->VAR58
 + VAR67;

 VAR62[0] = 0; 
 VAR62++;
            VAR63[0] = 0; 
            VAR63++;

            VAR55 = 0;
 for(VAR55 = 0; VAR55 < VAR9->VAR37[0]; VAR55++)
 {
                VAR57 = VAR3->VAR48[0][VAR55];
 VAR62[0] = (VAR57->VAR60);
                VAR63[1] = (VAR57->VAR60);

                VAR63[0] = (VAR57->VAR60) + 1;
 VAR62[1] = (VAR57->VAR60) + 1;

 VAR62 += 2;
                VAR63 += 2;
 }
            VAR64 = VAR3->VAR58
 + VAR68;
            VAR64[0] = 0;
            VAR65 = VAR3->VAR58
 + VAR69;
            VAR65[0] = 0;

 }

 if(VAR3->VAR70 >= 3)
 {
            WORD32 VAR71;
            WORD32 VAR72;

            VAR71 = FUN7(VAR39, VAR3->VAR73);
            VAR71 = 2 * ((2 * VAR71) + 1);

            VAR72 = VAR71 * sizeof(void *);
            VAR72 += VAR74 * sizeof(void *);

            memcpy((void *)VAR3->VAR75->VAR58,
                   VAR3->VAR58,
                   VAR72);
 }


 }
 if(VAR6->VAR76)
 {
        VAR22 = FUN8(VAR9, VAR11);
 if(VAR22 != VAR77)
 return VAR22;
        FUN9(VAR3);
        VAR3->VAR78 = VAR3->VAR79;
 }
 else
 {
        VAR3->VAR9->VAR80 = 0;
        VAR3->VAR78 = VAR3->VAR79;
 }

    VAR3->VAR75->VAR80 =
                    VAR3->VAR9->VAR80;

 if(VAR17 && (VAR19 == 0))
 {
        FUN10(VAR3);
 }

 

     if(VAR9->VAR81 != 0)
     {
         if(!VAR3->VAR82->VAR83)

            VAR3->VAR84 = FUN11(VAR3);
















         else
             VAR11->VAR16 += VAR3->VAR84;
 
 }
 

 if(VAR6->VAR85 == VAR86)
 {
        VAR20 = FUN4(VAR15, VAR13);

 if(VAR20 > VAR87)
 {
 return VAR88;
 }
        VAR9->VAR89 = VAR20;
        FUN3("",VAR9->VAR89);
 }

 
    VAR21 = VAR6->VAR90
 + FUN12(VAR15, VAR13);
 if((VAR21 < 0) || (VAR21 > 51))
 {
 return VAR91;
 }
    VAR9->VAR92 = VAR21;
    FUN3("",
 (VAR23)(VAR9->VAR92 - VAR6->VAR90));

 if(VAR6->VAR93 == 1)
 {
        VAR20 = FUN4(VAR15, VAR13);
 if(VAR20 > VAR94)
 {
 return VAR88;
 }

        FUN3("", VAR20);
        VAR9->VAR95 = VAR20;
 if(VAR20 != 1)
 {
            VAR21 = FUN12(VAR15, VAR13)
 << 1;
 if((VAR96 > VAR21) || (VAR21 > VAR97))
 {
 return VAR88;
 }
            VAR9->VAR98 = VAR21;
            FUN3("",
                            VAR9->VAR98 >> 1);

            VAR21 = FUN12(VAR15, VAR13)
 << 1;
 if((VAR96 > VAR21) || (VAR21 > VAR97))
 {
 return VAR88;
 }
            VAR9->VAR99 = VAR21;
            FUN3("",
                            VAR9->VAR99 >> 1);
 }
 else
 {
            VAR9->VAR98 = 0;
            VAR9->VAR99 = 0;
 }
 }
 else
 {
        VAR9->VAR95 = 0;
        VAR9->VAR98 = 0;
        VAR9->VAR99 = 0;
 }

    VAR3->VAR100 = 2;

 if(VAR6->VAR85)
 {
        VAR101; VAR102;
        VAR3->VAR103 = VAR104;
        VAR3->VAR105 = VAR106;
        FUN13(VAR107, VAR3);

 if(VAR3->VAR9->VAR18)
            VAR3->VAR108 = VAR109;
 else
            VAR3->VAR108 = VAR110;
 }
 else
 {
        VAR111; VAR112;
        VAR3->VAR103 = VAR113;
        VAR3->VAR105 = VAR114;
 if(VAR3->VAR9->VAR18)
 {
            VAR3->VAR108 = VAR115;
 }
 else
            VAR3->VAR108 = VAR116;
 }

    VAR3->VAR117 = 0;
    VAR3->VAR118 = VAR119;
    VAR22 = VAR3->FUN14(VAR3, VAR9, VAR4);
 if(VAR22 != VAR77)
 return VAR22;

 return VAR77;
}