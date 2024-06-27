VAR1 FUN1(VAR2 *VAR3)
{
    IHEVCD_ERROR_T VAR4 = (VAR1)VAR5;
    WORD32 VAR6;

    WORD32 VAR7;
    WORD32 VAR8;
    WORD32 VAR9;
    WORD32 VAR10;
    WORD32 VAR11;
 VAR12 *VAR13;
 profile_tier_lvl_info_t VAR14;
 VAR15 *VAR16 = &VAR3->VAR17.VAR18;


    FUN2("", VAR6, VAR16, 4);
    VAR8 = VAR6;
    VAR8 = FUN3(VAR8, 0, VAR19 - 1);

    FUN2("", VAR6, VAR16, 3);
    VAR9 = VAR6 + 1;
    VAR9 = FUN3(VAR9, 1, 7);

    FUN2("", VAR6, VAR16, 1);
    VAR11 = VAR6;

 
    VAR4 = FUN4(VAR16, &(VAR14), 1,
 (VAR9 - 1));

    FUN5("", VAR6, VAR16);
    VAR10 = VAR6;

 if((VAR10 >= VAR20) || (VAR10 < 0))
 {
 if(VAR3->VAR21)
 return VAR22;
 else
            VAR10 = 0;
 }


    VAR13 = (VAR3->VAR17.VAR23 + VAR20 - 1);
    VAR13->VAR24 = VAR10;
    VAR13->VAR25 = VAR8;
    VAR13->VAR26 = VAR9;
    VAR13->VAR27 = VAR11;
 
    VAR3->VAR28 = VAR10;
    memcpy(&VAR13->VAR14, &VAR14, sizeof(VAR29));

    FUN5("", VAR6, VAR16);
    VAR13->VAR30 = VAR6;

 if(VAR13->VAR30 != VAR31)
 {
        VAR3->VAR17.VAR32 = VAR33;
 return (VAR1)VAR33;
 }

 if(VAR34 == VAR13->VAR30)
 {
        FUN2("", VAR6, VAR16, 1);
        VAR13->VAR35 = VAR6;
 }
 else
 {
        VAR13->VAR35 = 0;
 }

    FUN5("", VAR6, VAR16);
    VAR13->VAR36 = VAR6;

    FUN5("", VAR6, VAR16);
    VAR13->VAR37 = VAR6;

 if((0 >= VAR13->VAR36) || (0 >= VAR13->VAR37))
 return VAR38;

 
    VAR13->VAR36 = FUN6(VAR13->VAR36);
    VAR13->VAR37 = FUN6(VAR13->VAR37);

 if((VAR13->VAR36 > VAR3->VAR39) ||
 (VAR13->VAR36 * VAR13->VAR37 >
                       VAR3->VAR39 * VAR3->VAR40) ||
 (VAR13->VAR37 > FUN7(VAR3->VAR39, VAR3->VAR40)))
 {
        VAR3->VAR41 = VAR13->VAR36;
        VAR3->VAR42 = VAR13->VAR37;
 return (VAR1)VAR43;
 }

    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR44 = VAR6;

 if(VAR13->VAR44)
 {

        FUN5("", VAR6, VAR16);
        VAR13->VAR45 = VAR6;

        FUN5("", VAR6, VAR16);
        VAR13->VAR46 = VAR6;

        FUN5("", VAR6, VAR16);
        VAR13->VAR47 = VAR6;

        FUN5("", VAR6, VAR16);
        VAR13->VAR48 = VAR6;
 }
 else
 {
        VAR13->VAR45 = 0;
        VAR13->VAR46 = 0;
        VAR13->VAR47 = 0;
        VAR13->VAR48 = 0;
 }


    FUN5("", VAR6, VAR16);
 if(0 != VAR6)
 return VAR49;

    FUN5("", VAR6, VAR16);
 if(0 != VAR6)
 return VAR49;

    FUN5("", VAR6, VAR16);
    VAR13->VAR50 = VAR6 + 4;

    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR51 = VAR6;


    VAR7 = (VAR13->VAR51 ? 0 : (VAR13->VAR26 - 1));
 for(; VAR7 < VAR13->VAR26; VAR7++)
 {

         FUN5("", VAR6, VAR16);
         VAR13->VAR52[VAR7] = VAR6 + 1;
 










         FUN5("", VAR6, VAR16);
         VAR13->VAR53[VAR7] = VAR6;
 










         FUN5("", VAR6, VAR16);
         VAR13->VAR54[VAR7] = VAR6;
     }
    FUN5("", VAR6, VAR16);
    VAR13->VAR55 = VAR6 + 3;

    FUN5("", VAR6, VAR16);
    VAR13->VAR56 = VAR6;

    FUN5("", VAR6, VAR16);
    VAR13->VAR57 = VAR6 + 2;

    FUN5("", VAR6, VAR16);
    VAR13->VAR58 = VAR6;

    VAR13->VAR59 = VAR13->VAR57 +
                    VAR13->VAR58;

    VAR13->VAR60 = VAR13->VAR55 +
                    VAR13->VAR56;

 if((VAR13->VAR55 < 3) ||
 (VAR13->VAR57 < 2) ||
 (VAR13->VAR58 < 0) ||
 (VAR13->VAR59 > VAR13->VAR60) ||
 (VAR13->VAR60 < 4) ||
 (VAR13->VAR60 > 6))
 {
 return VAR38;
 }

    VAR13->VAR61 = 0;
    VAR13->VAR62 = 0;

    FUN5("", VAR6, VAR16);
    VAR13->VAR63 = VAR6;

    FUN5("", VAR6, VAR16);
    VAR13->VAR64 = VAR6;

 
    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR65 = VAR6;

 if(VAR13->VAR65)
 {
        FUN8(VAR13->VAR66);
        FUN2("", VAR6, VAR16, 1);
        VAR13->VAR67 = VAR6;

 if(VAR13->VAR67)
            FUN9(VAR3, VAR13->VAR66);
 }
 else
 {
        FUN10(VAR13->VAR66);
 }
 
    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR68 = VAR6;

    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR69 = VAR6;

    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR70 = VAR6;

 if(VAR13->VAR70)
 {
        FUN2("", VAR6, VAR16, 4);
        VAR13->VAR71 = VAR6 + 1;

        FUN2("", VAR6, VAR16, 4);
        VAR13->VAR72 = VAR6 + 1;

        FUN5("", VAR6, VAR16);
        VAR13->VAR61 = VAR6 + 3;

        FUN5("", VAR6, VAR16);
        VAR13->VAR62 = VAR6;
        FUN2("", VAR6, VAR16, 1);
        VAR13->VAR73 = VAR6;

 }
    FUN5("", VAR6, VAR16);
    VAR13->VAR74 = VAR6;

    VAR13->VAR74 = FUN3(VAR13->VAR74, 0, VAR75);

 for(VAR7 = 0; VAR7 < VAR13->VAR74; VAR7++)
        FUN11(VAR16, &VAR13->VAR76[0], VAR13->VAR74, VAR7, &VAR13->VAR76[VAR7]);

    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR77 = VAR6;

 if(VAR13->VAR77)
 {
        FUN5("", VAR6, VAR16);
        VAR13->VAR78 = VAR6;

 for(VAR7 = 0; VAR7 < VAR13->VAR78; VAR7++)
 {
            FUN2("", VAR6, VAR16, VAR13->VAR50);
            VAR13->VAR79[VAR7] = VAR6;

            FUN2("", VAR6, VAR16, 1);
            VAR13->VAR80[VAR7] = VAR6;
 }
 }

    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR81 = VAR6;

 
    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR82 = VAR6;

    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR83 = VAR6;

 if(VAR13->VAR83)
        FUN12(VAR16,
 &VAR13->VAR84,
                                    VAR13->VAR26 - 1);

    FUN2("", VAR6, VAR16, 1);


 {
        WORD32 VAR85;
        WORD32 VAR86;

        VAR86 = (1 << VAR13->VAR60) - 1;
        VAR85 = VAR13->VAR36;

        VAR13->VAR87 = ((VAR85 + VAR86) /
 (1 << VAR13->VAR60));

        VAR85 = VAR13->VAR37;
        VAR13->VAR88 = ((VAR85 + VAR86) /
 (1 << VAR13->VAR60));

        VAR13->VAR89 = VAR13->VAR88 *
                        VAR13->VAR87;

 if(0 == VAR3->VAR21)
            VAR3->VAR17.VAR90 = VAR13->VAR89;

        VAR85 = VAR13->VAR36;
        VAR13->VAR91 = VAR85  /
 (1 << VAR13->VAR55);

        VAR85 = VAR13->VAR37;
        VAR13->VAR92 = VAR85  /
 (1 << VAR13->VAR55);
 }
 if((0 != VAR3->VAR93) &&
 ((VAR3->VAR94 != VAR13->VAR36) ||
 (VAR3->VAR95 != VAR13->VAR37)))
 {
        VAR3->VAR96 = 1;
        VAR3->VAR32 = VAR97;
 return (VAR1)VAR98;
 }

 
 {
        WORD32 VAR99, VAR100;
        WORD32 VAR101, VAR102;
        VAR101 = 1;
        VAR102 = 1;

 if(VAR31 == VAR13->VAR30)
 {
            VAR101 = 2;
            VAR102 = 2;
 }

        VAR99 = VAR13->VAR36;
        VAR99 -= VAR13->VAR45 * VAR101;
        VAR99 -= VAR13->VAR46 * VAR101;


        VAR100 = VAR13->VAR37;
        VAR100 -= VAR13->VAR47 * VAR102;
        VAR100 -= VAR13->VAR48 * VAR102;

 if((0 >= VAR99) || (0 >= VAR100))
 return VAR38;

        VAR3->VAR103 = VAR99;
        VAR3->VAR104 = VAR100;


        VAR3->VAR94 = VAR13->VAR36;
        VAR3->VAR95 = VAR13->VAR37;

 {
            WORD32 VAR105;
            VAR105 = FUN13(VAR13->VAR36 + VAR106);
 if(VAR3->VAR107 < VAR105)
 {
                VAR3->VAR107 = VAR105;
 }
 }

 if(0 == VAR3->VAR108)
 {
 if(VAR3->VAR109 < VAR3->VAR103)
 {
                VAR3->VAR109 = VAR3->VAR103;
 }
 }
 else
 {
 if(VAR3->VAR109 < VAR3->VAR107)
 {
                VAR3->VAR109 = VAR3->VAR107;
 }
 }
 }

    VAR3->VAR21 = 1;
 return VAR4;
}