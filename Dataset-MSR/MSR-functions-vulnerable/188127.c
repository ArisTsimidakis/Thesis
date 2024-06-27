VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)

 {
     UWORD8 VAR6;
     VAR7 *VAR8 = NULL;

    UWORD8 VAR9, VAR10, VAR11;


     UWORD16 VAR12;
     VAR13 *VAR14 = VAR5->VAR15;
     VAR13 *VAR16 = &VAR5->VAR17;
    UWORD8 VAR18, VAR19, VAR20;
    WORD32 VAR21, VAR22;
    UWORD32 VAR23;
    WORD32 VAR24 = 0;
    UWORD32 VAR25 = 0;
    UWORD32 VAR26 = 0;
    UWORD32 VAR27 = 0;
    UWORD32 VAR28 = 0;
    UWORD32 VAR29 = 0;
    UWORD32 VAR30 = 0;
    UWORD32 VAR31 = 0;
    UWORD32 VAR32 = 0;
    WORD32 VAR33;
    UWORD32 VAR34;
 
    WORD32 VAR35;
 
    UWORD8 VAR36, VAR37,
                    VAR38,
                    VAR39,
                    VAR40;
 
 
 
 
    VAR41;
    VAR9 = FUN2(VAR5, 8);
    FUN3("",VAR9);

 
    VAR19 = FUN4(VAR5);
    VAR20 = FUN4(VAR5);
    FUN4(VAR5);

 
 
 
 
    FUN2(VAR5, 5);
 

 
 
 if((VAR9 != VAR42) &&

 (VAR9 != VAR43) &&

 (VAR9 != VAR44)

 )
 {

 
 if((VAR9 != VAR45) ||
 ((VAR20 != 1) && (VAR19 != 1)))
 {
 return (VAR46);
 }
 }

    VAR10 = FUN2(VAR5, 8);



    FUN3("",VAR10);

    VAR23 = FUN5(VAR16, VAR14);
 if(VAR23 & VAR47)
 return VAR48;
    VAR11 = VAR23;
    FUN3("",
                    VAR11);

 
 
 

    VAR8 = VAR3->VAR49;
 if(VAR3->VAR50 & 1)
 {
 *VAR8 = *VAR3->VAR51;
 }


 if((VAR3->VAR50 & 1) && (VAR8->VAR9 != VAR9))
 {
        VAR3->VAR52 = 1;
 return VAR53;
 }

 if((VAR3->VAR50 & 1) && (VAR8->VAR10 != VAR10))
 {
        VAR3->VAR52 = 1;
 return VAR53;
 }

    VAR8->VAR9 = VAR9;
    VAR8->VAR10 = VAR10;
    VAR8->VAR11 = VAR11;

 
 
 
    VAR8->VAR54 = 1;
    VAR8->VAR55 = 0;
    VAR8->VAR56 = 0;
    VAR8->VAR57 = 0;
    VAR8->VAR58 = 0;
 if(VAR9 == VAR44)
 {

 
        VAR8->VAR54 = FUN5(VAR16,
                                                  VAR14);

 
 if(VAR8->VAR54 != 1)
 {
 return VAR48;
 }

 
        VAR8->VAR55 = FUN5(VAR16,
                                                      VAR14);

 if(VAR8->VAR55 != 0)
 {
 return VAR48;
 }

 
        VAR8->VAR56 = FUN5(VAR16,
                                                        VAR14);

 if(VAR8->VAR56 != 0)
 {
 return VAR48;
 }

 
        VAR8->VAR57 =
 (VAR1)FUN4(VAR5);

 if(VAR8->VAR57 != 0)
 {
 return VAR48;
 }

 
        VAR8->VAR58 =
 (VAR1)FUN4(VAR5);

 if(VAR8->VAR58)
 {
 for(VAR35 = 0; VAR35 < 8; VAR35++)
 {
                VAR8->VAR59[VAR35] =
                                FUN4(VAR5);

 
 
                VAR8->VAR60[VAR35] = 0;

 if(VAR8->VAR59[VAR35])
 {
 if(VAR35 < 6)
 {
                        FUN6(
                                        VAR8->VAR61[VAR35],
 16,
 &VAR8->VAR60[VAR35],
                                        VAR5);
 }
 else
 {
                        FUN6(
                                        VAR8->VAR62[VAR35 - 6],
 64,
 &VAR8->VAR60[VAR35],
                                        VAR5);
 }
 }
 }
 }
 }
 
 
 
    VAR23 = 4 + FUN5(VAR16, VAR14);
 if(VAR23 > VAR63)
 {
 return VAR48;
 }
    VAR8->VAR64 = VAR23;
    FUN3("",
 (VAR8->VAR64 - 4));

    VAR12 = (1 << (VAR8->VAR64));
    VAR8->VAR65 = VAR12 - 1;
 
 
 
    VAR23 = FUN5(VAR16, VAR14);

 if(VAR23 > VAR66)
 {
 return VAR67;
 }
    VAR8->VAR68 = VAR23;
    FUN3("",VAR8->VAR68);

    VAR8->VAR69 = 1;
 if(VAR8->VAR68 == 0)
 {
        VAR23 = 4 + FUN5(VAR16, VAR14);
 if(VAR23 > VAR70)
 {
 return VAR48;
 }
        VAR8->VAR71 = VAR23;
        VAR8->VAR72 = (1 << VAR23);
        FUN3("",(VAR23 - 4));
 }
 else if(VAR8->VAR68 == 1)
 {
        VAR8->VAR73 = FUN4(
                        VAR5);
        FUN3("",
                        VAR8->VAR73);

        VAR8->VAR74 = FUN7(VAR16,
                                                     VAR14);
        FUN3("",
                        VAR8->VAR74);

        VAR8->VAR75 = FUN7(
                        VAR16, VAR14);
        FUN3("",
                        VAR8->VAR75);

        VAR23 = FUN5(VAR16, VAR14);
 if(VAR23 > 255)
 return VAR48;
        VAR8->VAR69 = VAR23;
        FUN3("",
                        VAR8->VAR69);

 for(VAR6 = 0; VAR6 < VAR8->VAR69; VAR6++)
 {
            VAR8->VAR76[VAR6] = FUN7(
                            VAR16, VAR14);
            FUN3("",
                            VAR8->VAR76[VAR6]);
 }
 }

    VAR23 = FUN5(VAR16, VAR14);

 if((VAR23 > VAR77))
 {
 return VAR78;
 }

 
 if((VAR3->VAR50 & 1) && (VAR8->VAR79 != VAR23))
 {
        VAR3->VAR52 = 1;
 return VAR53;
 }

    VAR8->VAR79 = VAR23;
    FUN3("",VAR8->VAR79);

    VAR8->VAR80 = FUN4(
                    VAR5);
    FUN3("",
                    VAR8->VAR80);

 
 
 
    VAR8->VAR81 = 1
 + FUN5(VAR16, VAR14);
    FUN3("",
                    VAR8->VAR81 - 1);
    VAR25 = (VAR8->VAR81 << 4);

    VAR24 = FUN5(VAR16,
                                                VAR14);
    VAR8->VAR82 = 1 + VAR24;

    VAR26 = (VAR8->VAR82 << 4);

 
 
 
    VAR8->VAR83 = (VAR8->VAR81
 * VAR8->VAR82) - 1;

    VAR8->VAR84 = VAR8->VAR83 + 1;

    VAR8->VAR10 = FUN8(
                    VAR10, VAR8->VAR84);

    VAR18 = FUN4(VAR5);
 if((VAR3->VAR50 & 1) && (VAR8->VAR85 != VAR18))
 {
        VAR3->VAR52 = 1;
 return VAR53;
 }

    VAR8->VAR85 = VAR18;


     FUN3("", VAR18);
 
     if(!VAR18)




















     {
         VAR26 <<= 1;

        VAR8->VAR86 = FUN4(VAR5);


         FUN3("",
                         VAR8->VAR86);
 
 }
 else
        VAR8->VAR86 = 0;

    VAR8->VAR87 = FUN4(VAR5);

    FUN3("",
                    VAR8->VAR87);

 
    VAR36 = FUN4(VAR5);
    FUN3("",VAR36);

 if(VAR36)
 {
        VAR37 = FUN5(VAR16,
                                                      VAR14);
        FUN3("",
                        VAR37);
        VAR38 = FUN5(VAR16,
                                                       VAR14);
        FUN3("",
                        VAR38);
        VAR39 = FUN5(VAR16,
                                                     VAR14);
        FUN3("",
                        VAR39);
        VAR40 = FUN5(VAR16,
                                                        VAR14);
        FUN3("",
                        VAR40);
 }
 

    VAR8->VAR88 = FUN4(VAR5);
    FUN3("",
                    VAR8->VAR88);

    VAR27 = VAR25 + (VAR89)(VAR90 << 1);
 if(1 == VAR3->VAR91)
 {
 if(VAR3->VAR92 > VAR27)
            VAR27 = VAR3->VAR92;
 }

    VAR28 = VAR26 + (VAR89)(VAR93 << 2);
    VAR29 = VAR25 + (VAR89)(VAR94 << 2);
    VAR29 = FUN9(VAR29, VAR27);

    VAR30 = (VAR26 >> 1) + (VAR89)(VAR95 << 2);
    VAR30 = FUN9(VAR30, (VAR28 >> 1));


 
 
 {
        UWORD16 VAR96 = 0;
        UWORD16 VAR97 = 0;
        UWORD16 VAR98 = 0;
        UWORD16 VAR99 = 0;
        UWORD8 VAR100;
        UWORD8 VAR101;

 if(VAR36)
 {
 
            VAR96 = VAR38 << 1;
            VAR97 = VAR37 << 1;

 
            VAR100 = (1 == VAR8->VAR85);

 
            VAR101 = (2 - VAR100);

 
            VAR99 = (VAR40
 << VAR101);
            VAR98 = (VAR39
 << VAR101);
 }

 
 
        VAR31 = (VAR27 * VAR98) + (VAR97);
        VAR32 = (VAR29 * (VAR98 >> 1))
 + (VAR97 >> 1) * VAR102;
 
 
        VAR21 = VAR26 - (VAR99 + VAR98);
        VAR22 = VAR25 - (VAR96 + VAR97);

 if((VAR21 < VAR103) || (VAR22 < VAR103))
 {
 return VAR48;
 }

 if((VAR3->VAR50 & 1) && (VAR3->VAR25 != VAR25))
 {
            VAR3->VAR52 = 1;
 return VAR53;
 }
 if((VAR3->VAR50 & 1) && (VAR3->VAR26 != VAR26))
 {
            VAR3->VAR52 = 1;
 return VAR53;
 }

 
 if((VAR25 > VAR104) || (VAR26 > VAR105)
 || (VAR25 < VAR106) || (VAR26 < VAR107)
 || (VAR25 * (VAR13)VAR26 > VAR108))
 {
 return VAR109;
 }

 
 if((VAR25 << VAR8->VAR86) > VAR104)
 {
 return VAR109;
 }

 }

 
 if((VAR3->VAR50 & 1) &&
 (1 == VAR8->VAR88) &&
 (1 == VAR8->VAR110.VAR111))
 {
        VAR34 =  VAR8->VAR110.VAR34;
 }
 else
 {
        VAR34 = -1;
 }
 if(1 == VAR8->VAR88)
 {
        VAR33 = FUN10(&VAR8->VAR110, VAR5);
 if(VAR33 != VAR112)
 return VAR33;
 }

 
 if((VAR3->VAR50 & 1) &&
 (-1 != (VAR1)VAR34) &&
 (1 == VAR8->VAR88) &&
 (1 == VAR8->VAR110.VAR111) &&
 (VAR8->VAR110.VAR34 != VAR34))
 {
        VAR3->VAR52 = 1;
 return VAR53;
 }

 
 if (VAR5->VAR17 > VAR5->VAR113)
 {
 return VAR48;
 }

 
 
 
    VAR3->VAR114 = VAR21;
    VAR3->VAR115 = VAR22;

    VAR3->VAR25 = VAR25;
    VAR3->VAR26 = VAR26;

 
    VAR3->VAR27 = VAR27;
    VAR3->VAR28 = VAR28;

    VAR3->VAR29 = VAR29;
    VAR3->VAR30 = VAR30;
    VAR3->VAR116.VAR117 = (VAR89)(VAR93 << (1 - VAR18));
    VAR3->VAR116.VAR118 = (VAR89)(VAR95 << (1 - VAR18));

    VAR3->VAR81 = VAR8->VAR81;
    VAR3->VAR82 = VAR8->VAR82;

    VAR3->VAR31 = VAR31;
    VAR3->VAR32 = VAR32;

    VAR8->VAR119 = VAR120;
    VAR3->VAR121[VAR11] = *VAR8;
    VAR3->VAR51 = &VAR3->VAR121[VAR11];

 return VAR112;
}