VAR1 FUN1(VAR2 * VAR3,
 VAR4 * VAR5,
                                           UWORD16 VAR6)
{
    UWORD32 VAR7;
    WORD32 VAR8;
    UWORD32 VAR9, VAR10, VAR11;
    UWORD32 VAR12;
    UWORD32 VAR13, VAR14;
 const UWORD16 VAR15 = VAR3->VAR16;
    UWORD32 VAR17 = 0;
    UWORD32 VAR18 = 0;
    UWORD32 VAR19 = 0;


 VAR20 *VAR21;
 VAR22 *VAR23;

 VAR24 *VAR25 = VAR3->VAR25;
    UWORD32 VAR26;
    UWORD32 VAR27;
    UWORD32 VAR28;
    UWORD32 VAR29;
 VAR30 * const VAR31 = VAR3->VAR31;
    WORD32 VAR32 = VAR33;

 
 
 
 if(VAR5->VAR34 == VAR35)
 {
        VAR26 = VAR36;
        VAR27 = VAR37;
        VAR28 = VAR38;
        VAR29 = 5;
 }
 else 
 {
        VAR26 = VAR39;
        VAR27 = VAR40;
        VAR28 = VAR41;
        VAR29 = 23;
 }

 
 
 
    VAR8 = VAR6;
    VAR3->VAR42 = VAR5->VAR43;
    FUN2(VAR3, 0);
    VAR11 = VAR3->VAR11;
    VAR9 = VAR11;
    VAR10 = 0;
    VAR12 = VAR5->VAR44;
    VAR8 = VAR6 << VAR12;
    VAR7 = 1;

 
 if(VAR31->VAR45 & 0x07)
 {
        VAR31->VAR45 += 8;
        VAR31->VAR45 &= 0xFFFFFFF8;
 }

    VAR32 = FUN3(&(VAR3->VAR46), VAR31);
 if(VAR32 != VAR33)
 return VAR32;

    VAR3->VAR47 = 0;

 while(!VAR17)
 {
        UWORD8 VAR48;
        UWORD32 VAR49;

        VAR3->VAR50 = VAR3->VAR51;

 if(VAR8 > VAR3->VAR52->VAR53)
 {
            VAR32 = VAR54;
 break;
 }

        VAR23 = VAR3->VAR55 + VAR9;
        VAR3->VAR56 = VAR9;

        VAR23->VAR57 = 0;
        VAR3->VAR58 = (VAR9 >> VAR12);
        VAR21 = VAR3->VAR59 + VAR9;

        VAR23->VAR60 = 0;

 
        VAR25->VAR61 = 1;
        VAR25->VAR62 = 0;

 
 
 
 
        VAR49 = VAR3->FUN4(VAR3, VAR8, VAR23, 1);

 
 
 
        VAR23->VAR63 = 0;
        VAR23->VAR64->VAR63 = 0;

 
 
 
 if(VAR3->VAR65 == 0)
            FUN5(VAR21, VAR5,
                                             VAR3->VAR66,
                                             VAR3->VAR67);

 if(VAR49)
 {

 
            memset(VAR3->VAR68, 0, sizeof(VAR69));
            VAR3->VAR68->VAR48 = VAR26;

            FUN6(&VAR3->VAR70[0][0], 0);

 *((VAR71 *)VAR3->VAR72) = 0;
 *(VAR3->VAR73) = 0;

            VAR3->VAR47 = 0;
            VAR23->VAR48 = VAR74;
            VAR23->VAR75 = 0;

 {
 
 VAR76 *VAR77 = VAR3->VAR78;
                VAR77->VAR79 = VAR80;
                VAR77->VAR81 = 0;
                VAR3->VAR78++;
 }

 
            FUN7(VAR3, VAR23, VAR82);

            VAR23->VAR64->VAR48 = VAR27;
            VAR21->VAR48 |= VAR28;
            VAR21->VAR83 = VAR3->VAR42;

 }
 else
 {

 
 
            VAR48 = FUN8(VAR3);
            VAR23->VAR48 = VAR48;
 if(VAR48 > (25 + VAR29))
 return VAR84;

 
 if(VAR48 < VAR29)
 {
                VAR23->VAR64->VAR48 = VAR27;
 *(VAR3->VAR73) &= 0x6;

                VAR32 = VAR3->FUN9(VAR3, VAR23, VAR9,
                                          VAR10);
 if(VAR32 != VAR33)
 return VAR32;
                VAR21->VAR83 = VAR3->VAR42;
                VAR21->VAR48 |= VAR28;
 }
 else
 {
 
                VAR25->VAR61 = 0;
                VAR25->VAR62 = 1;

 if((25 + VAR29) == VAR48)
 {
 
                    VAR23->VAR64->VAR48 = VAR85;
                    VAR32 = FUN10(VAR3, VAR23, VAR9);
 if(VAR32 != VAR33)
 return VAR32;
                    VAR21->VAR83 = 0;
 }
 else
 {
 if(VAR48 == VAR29)
                        VAR23->VAR64->VAR48 = VAR86;
 else
                        VAR23->VAR64->VAR48 = VAR87;

                    VAR32 = FUN11(
                                    VAR3, VAR23,
 (VAR88)(VAR48 - VAR29));
 if(VAR32 != VAR33)
 return VAR32;
                    VAR21->VAR83 = VAR3->VAR42;
 }
                VAR21->VAR48 |= VAR89;

 }

 }

 if(VAR12)
 {
            FUN12(VAR3, VAR23);
 }
 
        VAR8++;

 if(VAR23->VAR90 && VAR12)
            VAR7 = 1;
 else
 {
            VAR7 = FUN13(&VAR3->VAR46,
                                                      VAR31);
            VAR7 = !VAR7;
            FUN14("",!VAR7);

         }
 
         VAR9++;

        VAR3->VAR91++;
         VAR10++;
         VAR25++;
 
 
 
 
 
 
        VAR13 = VAR15 - VAR3->VAR92 - 1;
        VAR14 = (!VAR13) && (!(VAR12 && (VAR9 & 0x01)));
        VAR17 = !VAR7;
        VAR18 = (VAR9 == VAR3->VAR93) || VAR14
 || VAR17;
        VAR19 = VAR18 || VAR17;
        VAR23->VAR60 = VAR17;
 


 if(VAR19)
 {

            VAR3->FUN15(VAR3, VAR11, VAR9);
            VAR10 = 0;

 {
                VAR25 = VAR3->VAR25;
                VAR3->VAR78 = VAR3->VAR94;
 }
 }

 
 if(VAR19)
 {

 if(VAR3->VAR95)
 {
                FUN16(VAR3, VAR11, VAR9,
                                     VAR13, VAR18, VAR14);
                VAR3->VAR55 +=  VAR9;
 }
 else
 {
                FUN17(VAR3, VAR11, VAR9,

                                             VAR13, VAR18,
                                             VAR14);
             }




             if(VAR18)
                 VAR9 = 0;
             VAR11 = VAR9;
            VAR3->VAR11 = VAR9;

 }
 }


    VAR3->VAR56 = 0;
    VAR3->VAR96->VAR97 = VAR8

 - (VAR6 << VAR12);

 return VAR32;
}