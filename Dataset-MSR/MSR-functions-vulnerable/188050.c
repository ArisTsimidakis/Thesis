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
    WORD32 VAR19 = 0;


    FUN2("", VAR6, VAR16, 4);
    VAR8 = VAR6;
    VAR8 = FUN3(VAR8, 0, VAR20 - 1);

    FUN2("", VAR6, VAR16, 3);
    VAR9 = VAR6 + 1;
    VAR9 = FUN3(VAR9, 1, 7);

    FUN2("", VAR6, VAR16, 1);
    VAR11 = VAR6;

 
    VAR4 = FUN4(VAR16, &(VAR14), 1,
 (VAR9 - 1));

    FUN5("", VAR6, VAR16);
    VAR10 = VAR6;

 if((VAR10 >= VAR21) || (VAR10 < 0))
 {
 if(VAR3->VAR22)
 return VAR23;
 else
            VAR10 = 0;
 }


    VAR13 = (VAR3->VAR17.VAR24 + VAR21 - 1);
    VAR13->VAR25 = VAR10;
    VAR13->VAR26 = VAR8;
    VAR13->VAR27 = VAR9;
    VAR13->VAR28 = VAR11;
 
    VAR3->VAR29 = VAR10;
    memcpy(&VAR13->VAR14, &VAR14, sizeof(VAR30));

    FUN5("", VAR6, VAR16);
    VAR13->VAR31 = VAR6;

 if(VAR13->VAR31 != VAR32)
 {
        VAR3->VAR17.VAR33 = VAR34;
 return (VAR1)VAR34;
 }

 if(VAR35 == VAR13->VAR31)
 {
        FUN2("", VAR6, VAR16, 1);
        VAR13->VAR36 = VAR6;
 }
 else
 {
        VAR13->VAR36 = 0;
 }

    FUN5("", VAR6, VAR16);
    VAR13->VAR37 = VAR6;

    FUN5("", VAR6, VAR16);
    VAR13->VAR38 = VAR6;

 if((0 >= VAR13->VAR37) || (0 >= VAR13->VAR38))
 return VAR39;

 
    VAR13->VAR37 = FUN6(VAR13->VAR37);
    VAR13->VAR38 = FUN6(VAR13->VAR38);

    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR40 = VAR6;

 if(VAR13->VAR40)
 {

        FUN5("", VAR6, VAR16);
        VAR13->VAR41 = VAR6;

        FUN5("", VAR6, VAR16);
        VAR13->VAR42 = VAR6;

        FUN5("", VAR6, VAR16);
        VAR13->VAR43 = VAR6;

        FUN5("", VAR6, VAR16);
        VAR13->VAR44 = VAR6;
 }
 else
 {
        VAR13->VAR41 = 0;
        VAR13->VAR42 = 0;
        VAR13->VAR43 = 0;
        VAR13->VAR44 = 0;
 }


    FUN5("", VAR6, VAR16);
 if(0 != VAR6)
 return VAR45;

    FUN5("", VAR6, VAR16);
 if(0 != VAR6)
 return VAR45;

    FUN5("", VAR6, VAR16);
    VAR13->VAR46 = VAR6 + 4;

    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR47 = VAR6;


    VAR7 = (VAR13->VAR47 ? 0 : (VAR13->VAR27 - 1));
 for(; VAR7 < VAR13->VAR27; VAR7++)
 {
        FUN5("", VAR6, VAR16);
        VAR13->VAR48[VAR7] = VAR6 + 1;

 if(VAR13->VAR48[VAR7] > VAR49)
 {
 return VAR39;
 }

        FUN5("", VAR6, VAR16);
        VAR13->VAR50[VAR7] = VAR6;

 if(VAR13->VAR50[VAR7] > VAR13->VAR48[VAR7])
 {
 return VAR39;
 }

        FUN5("", VAR6, VAR16);
        VAR13->VAR51[VAR7] = VAR6;
 }
    FUN5("", VAR6, VAR16);
    VAR13->VAR52 = VAR6 + 3;

    FUN5("", VAR6, VAR16);
    VAR13->VAR53 = VAR6;

    VAR19 = VAR13->VAR52 + VAR13->VAR53;

    FUN5("", VAR6, VAR16);
    VAR13->VAR54 = VAR6 + 2;

    FUN5("", VAR6, VAR16);
    VAR13->VAR55 = VAR6;

    VAR13->VAR56 = VAR13->VAR54 +
                    VAR13->VAR55;

 if ((VAR13->VAR56 < 0) ||
 (VAR13->VAR56 > FUN7(VAR19, 5)))
 {
 return VAR39;
 }

    VAR13->VAR57 = VAR13->VAR52 +
                    VAR13->VAR53;

 if((VAR13->VAR52 < 3) ||
 (VAR13->VAR54 < 2) ||
 (VAR13->VAR55 < 0) ||
 (VAR13->VAR56 > VAR13->VAR57) ||
 (VAR13->VAR57 < 4) ||
 (VAR13->VAR57 > 6))
 {
 return VAR39;
 }

    VAR13->VAR58 = 0;
    VAR13->VAR59 = 0;

    FUN5("", VAR6, VAR16);
    VAR13->VAR60 = VAR6;

    FUN5("", VAR6, VAR16);
    VAR13->VAR61 = VAR6;

 
    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR62 = VAR6;

 if(VAR13->VAR62)
 {
        FUN8(VAR13->VAR63);
        FUN2("", VAR6, VAR16, 1);
        VAR13->VAR64 = VAR6;

 if(VAR13->VAR64)
            FUN9(VAR3, VAR13->VAR63);
 }
 else
 {
        FUN10(VAR13->VAR63);
 }
 
    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR65 = VAR6;

    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR66 = VAR6;

    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR67 = VAR6;

 if(VAR13->VAR67)
 {
        FUN2("", VAR6, VAR16, 4);
        VAR13->VAR68 = VAR6 + 1;

        FUN2("", VAR6, VAR16, 4);
        VAR13->VAR69 = VAR6 + 1;

        FUN5("", VAR6, VAR16);
        VAR13->VAR58 = VAR6 + 3;

        FUN5("", VAR6, VAR16);
        VAR13->VAR59 = VAR6;
        FUN2("", VAR6, VAR16, 1);
        VAR13->VAR70 = VAR6;

 }
    FUN5("", VAR6, VAR16);
    VAR13->VAR71 = VAR6;

    VAR13->VAR71 = FUN3(VAR13->VAR71, 0, VAR72);

 for(VAR7 = 0; VAR7 < VAR13->VAR71; VAR7++)
        FUN11(VAR16, &VAR13->VAR73[0], VAR13->VAR71, VAR7, &VAR13->VAR73[VAR7]);

    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR74 = VAR6;

 if(VAR13->VAR74)
 {
        FUN5("", VAR6, VAR16);
        VAR13->VAR75 = VAR6;

 for(VAR7 = 0; VAR7 < VAR13->VAR75; VAR7++)
 {
            FUN2("", VAR6, VAR16, VAR13->VAR46);
            VAR13->VAR76[VAR7] = VAR6;

            FUN2("", VAR6, VAR16, 1);
            VAR13->VAR77[VAR7] = VAR6;
 }
 }

    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR78 = VAR6;

 
    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR79 = VAR6;

    FUN2("", VAR6, VAR16, 1);
    VAR13->VAR80 = VAR6;

 if(VAR13->VAR80)
        FUN12(VAR16,
 &VAR13->VAR81,
                                    VAR13->VAR27 - 1);

 
     FUN2("", VAR6, VAR16, 1);
 








 
     {
         WORD32 VAR82;
        WORD32 VAR83;

        VAR83 = (1 << VAR13->VAR57) - 1;
        VAR82 = VAR13->VAR37;

        VAR13->VAR84 = ((VAR82 + VAR83) /
 (1 << VAR13->VAR57));

        VAR82 = VAR13->VAR38;
        VAR13->VAR85 = ((VAR82 + VAR83) /
 (1 << VAR13->VAR57));

        VAR13->VAR86 = VAR13->VAR85 *
                        VAR13->VAR84;

 if(0 == VAR3->VAR22)
            VAR3->VAR17.VAR87 = VAR13->VAR86;

        VAR82 = VAR13->VAR37;
        VAR13->VAR88 = VAR82  /
 (1 << VAR13->VAR52);

        VAR82 = VAR13->VAR38;
        VAR13->VAR89 = VAR82  /
 (1 << VAR13->VAR52);
 }
 if((0 != VAR3->VAR90) &&
 ((VAR3->VAR91 != VAR13->VAR37) ||
 (VAR3->VAR92 != VAR13->VAR38)))
 {
        VAR3->VAR93 = 1;
 return (VAR1)VAR94;
 }

 
 {
        WORD32 VAR95, VAR96;
        WORD32 VAR97, VAR98;
        VAR97 = 1;
        VAR98 = 1;

 if(VAR32 == VAR13->VAR31)
 {
            VAR97 = 2;
            VAR98 = 2;
 }

        VAR95 = VAR13->VAR37;
        VAR95 -= VAR13->VAR41 * VAR97;
        VAR95 -= VAR13->VAR42 * VAR97;


        VAR96 = VAR13->VAR38;
        VAR96 -= VAR13->VAR43 * VAR98;
        VAR96 -= VAR13->VAR44 * VAR98;

 if((0 >= VAR95) || (0 >= VAR96))
 return VAR39;

        VAR3->VAR99 = VAR95;
        VAR3->VAR100 = VAR96;


        VAR3->VAR91 = VAR13->VAR37;
        VAR3->VAR92 = VAR13->VAR38;

 {
            WORD32 VAR101;
            VAR101 = FUN13(VAR13->VAR37 + VAR102);
 if(VAR3->VAR103 < VAR101)
 {
                VAR3->VAR103 = VAR101;
 }
 }

 if(0 == VAR3->VAR104)
 {
 if(VAR3->VAR105 < VAR3->VAR99)
 {
                VAR3->VAR105 = VAR3->VAR99;
 }
 }
 else
 {
 if(VAR3->VAR105 < VAR3->VAR103)
 {
                VAR3->VAR105 = VAR3->VAR103;
 }
 }
 }

    VAR3->VAR22 = 1;
 return VAR4;
}