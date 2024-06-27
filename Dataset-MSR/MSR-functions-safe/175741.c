VAR1  FUN1(VAR2 *VAR3,
                                         WORD32 VAR4,
                                         WORD32 VAR5,
                                         WORD32 VAR6)
{
    IHEVCD_ERROR_T VAR7 = (VAR1)VAR8;
 VAR9 *VAR10;
 VAR11 *VAR12;
    WORD32 VAR13;
 VAR14 *VAR15;
    WORD32 VAR16;
    WORD32 VAR17;
    VAR18 *VAR19 = VAR3->VAR20.VAR21;
    UWORD32 VAR22 = VAR3->VAR20.VAR23;
 VAR24 *VAR25 = &VAR3->VAR20.VAR26;
 VAR27 *VAR28 = VAR3->VAR20.VAR28;

    WORD32 VAR29;
    WORD32 VAR30;
 VAR31 *VAR32 = &VAR3->VAR20.VAR33;

    FUN2(0 == (VAR4 % 8));
    FUN2(0 == (VAR5 % 8));

    VAR3->VAR20.VAR34.VAR35 = 0;
    VAR10 = VAR3->VAR20.VAR10;
    VAR12 = VAR3->VAR20.VAR12;

    VAR29 = VAR3->VAR20.VAR34.VAR36;
    VAR30 = VAR3->VAR20.VAR34.VAR37;



    VAR15 = VAR3->VAR20.VAR15;


    VAR13 = 1 << VAR6;

    VAR3->VAR20.VAR34.VAR38 = 0;

 if(VAR12->VAR39)
 {
        FUN3("", VAR32->VAR40, VAR41);
        VAR3->VAR20.VAR34.VAR38 =
                        FUN4(VAR32, VAR25,
                                                VAR41);
 

        FUN5("", VAR3->VAR20.VAR34.VAR38,
                  VAR32->VAR40);

 if(VAR3->VAR20.VAR34.VAR38)
 {
            VAR42 *VAR43 = VAR3->VAR20.VAR43;
            UWORD32 VAR44;
            WORD32 VAR45;
            WORD32 VAR46;
            VAR46 = (VAR10->VAR47 + 63) / 64;
            VAR43 += (VAR5 / 8) * VAR46;
            VAR43 += (VAR4 / 64);

 
 
            VAR44 = FUN6((VAR13 >> 3));
 for(VAR45 = 0; VAR45 < (VAR13 / 8); VAR45++)
 {
 *VAR43 |= (VAR44 << (((VAR4) / 8) % 8));
                VAR43 += VAR46;
 }
 }
 }

 {
        UWORD32 VAR48 = 0;
        UWORD32 VAR44;
        UWORD32 VAR49, VAR50;
        UWORD32 VAR51 = VAR4 / 8;
        UWORD32 VAR52 = VAR5 / 8;

        VAR19 += (VAR51 / 32);


 if(VAR15->VAR53 != VAR54)
 {
            WORD32 VAR55;
            VAR55 = 0;

 if((0 != VAR30) ||
 ((0 != VAR3->VAR20.VAR56) &&
 (0 != VAR3->VAR20.VAR57)))
 {
                VAR48 = *VAR19;
                VAR48 >>= (VAR51 % 32);
 if(VAR48 & 1)
                    VAR55++;
 }

 
 
 
 
 
 
 if((0 != VAR29) ||
 (((0 != VAR3->VAR20.VAR58) || (0 != VAR3->VAR20.VAR56)) &&
 (0 != VAR3->VAR20.VAR59)))
 {
                VAR22 >>= (VAR52 % 32);
 if(VAR22 & 1)
                    VAR55++;
 }
            FUN3("", VAR32->VAR40, (VAR60 + VAR55));
            VAR16 = FUN4(VAR32,
                                                VAR25,
 (VAR60 + VAR55));

            FUN5("", VAR16, VAR32->VAR40);
 }
 else
            VAR16 = 0;

 
        VAR48 = *VAR19;
 
 
        VAR44 = FUN6(VAR13 / 8);
        VAR49 = VAR44 << (VAR51 % 32);


 if(VAR16)
 {
            VAR48 |= VAR49;
 }
 else
 {
            VAR48 &= ~VAR49;
 }
 *VAR19 = VAR48;

 
        VAR22 = VAR3->VAR20.VAR23;
        VAR44 = FUN6(VAR13 / 8);
        VAR50 = VAR44 << (VAR52 % 32);

 if(VAR16)
 {
            VAR22 |= VAR50;
 }
 else
 {
            VAR22 &= ~VAR50;
 }
        VAR3->VAR20.VAR23 = VAR22;
 }
    VAR3->VAR20.VAR61 = 0;

 if(VAR16)
 {
        WORD32 VAR62;
        WORD32 VAR63;

        VAR62 = VAR3->VAR20.VAR64 << VAR10->VAR65;
        VAR63 = VAR3->VAR20.VAR66 << VAR10->VAR65;

        VAR28->VAR67 = 0;
        VAR28->VAR68 = 0;
        VAR28->VAR69 = 0;
        VAR28->VAR70 = ((VAR4 - VAR62) >> 2);
        VAR28->VAR71 = ((VAR5 - VAR63) >> 2);
        VAR28->VAR72 = 0;
        VAR28->VAR73 = (VAR6 - 2);
        VAR28->VAR74 = VAR3->VAR20.VAR75;
        VAR28->VAR76 = VAR77;
        VAR28->VAR78   = VAR79;

 
 {
 if((VAR3->VAR20.VAR34.VAR36 << 3) == (VAR28->VAR70 << 2) &&
 (VAR3->VAR20.VAR34.VAR37 << 3) == (VAR28->VAR71 << 2))
 {
                VAR28->VAR80 = 1;
 }
 else
 {
                VAR28->VAR80 = 0;
 }
 }

        VAR3->VAR20.VAR28++;
        VAR3->VAR20.VAR34.VAR35++;
        VAR3->VAR20.VAR81++;

        VAR3->VAR20.VAR34.VAR82 = VAR83;
        VAR3->VAR20.VAR34.VAR84 = VAR85;
 {
 VAR86 *VAR87 = VAR3->VAR20.VAR87;
            VAR87->VAR88 = 0;
            FUN7(VAR3, VAR4, VAR5, VAR13, VAR13);
            FUN8(VAR87);
 }
 }
 else
 {
        WORD32 VAR89;
        WORD32 VAR90;
        WORD32 VAR91;
        WORD32 VAR92;
        VAR13 = (1 << VAR6);
        VAR92 = (VAR13 == (1 << VAR10->VAR93));
        VAR17 = 0;
 if(VAR15->VAR53 != VAR54)
 {
            FUN3("", VAR32->VAR40, VAR94);
            VAR89 = FUN4(VAR32,
                                                VAR25,
                                                VAR94);

            FUN5("", VAR89, VAR32->VAR40);
 }
 else
 {
            VAR89 = VAR95;
 }

 
 if(VAR95 == VAR89)
 {
            VAR42 *VAR96 = VAR3->VAR20.VAR96;
            UWORD32 VAR44;
            WORD32 VAR45;
            WORD32 VAR46;
            VAR46 = (VAR10->VAR47 + 63) / 64;
            VAR96 += (VAR5 / 8) * VAR46;
            VAR96 += (VAR4 / 64);

 
 
            VAR44 = FUN6((VAR13 >> 3));
 for(VAR45 = 0; VAR45 < (VAR13 / 8); VAR45++)
 {
 *VAR96 |= (VAR44 << (((VAR4) / 8) % 8));
                VAR96 += VAR46;
 }
 }

        VAR3->VAR20.VAR34.VAR82 = VAR89;
        VAR91 = 0;
 if((VAR95 != VAR89) ||
                        VAR92)
 {
            UWORD32 VAR97;
 if(VAR95 == VAR89)
 {
                FUN3("", VAR32->VAR40, VAR98);
                VAR97 = FUN4(VAR32, VAR25, VAR98);
                VAR90 = (VAR97) ? VAR85 : VAR99;
 }
 else
 {
                WORD32 VAR100 = VAR10->VAR101;

                UWORD32 VAR102 = 0;



 if(VAR100 && !VAR92)
 {
                    VAR90 = FUN9(VAR32, VAR25);
 }
 else
 {
                    WORD32 VAR103 = VAR98;

                    VAR102 = 2;
 if((VAR92) && (VAR13 > 8))
 {
                        VAR102++;
 }

                    VAR90 = -1;
                    FUN3("", VAR32->VAR40, VAR98);
 do
 {
                        VAR97 = FUN4(VAR32, VAR25,
                                                      VAR103++);
                        VAR90++;
 }while(--VAR102 && !VAR97);

 
 if(!VAR97)
                        VAR90++;
 }


 }

            FUN5("", VAR90, VAR32->VAR40);

 }
 else
 {
            VAR90 = 0;
            VAR91 = 0;
 }
        VAR3->VAR20.VAR34.VAR84 = VAR90;

 if((VAR95 == VAR3->VAR20.VAR34.VAR82) &&
 (VAR99 == VAR3->VAR20.VAR34.VAR84))
 {
            VAR91 = 1;
 }
        VAR3->VAR20.VAR34.VAR84 = VAR90;
        VAR3->VAR20.VAR34.VAR104 = VAR91;
 if(VAR89 == VAR95)
 {
            VAR3->VAR20.VAR61 = 0;
            FUN10(VAR3, VAR4, VAR5, VAR6);
            VAR17 = VAR3->VAR20.VAR61;

 }
 else
 {
 if(VAR90 == VAR85)
 {
 VAR86 *VAR87 = VAR3->VAR20.VAR87;
                FUN7(VAR3, VAR4, VAR5, VAR13, VAR13);
                VAR87->VAR88 = 0;
 }
 else if(VAR90 == VAR105)
 {
 VAR86 *VAR87 = VAR3->VAR20.VAR87;

                FUN7(VAR3, VAR4, VAR5, VAR13, VAR13 / 2);
                VAR87->VAR88 = 0;

                VAR87 = VAR3->VAR20.VAR87;
                FUN7(VAR3, VAR4, VAR5 + (VAR13 / 2), VAR13, VAR13 / 2);

                VAR87->VAR88 = 1;
 }
 else if(VAR90 == VAR106)
 {
 VAR86 *VAR87 = VAR3->VAR20.VAR87;
                FUN7(VAR3, VAR4, VAR5, VAR13 / 2, VAR13);
                VAR87->VAR88 = 0;
                VAR87 = VAR3->VAR20.VAR87;
                FUN7(VAR3, VAR4 + (VAR13 / 2), VAR5, VAR13 / 2, VAR13);

                VAR87->VAR88 = 1;
 }
 else if(VAR90 == VAR107)
 {
 VAR86 *VAR87 = VAR3->VAR20.VAR87;
                FUN7(VAR3, VAR4, VAR5, VAR13, VAR13 / 4);
                VAR87->VAR88 = 0;
                VAR87 = VAR3->VAR20.VAR87;
                FUN7(VAR3, VAR4, VAR5 + (VAR13 / 4), VAR13, VAR13 * 3 / 4);

                VAR87->VAR88 = 1;
 }
 else if(VAR90 == VAR108)
 {
 VAR86 *VAR87 = VAR3->VAR20.VAR87;
                FUN7(VAR3, VAR4, VAR5, VAR13, VAR13 * 3 / 4);
                VAR87->VAR88 = 0;
                VAR87 = VAR3->VAR20.VAR87;
                FUN7(VAR3, VAR4, VAR5 + (VAR13 * 3 / 4), VAR13, VAR13 / 4);

                VAR87->VAR88 = 1;
 }
 else if(VAR90 == VAR109)
 {
 VAR86 *VAR87 = VAR3->VAR20.VAR87;
                FUN7(VAR3, VAR4, VAR5, VAR13 / 4, VAR13);
                VAR87->VAR88 = 0;
                VAR87 = VAR3->VAR20.VAR87;
                FUN7(VAR3, VAR4 + (VAR13 / 4), VAR5, VAR13 * 3 / 4, VAR13);

                VAR87->VAR88 = 1;
 }
 else if(VAR90 == VAR110)
 {
 VAR86 *VAR87 = VAR3->VAR20.VAR87;
                FUN7(VAR3, VAR4, VAR5, VAR13 * 3 / 4, VAR13);
                VAR87->VAR88 = 0;
                VAR87 = VAR3->VAR20.VAR87;
                FUN7(VAR3, VAR4 + (VAR13 * 3 / 4), VAR5, VAR13 / 4, VAR13);
                VAR87->VAR88 = 1;
 }
 else
 { 
 VAR86 *VAR87 = VAR3->VAR20.VAR87;

                FUN7(VAR3, VAR4, VAR5, VAR13 / 2, VAR13 / 2);
                VAR87->VAR88 = 0;
                VAR87 = VAR3->VAR20.VAR87;
                FUN7(VAR3, VAR4 + (VAR13 / 2), VAR5, VAR13 / 2, VAR13 / 2);

                VAR87->VAR88 = 1;
                VAR87 = VAR3->VAR20.VAR87;
                FUN7(VAR3, VAR4, VAR5 + (VAR13 / 2), VAR13 / 2, VAR13 / 2);

                VAR87->VAR88 = 2;
                VAR87 = VAR3->VAR20.VAR87;
                FUN7(VAR3, VAR4 + (VAR13 / 2), VAR5 + (VAR13 / 2), VAR13 / 2, VAR13 / 2);

                VAR87->VAR88 = 3;
 }
 }

 if(!VAR17)
 {
            WORD32 VAR111 = 0;
 VAR86 *VAR87;
 
            VAR87 = VAR3->VAR20.VAR87 - 1;
 if((VAR95 != VAR89) &&
 (!((VAR90 == VAR85) && VAR87->VAR112)))
 {

                FUN3("", VAR32->VAR40, VAR113);
                VAR111 = FUN4(VAR32,
                                                                  VAR25,
                                                                  VAR113);

                FUN5("", VAR111,
                          VAR32->VAR40);
 
 
 
 
 
 
                VAR111 = 1 - VAR111;
 }

 if(!VAR111)
 {

                VAR3->VAR20.VAR34.VAR114 = (VAR89 == VAR95) ?
 (VAR10->VAR115 + VAR91) :
 (VAR10->VAR116);
                FUN11(VAR3, VAR4, VAR5, VAR4, VAR5,
                                            VAR6, 0, 0,
                                            VAR3->VAR20.VAR34.VAR117[0]);
 }
 else
 {
                WORD32 VAR62;
                WORD32 VAR63;

                VAR62 = VAR3->VAR20.VAR64 << VAR10->VAR65;
                VAR63 = VAR3->VAR20.VAR66 << VAR10->VAR65;

                VAR28 = VAR3->VAR20.VAR28;
                VAR28->VAR67 = 0;
                VAR28->VAR68 = 0;
                VAR28->VAR69 = 0;
                VAR28->VAR70 = ((VAR4 - VAR62) >> 2);
                VAR28->VAR71 = ((VAR5 - VAR63) >> 2);
                VAR28->VAR72 = 0;
                VAR28->VAR73 = (VAR6 - 2);
                VAR28->VAR74 = VAR3->VAR20.VAR75;
                VAR28->VAR76 = VAR77;
                VAR28->VAR78   = VAR3->VAR20.VAR34.VAR117[0];

 
 {
 if((VAR3->VAR20.VAR34.VAR36 << 3) == (VAR28->VAR70 << 2) &&
 (VAR3->VAR20.VAR34.VAR37 << 3) == (VAR28->VAR71 << 2))
 {
                        VAR28->VAR80 = 1;
 }
 else
 {
                        VAR28->VAR80 = 0;
 }
 }
                VAR3->VAR20.VAR28++;
                VAR3->VAR20.VAR34.VAR35++;
                VAR3->VAR20.VAR81++;

 }
 }

 }




 return VAR7;
}