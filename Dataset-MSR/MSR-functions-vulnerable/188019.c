VAR1 FUN1(VAR2 *VAR3,
 VAR4 *VAR5)

 {
     IHEVCD_ERROR_T VAR6 = (VAR1)VAR7;
     WORD32 VAR8;

    WORD32 VAR9;


     WORD32 VAR10;
 
     VAR11 *VAR12;
 VAR13 *VAR14;
 VAR15 *VAR16;
    WORD32 VAR17;
 VAR18 *VAR19 = &VAR3->VAR20.VAR21;
    WORD32 VAR22;
    WORD32 VAR23;
    WORD32 VAR24;
    WORD32 VAR25 = 0;
    WORD8 VAR26 = VAR5->VAR26;
    WORD32 VAR27 = 0;
    WORD32 VAR28;

 if(VAR3->VAR29 == 1)
 return VAR6;

    VAR22 = (VAR30 == VAR26) ||
 (VAR31 == VAR26);


    FUN2("", VAR24, VAR19, 1);
 if((VAR32 <= VAR26) &&
 (VAR33          >= VAR26))
 {
        FUN2("", VAR25, VAR19, 1);
 }
    FUN3("", VAR23, VAR19);
    VAR23 = FUN4(VAR23, 0, VAR34 - 2);

 
    VAR12 = VAR3->VAR20.VAR35 + VAR23;
 if(0 == VAR12->VAR36)
 {
 VAR11 *VAR37 = VAR3->VAR35;
 while(0 == VAR37->VAR36)
            VAR37++;

 if((VAR37 - VAR3->VAR35 >= VAR34 - 1))
 return VAR38;

        FUN5(VAR3, VAR23, VAR37->VAR39);
 }

 
    VAR10 = VAR12->VAR40;

 
    VAR14 = VAR3->VAR20.VAR41 + VAR10;

 
 if((0 != VAR3->VAR42 || VAR3->VAR43) &&
                    VAR24)
 {
 if(VAR3->VAR43)
 {
 VAR15 *VAR44;
            VAR3->VAR29 = 1;
            VAR3->VAR20.VAR45--;
 if(VAR3->VAR20.VAR45 < 0)
                VAR3->VAR20.VAR45 = 0;

            VAR44 = VAR3->VAR20.VAR46 + ((VAR3->VAR20.VAR45 + 1) & (VAR47 - 1));
            VAR44->VAR48 = 0;
            VAR44->VAR49 = VAR3->VAR20.VAR14->VAR50;
 return VAR6;
 }
 else
 {
            VAR3->VAR29 = 0;
 }
 }

 if(VAR24)
 {
        VAR3->VAR20.VAR45 = 0;
 }
 else
 {
 
 if(0 == VAR3->VAR43)
            VAR3->VAR20.VAR45 = 1;
 }

    VAR16 = VAR3->VAR20.VAR46 + (VAR3->VAR20.VAR45 & (VAR47 - 1));


 if((VAR12->VAR51) &&
 (!VAR24))
 {
        FUN2("", VAR8, VAR19, 1);

 
 if(VAR8 && (VAR3->VAR20.VAR45 > 0))
 {
            FUN6(VAR3,
 (VAR3->VAR20.VAR45 & (VAR47 - 1)),
 ((VAR3->VAR20.VAR45 - 1) & (VAR47 - 1)));
 }
        VAR16->VAR52 = VAR8;
 }
 else
 {
        VAR16->VAR52 = 0;
 }
    VAR16->VAR26 = VAR26;
    VAR16->VAR39 = VAR23;
    VAR16->VAR53 = VAR24;

    VAR16->VAR54 = 1;
 if((VAR32 <= VAR26) &&
 (VAR33          >= VAR26))
 {
        VAR16->VAR54 = VAR25;
 }
    VAR16->VAR39 = VAR23;

 if(!VAR16->VAR53)
 {
        WORD32 VAR55;

 
        VAR55 = 32 - FUN7(VAR14->VAR56 - 1);
        FUN2("", VAR8, VAR19, VAR55);

        VAR28 = VAR8;
 
 if(VAR8 >= VAR14->VAR56)
 return VAR57;
 }
 else
 {
        VAR28 = 0;
 }

 if(!VAR16->VAR52)
 {
        VAR16->VAR58 = 1;
        VAR16->VAR59 = 0;
        VAR16->VAR60 = 0;
        VAR16->VAR61 = 0;

 for(VAR9 = 0; VAR9 < VAR12->VAR62; VAR9++)
 {
            FUN2("", VAR8, VAR19, 1);
 
 }
        FUN3("", VAR8, VAR19);
        VAR16->VAR63 = VAR8;

 
 if((VAR16->VAR26 >= VAR32) &&
 (VAR16->VAR26 <= VAR33))
            VAR16->VAR63 = VAR64;

 if((VAR16->VAR63 < 0) ||
 (VAR16->VAR63 > 2))
 return VAR57;

 if(VAR12->VAR65)
 {
            FUN2("", VAR8, VAR19, 1);
            VAR16->VAR58 = VAR8;
 }
        VAR16->VAR66 = 0;
 if(1 == VAR14->VAR67)
 {
            FUN2("", VAR8, VAR19, 2);
            VAR16->VAR66 = VAR8;
 }
        VAR16->VAR68 = 0;

 if(!VAR22)
 {

            WORD32 VAR69;
            WORD32 VAR70;
            WORD32 VAR71;
            VAR72 *VAR73;

            FUN2("", VAR8, VAR19, VAR14->VAR74);
 
            VAR16->VAR59 = VAR8;

            FUN2("", VAR8, VAR19, 1);
            VAR16->VAR75 = VAR8;

 if(1 == VAR16->VAR75)
 {
                WORD32 VAR76;

                VAR16->VAR77 = 0;
 if(VAR14->VAR78 > 1)
 {
                    VAR76 = 32 - FUN7(VAR14->VAR78 - 1);
                    FUN2("", VAR8, VAR19, VAR76);
                    VAR16->VAR77 = VAR8;
 }

                VAR69 = VAR16->VAR77;
                VAR70 = VAR14->VAR79[VAR69].VAR80;
                VAR71 = VAR14->VAR79[VAR69].VAR81;
                VAR73 = VAR14->VAR79[VAR69].VAR82;
 }
 else
 {
                FUN8(VAR19,
 &VAR14->VAR79[0],
                                              VAR14->VAR78,
                                              VAR14->VAR78,
 &VAR16->VAR83);

                VAR69 = VAR14->VAR78;
                VAR70 = VAR16->VAR83.VAR80;
                VAR71 = VAR16->VAR83.VAR81;
                VAR73 = VAR16->VAR83.VAR82;
 }

 if(VAR14->VAR84)
 {
 if(VAR14->VAR85 > 0)
 {
                    FUN3("", VAR8, VAR19);
                    VAR16->VAR60 = VAR8;

                    VAR16->VAR60 = FUN4(VAR16->VAR60,
 0, VAR86 - VAR70 - VAR71);
 }
                FUN3("", VAR8, VAR19);
                VAR16->VAR61 = VAR8;
                VAR16->VAR61 = FUN4(VAR16->VAR61,
 0, VAR86 - VAR70 - VAR71 -
                                                            VAR16->VAR60);

 for(VAR9 = 0; VAR9 < (VAR16->VAR60 +
                                VAR16->VAR61); VAR9++)
 {
 if(VAR9 < VAR16->VAR60)
 {
 
                        WORD32 VAR55 = 32 - FUN7(VAR14->VAR85);
                        FUN2("", VAR8, VAR19, VAR55);
                        VAR16->VAR87[VAR9] = VAR14->VAR88[VAR8];
                        VAR16->VAR89[VAR9] = VAR14->VAR90[VAR8];

 }
 else
 {
                        FUN2("", VAR8, VAR19, VAR14->VAR74);
                        VAR16->VAR87[VAR9] = VAR8;

                        FUN2("", VAR8, VAR19, 1);
                        VAR16->VAR89[VAR9] = VAR8;

 }
                    FUN2("", VAR8, VAR19, 1);
                    VAR16->VAR91[VAR9] = VAR8;


                    VAR16->VAR92[VAR9] = 0;
 if(VAR16->VAR91[VAR9])
 {

                        FUN3("", VAR8, VAR19);
                        VAR16->VAR92[VAR9] = VAR8;
 }

 if((VAR9 != 0) && (VAR9 != VAR16->VAR60))
 {
                        VAR16->VAR92[VAR9] += VAR16->VAR92[VAR9 - 1];
 }

 }
 }

 for(VAR9 = 0; VAR9 < VAR70 + VAR71; VAR9++)
 {
 if(VAR73[VAR9])
 {
                    VAR27++;
 }
 }
 for(VAR9 = 0; VAR9 < VAR16->VAR60 + VAR16->VAR61; VAR9++)
 {
 if(VAR16->VAR89[VAR9])
 {
                    VAR27++;
 }
 }


 if(VAR14->VAR93)
 {
                FUN2("", VAR8, VAR19, 1);
                VAR16->VAR68 = VAR8;
 }

 }
        VAR16->VAR94 = 0;
        VAR16->VAR95 = 0;
 if(VAR14->VAR96)
 {
            FUN2("", VAR8, VAR19, 1);
            VAR16->VAR94 = VAR8;

            FUN2("", VAR8, VAR19, 1);
            VAR16->VAR95 = VAR8;

 }

        VAR16->VAR97 = 1;
        VAR16->VAR98 = 0;

        VAR16->VAR99 = 0;
        VAR16->VAR100 = 0;
        VAR16->VAR101 = 0;
        VAR16->VAR102 = 0;
 if((VAR103 == VAR16->VAR63) ||
 (VAR104 == VAR16->VAR63))
 {
            FUN2("", VAR8, VAR19, 1);
            VAR16->VAR105 = VAR8;

 if(VAR16->VAR105)
 {
                FUN3("", VAR8, VAR19);
                VAR16->VAR99 = VAR8 + 1;

 if(VAR104 == VAR16->VAR63)
 {
                    FUN3("", VAR8, VAR19);
                    VAR16->VAR100 = VAR8 + 1;
 }

 }
 else
 {
                VAR16->VAR99 = VAR12->VAR106;

 if(VAR104 == VAR16->VAR63)
 {
                    VAR16->VAR100 = VAR12->VAR107;
 }
 }

            VAR16->VAR99 = FUN4(VAR16->VAR99, 0, VAR86 - 1);
            VAR16->VAR100 = FUN4(VAR16->VAR100, 0, VAR86 - 1);

 if(0 == VAR27)
 return VAR57;
 if((VAR12->VAR108) && (VAR27 > 1))
 {
                FUN9(VAR19,
                                                 VAR16, VAR27);
 }
 else
 {
                VAR16->VAR109.VAR110 = 0;
                VAR16->VAR109.VAR111 = 0;
 }

 if(VAR104 == VAR16->VAR63)
 {
                FUN2("", VAR8, VAR19, 1);
                VAR16->VAR112 = VAR8;
 }

            VAR16->VAR98 = 0;
 if(VAR12->VAR113)
 {
                FUN2("", VAR8, VAR19, 1);
                VAR16->VAR98 = VAR8;

 }
            VAR16->VAR114 = 1;
            VAR16->VAR115 = 0;
 if(VAR16->VAR68)
 {
 if(VAR104 == VAR16->VAR63)
 {
                    FUN2("", VAR8, VAR19, 1);
                    VAR16->VAR114 = VAR8;
 }

 if((VAR16->VAR114  && (VAR16->VAR99 > 1)) ||
 (!VAR16->VAR114  && (VAR16->VAR100 > 1)))
 {
                    FUN3("", VAR8, VAR19);
                    VAR16->VAR115 = VAR8;
 }

 }
            VAR16->VAR115 = FUN4(VAR16->VAR115, 0, VAR86 - 1);

 if((VAR12->VAR116  && (VAR103 == VAR16->VAR63)) ||
 (VAR12->VAR117  && (VAR104 == VAR16->VAR63)))
 {
                FUN10(VAR19, VAR14, VAR12, VAR16);
 }
            FUN3("", VAR8, VAR19);
            VAR16->VAR97 = 5 - VAR8;

 }
        VAR16->VAR97 = FUN4(VAR16->VAR97, 1, 5);
        FUN11("", VAR8, VAR19);
        VAR16->VAR118 = VAR8;

 if(VAR12->VAR119)
 {
            FUN11("", VAR8, VAR19);
            VAR16->VAR101 = VAR8;

            FUN11("", VAR8, VAR19);
            VAR16->VAR102 = VAR8;

 }
        VAR16->VAR120 = 0;
        VAR16->VAR121  = VAR12->VAR122;
        VAR16->VAR123 = VAR12->VAR123;
        VAR16->VAR124 = VAR12->VAR124;

        VAR17 = VAR12->VAR122;

 if(VAR12->VAR125)
 {

 if(VAR12->VAR126)
 {
                FUN2("", VAR8, VAR19, 1);
                VAR16->VAR120 = VAR8;
 }

 if(VAR16->VAR120)
 {
                FUN2("", VAR8, VAR19, 1);
                VAR16->VAR121 = VAR8;
                VAR17 = VAR16->VAR121;

 if(!VAR16->VAR121)
 {
                    FUN11("", VAR8, VAR19);
                    VAR16->VAR123 = VAR8;

                    FUN11("", VAR8, VAR19);
                    VAR16->VAR124 = VAR8;

 }
 }
 }

        VAR16->VAR127 = VAR12->VAR128;
 if(VAR12->VAR128  &&
 (VAR16->VAR94  ||  VAR16->VAR95  || !VAR17))
 {
            FUN2("", VAR8, VAR19, 1);
            VAR16->VAR127 = VAR8;
 }

 }

 
 if((!VAR24) &&
 (VAR3->VAR43))
 {
 VAR15 *VAR46 = VAR3->VAR46;


 
 if((VAR46->VAR39 != VAR16->VAR39) ||
 (VAR46->VAR59 != VAR16->VAR59))
 {
 return VAR57;
 }

 }


 if(0 == VAR3->VAR43)
 {
        VAR16->VAR129 = FUN12(VAR3, VAR5, VAR14->VAR74, VAR16->VAR59);
 }
 else
 {
        VAR16->VAR129 = VAR3->VAR20.VAR129;
 }


 if(!VAR24)
 {
 
 if(VAR3->VAR20.VAR129 == VAR16->VAR129)
 {

 
 if(VAR28 > VAR3->VAR20.VAR130)
 {
 if(VAR3->VAR43)
 {
                    VAR3->VAR29 = 1;
                    VAR3->VAR20.VAR45--;
 if(VAR3->VAR20.VAR45 < 0)
                        VAR3->VAR20.VAR45 = 0;

 return VAR6;
 }
 else
 {
 return VAR57;
 }
 }
 
 else if(VAR28 < VAR3->VAR20.VAR130)
 {
 return VAR57;
 }
 else
 {
                VAR3->VAR29 = 0;
 }
 }

 
 else
 {
 
 if(VAR3->VAR43)
 {
 VAR15 *VAR44;
                VAR3->VAR29 = 1;
                VAR3->VAR20.VAR45--;
 if(VAR3->VAR20.VAR45 < 0)
                    VAR3->VAR20.VAR45 = 0;

                VAR44 = VAR3->VAR20.VAR46 + ((VAR3->VAR20.VAR45 + 1) & (VAR47 - 1));
                VAR44->VAR48 = 0;
                VAR44->VAR49 = VAR3->VAR20.VAR14->VAR50;
 return VAR6;
 }

 
 else
 {
 if(VAR16->VAR52)
 return VAR57;

                VAR3->VAR20.VAR129 = VAR16->VAR129;
 }
 }
 }

 
 else
 {
 
 if(VAR3->VAR20.VAR129 == VAR16->VAR129)
 return VAR57;

        VAR3->VAR20.VAR129 = VAR16->VAR129;
 }

 
 
    VAR16->VAR131 = 0;
 if((VAR12->VAR132) ||
 (VAR12->VAR133))
 {
        FUN3("", VAR8, VAR19);
        VAR16->VAR131 = VAR8;

 {
            WORD32 VAR134;
 if((VAR12->VAR132) &&
 (VAR12->VAR133))
 {
                VAR134 = VAR12->VAR135 * (VAR14->VAR50 - 1);
 }
 else if(VAR12->VAR132)
 {
                VAR134 = VAR12->VAR135 * VAR12->VAR136;
 }
 else
 {
                VAR134 = (VAR14->VAR50 - 1);
 }

            VAR16->VAR131 = FUN4(VAR16->VAR131,
 0, VAR134);
 }

 if(VAR16->VAR131 > 0)
 {
            FUN3("", VAR8, VAR19);
            VAR16->VAR137 = VAR8 + 1;

 for(VAR9 = 0; VAR9 < VAR16->VAR131; VAR9++)
 {
                FUN2("", VAR8, VAR19, VAR16->VAR137);

 
 
 }

 }
 }

 if(VAR12->VAR138)
 {
        FUN3("", VAR8, VAR19);
        VAR16->VAR139 = VAR8;


 for(VAR9 = 0; VAR9 < VAR16->VAR139; VAR9++)
 {
            FUN2("", VAR8, VAR19, 8);
 }

 }

    FUN13(VAR19);

 {
 VAR140 *VAR141 = (VAR140 *)VAR3->VAR142;
        WORD32 VAR143;

 if((VAR30 == VAR16->VAR26) ||
 (VAR31 == VAR16->VAR26) ||
 (VAR144 == VAR16->VAR26) ||
 (VAR145 == VAR16->VAR26) ||
 (VAR32 == VAR16->VAR26) ||
 (0 == VAR3->VAR42))
 {
 for(VAR9 = 0; VAR9 < VAR146; VAR9++)
 {
 if(VAR141->VAR147[VAR9].VAR148)
 {
 VAR149 *VAR148 = VAR141->VAR147[VAR9].VAR148;
 VAR150 *VAR151;

 

                     FUN14((VAR140 *)VAR3->VAR142, (VAR152 *)VAR3->VAR153, VAR148->VAR154);
                     
                     VAR151 = (VAR150 *)VAR3->VAR151;

                    for(VAR9 = 0; VAR9 < VAR155; VAR9++)


                     {
                         if(VAR151 && VAR151->VAR154 == VAR148->VAR154)
                         {

                            FUN15((VAR152 *)VAR3->VAR156, VAR9, VAR157);


                             break;
                         }
                         VAR151++;
 }

 }

 }

 
 for(VAR143 = 0; VAR143 < VAR86; VAR143++)
 {
                VAR16->VAR158[VAR143].VAR159 = NULL;
                VAR16->VAR158[VAR143].VAR160 = NULL;

                VAR16->VAR161[VAR143].VAR159 = NULL;
                VAR16->VAR161[VAR143].VAR160 = NULL;
 }

 }
 else
 {
            VAR6 = FUN16(VAR3, VAR12, VAR14, VAR16);
 if ((VAR162)VAR7 != VAR6)
 {
 return VAR6;
 }

 }

 }

 
 if(VAR3->VAR43)
 {
 VAR149 *VAR163;
 VAR150 *VAR164;
        WORD32 VAR143;
 VAR140 *VAR141 = (VAR140 *)VAR3->VAR142;
 VAR152 *VAR165 = (VAR152 *)VAR3->VAR156;

        VAR163 = FUN17(VAR141, VAR16->VAR129);
 if(NULL == VAR163)
 {
            VAR163 = VAR3->VAR166[0].VAR167;
            VAR164 = VAR3->VAR20.VAR168;
 }
 else
 {
            VAR164 = FUN18(VAR165, VAR163->VAR154);
 }

 for(VAR143 = 0; VAR143 < VAR16->VAR99; VAR143++)
 {
 if(NULL == VAR16->VAR158[VAR143].VAR159)
 {
                VAR16->VAR158[VAR143].VAR159 = (void *)VAR163;
                VAR16->VAR158[VAR143].VAR160 = (void *)VAR164;
 }
 }

 for(VAR143 = VAR16->VAR99; VAR143 < VAR86; VAR143++)
 {
            VAR16->VAR158[VAR143].VAR159 = (void *)VAR163;
            VAR16->VAR158[VAR143].VAR160 = (void *)VAR164;
 }

 for(VAR143 = 0; VAR143 < VAR16->VAR100; VAR143++)
 {
 if(NULL == VAR16->VAR161[VAR143].VAR159)
 {
                VAR16->VAR161[VAR143].VAR159 = (void *)VAR163;
                VAR16->VAR161[VAR143].VAR160 = (void *)VAR164;
 }
 }

 for(VAR143 = VAR16->VAR100; VAR143 < VAR86; VAR143++)
 {
            VAR16->VAR161[VAR143].VAR159 = (void *)VAR163;
            VAR16->VAR161[VAR143].VAR160 = (void *)VAR164;
 }
 }

 
 if(!VAR16->VAR53)
 {
        VAR16->VAR48 = VAR28 % VAR14->VAR169;
        VAR16->VAR49 = VAR28 / VAR14->VAR169;

 if(!VAR16->VAR52)
 {
            VAR16->VAR170 = VAR16->VAR48;
            VAR16->VAR171 = VAR16->VAR49;
 }
 }
 else
 {
        VAR16->VAR48 = 0;
        VAR16->VAR49 = 0;

        VAR16->VAR170 = 0;
        VAR16->VAR171 = 0;
 }

 
 if((!VAR24) &&
 (0 == VAR3->VAR43))
 {
 VAR15 *VAR172 = VAR3->VAR20.VAR46;
        FUN6(VAR3, 0, (VAR3->VAR20.VAR45 & (VAR47 - 1)));

        VAR3->VAR29 = 1;

        VAR172->VAR48 = 0;
        VAR172->VAR49 = 0;

        VAR3->VAR20.VAR173 = 0;
        VAR3->VAR20.VAR174 = 0;

        VAR3->VAR20.VAR45 = 0;

 if((VAR16->VAR48 == 0) &&
 (VAR16->VAR49 == 0))
 {
            VAR16->VAR48++;
 }
 }

 {
 

 if((VAR26 < VAR32) &&
 (VAR26 % 2 == 0))
 {
 if(VAR175 == VAR3->VAR176)
 return VAR57;
 }

 
 if((VAR177 == VAR3->VAR176) &&
 (VAR64 != VAR16->VAR63))
 {
 return VAR57;
 }
 }

 return VAR6;
}