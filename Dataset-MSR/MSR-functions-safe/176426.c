VAR1 FUN1(VAR2 *VAR3)
{
    IHEVCD_ERROR_T VAR4 = (VAR1)VAR5;
    WORD32 VAR6;
    WORD32 VAR7;

 VAR8 *VAR9;
 VAR10 *VAR11;
 VAR12 *VAR13 = &VAR3->VAR14.VAR15;


 if(0 == VAR3->VAR16)
 return VAR17;

    FUN2("", VAR6, VAR13);

    VAR7 = VAR6;
 if((VAR7 >= VAR18) || (VAR7 < 0))
 {
 if(VAR3->VAR19)
 return VAR20;
 else
            VAR7 = 0;
 }


    VAR9 = (VAR3->VAR14.VAR21 + VAR18 - 1);

    VAR9->VAR22 = VAR7;

    FUN2("", VAR6, VAR13);
    VAR9->VAR23 = VAR6;
    VAR9->VAR23 = FUN3(VAR9->VAR23, 0, VAR24 - 2);

    VAR11 = (VAR3->VAR14.VAR25 + VAR9->VAR23);

 
 if(0 == VAR11->VAR26)
 {
 return VAR17;


 }

    FUN4("", VAR6, VAR13, 1);
    VAR9->VAR27 = VAR6;

    FUN4("", VAR6, VAR13, 1);
    VAR9->VAR28 = VAR6;

    FUN4("", VAR6, VAR13, 3);
    VAR9->VAR29 = VAR6;


    FUN4("", VAR6, VAR13, 1);
    VAR9->VAR30 = VAR6;

    FUN4("", VAR6, VAR13, 1);
    VAR9->VAR31 = VAR6;

    FUN2("", VAR6, VAR13);
    VAR9->VAR32 = VAR6 + 1;

    FUN2("", VAR6, VAR13);
    VAR9->VAR33 = VAR6 + 1;

    FUN5("", VAR6, VAR13);
    VAR9->VAR34 = VAR6 + 26;

    FUN4("", VAR6, VAR13, 1);
    VAR9->VAR35 = VAR6;

    FUN4("", VAR6, VAR13, 1);
    VAR9->VAR36 = VAR6;

    FUN4("", VAR6, VAR13, 1);
    VAR9->VAR37 = VAR6;

 if(VAR9->VAR37)
 {
        FUN2("", VAR6, VAR13);
        VAR9->VAR38 = VAR6;
 }
 else
 {
        VAR9->VAR38 = 0;
 }
    VAR9->VAR39 = VAR11->VAR40 - VAR9->VAR38;
 
    FUN5("", VAR6, VAR13);
    VAR9->VAR41 = VAR6;

 
    FUN5("", VAR6, VAR13);
    VAR9->VAR42 = VAR6;

 
    FUN4("", VAR6, VAR13, 1);
    VAR9->VAR43 = VAR6;

    FUN4("", VAR6, VAR13, 1);
    VAR9->VAR44 = VAR6;

    FUN4("", VAR6, VAR13, 1);
    VAR9->VAR45 = VAR6;

    FUN4("", VAR6, VAR13, 1);
    VAR9->VAR46 = VAR6;

    FUN4("", VAR6, VAR13, 1);
    VAR9->VAR47 = VAR6;

 
 if((VAR9->VAR47) &&
 (VAR11->VAR40 == 4) &&
 ((VAR11->VAR48 >= 4096) ||
 (VAR11->VAR49 >= 4096)))
 {
 return VAR17;
 }

    FUN4("", VAR6, VAR13, 1);
    VAR9->VAR50 = VAR6;

    VAR9->VAR51 = 0;
 if(VAR9->VAR47)
 {
        WORD32 VAR52 = FUN6(VAR3->VAR53);
        WORD32 VAR54 = FUN6(VAR3->VAR55);

        WORD32 VAR56 = (VAR52 + VAR57 - 1) / VAR57;
        WORD32 VAR58 = (VAR54 + VAR59 - 1) / VAR59;

        FUN2("", VAR6, VAR13);
        VAR9->VAR60 = VAR6 + 1;

        FUN2("", VAR6, VAR13);
        VAR9->VAR61 = VAR6 + 1;

 if((VAR9->VAR60 < 1) ||
 (VAR9->VAR60 > VAR56) ||
 (VAR9->VAR61 < 1) ||
 (VAR9->VAR61 > VAR58))
 return VAR17;

        FUN4("", VAR6, VAR13, 1);
        VAR9->VAR62 = VAR6;


 {

            WORD32 VAR63;
            WORD32 VAR64, VAR65;


            VAR63 = 0;
 for(VAR64 = 0; VAR64 < VAR9->VAR60; VAR64++)
 {
 VAR66 *VAR67;
 if(!VAR9->VAR62)
 {
 if(VAR64 < (VAR9->VAR60 - 1))
 {
                        FUN2("", VAR6, VAR13);
                        VAR6 += 1;
 }
 else
 {
                        VAR6 = VAR11->VAR68 - VAR63;
 }
 }
 else
 {
                    VAR6 = ((VAR64 + 1) * VAR11->VAR68) / VAR9->VAR60 -
 (VAR64 * VAR11->VAR68) / VAR9->VAR60;
 }

 for(VAR65 = 0; VAR65 < VAR9->VAR61; VAR65++)
 {
                    VAR67 = VAR9->VAR67 + VAR65 * VAR9->VAR60 + VAR64;
                    VAR67->VAR69 = VAR63;
                    VAR67->VAR70 = VAR6;
 }
                VAR63 += VAR6;

 if((VAR63 > VAR11->VAR68) ||
 (VAR6 <= 0))
 return VAR17;
 }

            VAR63 = 0;
 for(VAR64 = 0; VAR64 < (VAR9->VAR61); VAR64++)
 {
 VAR66 *VAR67;
 if(!VAR9->VAR62)
 {
 if(VAR64 < (VAR9->VAR61 - 1))
 {

                        FUN2("", VAR6, VAR13);
                        VAR6 += 1;
 }
 else
 {
                        VAR6 = VAR11->VAR71 - VAR63;
 }
 }
 else
 {
                    VAR6 = ((VAR64 + 1) * VAR11->VAR71) / VAR9->VAR61 -
 (VAR64 * VAR11->VAR71) / VAR9->VAR61;
 }

 for(VAR65 = 0; VAR65 < VAR9->VAR60; VAR65++)
 {
                    VAR67 = VAR9->VAR67 + VAR64 * VAR9->VAR60 + VAR65;
                    VAR67->VAR72 = VAR63;
                    VAR67->VAR73 = VAR6;
 }
                VAR63 += VAR6;

 if((VAR63 > VAR11->VAR71) ||
 (VAR6 <= 0))
 return VAR17;
 }
 }


        FUN4("", VAR6, VAR13, 1);
        VAR9->VAR51 = VAR6;

 }
 else
 {
 
        VAR9->VAR60 = 1;
        VAR9->VAR61 = 1;
        VAR9->VAR62 = 1;

        VAR9->VAR67->VAR69 = 0;
        VAR9->VAR67->VAR72 = 0;
        VAR9->VAR67->VAR70 = VAR11->VAR68;
        VAR9->VAR67->VAR73 = VAR11->VAR71;
 }

    FUN4("", VAR6, VAR13, 1);
    VAR9->VAR74 = VAR6;

    FUN4("", VAR6, VAR13, 1);
    VAR9->VAR75 = VAR6;

 
    VAR9->VAR76 = 0;
    VAR9->VAR77 = 0;
    VAR9->VAR78 = 0;
    VAR9->VAR79 = 0;

 if(VAR9->VAR75)
 {

        FUN4("", VAR6, VAR13, 1);
        VAR9->VAR77 = VAR6;

        FUN4("", VAR6, VAR13, 1);
        VAR9->VAR76 = VAR6;

 if(!VAR9->VAR76)
 {

            FUN5("", VAR6, VAR13);
            VAR9->VAR78 = VAR6;

            FUN5("", VAR6, VAR13);
            VAR9->VAR79 = VAR6;

 }
 }

    FUN4("", VAR6, VAR13, 1);
    VAR9->VAR80 = VAR6;

 if(VAR9->VAR80)
 {
        FUN7(VAR9->VAR81);
        FUN8(VAR3, VAR9->VAR81);
 }

    FUN4("", VAR6, VAR13, 1);
    VAR9->VAR82 = VAR6;
    FUN2("", VAR6, VAR13);
    VAR9->VAR83 = VAR6 + 2;

    FUN4("", VAR6, VAR13, 1);
    VAR9->VAR84 = VAR6;
 
    FUN4("", VAR6, VAR13, 1);

 if((VAR85 *)VAR13->VAR86 > VAR13->VAR87)
 return VAR88;

    VAR3->VAR19 = 1;
 return VAR4;
}