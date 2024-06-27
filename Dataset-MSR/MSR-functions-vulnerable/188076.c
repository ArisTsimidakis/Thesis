VAR1 FUN1(VAR2 *VAR3, void *VAR4, void *VAR5)
{
 

 VAR6 * VAR7 = (VAR6 *)(VAR3->VAR8);

    WORD32 VAR9 = 0;
    VAR10 *VAR11 = NULL;
    WORD32 VAR12;
    UWORD32 VAR13, VAR14 = 0;

    UWORD32 VAR15 = 0;
    UWORD32 VAR16 = 0;
    UWORD32 VAR17;
    UWORD32 VAR18 = 0;
    WORD32 VAR19 = 0,VAR20 = VAR21;
    WORD32 VAR22 = 0,VAR23 = 0;
    VAR10 *VAR24;
 VAR25 *VAR26;
 VAR27 *VAR28;

    FUN2((void*)"");

    VAR26 = (VAR25 *)VAR4;
    VAR28 = (VAR27 *)VAR5;

 {
        UWORD32 VAR29;
        VAR29 = VAR28->VAR29;
        memset(VAR28, 0, sizeof(VAR27));
        VAR28->VAR29 = VAR29;
 }

    VAR7->VAR30 = VAR28;
    VAR7->VAR31 = 1;
 if(VAR7->VAR32 != 1)
 {
 return VAR33;
 }

 
    FUN3();

 if(0 == VAR7->VAR34)
 {
 if(VAR26->VAR35 == NULL)
 {
            VAR28->VAR36 |= 1 << VAR37;
            VAR28->VAR36 |= VAR38;
 return VAR33;
 }
 if(VAR26->VAR39 <= 0)
 {
            VAR28->VAR36 |= 1 << VAR37;
            VAR28->VAR36 |= VAR40;
 return VAR33;

 }
 }
    VAR7->VAR41 = 0;

    VAR28->VAR42 = 0;

    VAR7->VAR43 = NULL;

 if(VAR26->VAR29
 >= FUN4(VAR25, VAR44))
        VAR7->VAR43 = &VAR26->VAR44;

    VAR7->VAR45 = 0;

    VAR7->VAR46 = 0;
    VAR7->VAR47.VAR36 = 1;
    VAR7->VAR48 = VAR49;
    VAR7->VAR50 = 0;
 if(0 == VAR7->VAR51
 && VAR7->VAR52 == 0)
 {
        UWORD32 VAR53;
 if(VAR7->VAR43->VAR54 == 0)
 {
            VAR28->VAR36 |= 1 << VAR37;
            VAR28->VAR36 |= VAR55;
 return VAR33;
 }

 for(VAR53 = 0; VAR53 < VAR7->VAR43->VAR54; VAR53++)
 {
 if(VAR7->VAR43->VAR56[VAR53] == NULL)
 {
                VAR28->VAR36 |= 1 << VAR37;
                VAR28->VAR36 |= VAR57;
 return VAR33;
 }

 if(VAR7->VAR43->VAR58[VAR53] == 0)
 {
                VAR28->VAR36 |= 1 << VAR37;
                VAR28->VAR36 |=
                                VAR59;
 return VAR33;
 }
 }
 }

 if(VAR7->VAR60 >= VAR61)
 {
        VAR28->VAR36 = VAR62;
 return VAR33;
 }

 
    VAR7->VAR63 = VAR26->VAR63;

    VAR28->VAR36 = 0;
    VAR28->VAR64 = -1;
    VAR28->VAR46 = 0;
    VAR28->VAR65 = 0;

 
     VAR7->VAR66 = -1;
     VAR7->VAR67 = -1;

    

    {

        if((VAR68 | VAR69) == VAR7->VAR70)

        {

            VAR7->VAR70 = 0;

        }

    }


     VAR7->VAR71 = 0;
 
     

 if(VAR7->VAR72 == 1 && VAR7->VAR51 == 1
 && VAR7->VAR34 == 0)
 {
        UWORD32 VAR53;

        WORD32 VAR73 = 0, VAR74;

 
 
 for(VAR53 = 0; VAR53 < VAR7->VAR75; VAR53++)
 {
 if(0 == VAR7->VAR76[VAR53]
 || 1 == VAR7->VAR77[VAR53])
 {
                VAR73 = 1;
 break;
 }

 }

 if(0 == VAR73)
 {
 

            VAR28->VAR36 = VAR78;
            VAR28->VAR36 |= (1 << VAR37);
 return (VAR33);
 }

 while(1)
 {
 VAR79 *VAR80;
            VAR80 = (VAR79 *)FUN5(
 (VAR81 *)VAR7->VAR82, &VAR74);

 if(VAR80 == NULL)
 {
                UWORD32 VAR53, VAR83 = 0;

 
 for(VAR53 = 0; VAR53 < (VAR84); VAR53++)
 {
 if(0 != VAR7->VAR76[VAR53])
 {
                        VAR83 = 1;
 break;
 }
 }
 

 if(1 == VAR83)
 {
 
                    VAR28->VAR36 = VAR78;
                    VAR28->VAR36 |= (1
 << VAR37);
 return (VAR33);
 }
 }
 else
 {
 
 if(1 == VAR7->VAR76[VAR74])
 {
                    FUN6(
 (VAR81 *)VAR7->VAR82,
                                    VAR74,
                                    VAR85);
 }
 else
 {
 
                    FUN7((VAR81 *)VAR7->VAR82,
                                          VAR74,
                                          VAR85);
 break;
 }
 }
 }

 }

 if(VAR7->VAR34 && VAR7->VAR72)
 {

        FUN8(VAR7, VAR7->VAR43,
 &(VAR7->VAR47));
 if(0 == VAR7->VAR47.VAR36)
 {
            VAR7->VAR45 = 0;
            VAR7->VAR48 = VAR7->VAR86.VAR87;
            FUN9(VAR7, &(VAR7->VAR47),
                                  VAR7->VAR45,
                                  VAR7->VAR48);
            VAR7->VAR45 += VAR7->VAR48;
            VAR7->VAR46 = 1;

 }
        FUN10(VAR7, &(VAR7->VAR47));

        VAR28->VAR88 = (VAR89)VAR7->VAR90;
        VAR28->VAR91 = (VAR89)VAR7->VAR92;

        VAR28->VAR93 = 0;

        VAR28->VAR46 = VAR7->VAR46;
        VAR28->VAR94 =
                        VAR7->VAR47.VAR94;
        VAR28->VAR95 =
                        VAR7->VAR47.VAR95;
        VAR28->VAR96 = VAR7->VAR47.VAR96;
        VAR28->VAR97 = VAR7->VAR47.VAR97;
        VAR28->VAR63 = VAR7->VAR47.VAR63;
        VAR28->VAR98 = VAR7->VAR47.VAR98;

 
        VAR28->VAR99 = -1;
        VAR28->VAR64 = VAR100;
        VAR28->VAR65 = 0;

 if(0 == VAR7->VAR47.VAR36)
 {
 return (VAR21);
 }
 else
 return (VAR33);

 }
 if(VAR7->VAR101 == 1)
 {
 
        FUN11(VAR7);
 }

    VAR7->VAR102 = 0;

    VAR7->VAR103 = 0;
    VAR7->VAR104 = 0;
    VAR7->VAR105 = 0;
    VAR7->VAR106 = 0;
    VAR7->VAR107 = 0;
    VAR7->VAR108 = 2;
    VAR7->VAR109 = 1;
    VAR7->VAR110 = 0;
    VAR7->VAR111 = 0;

    VAR7->VAR112 = 0;
    VAR7->VAR113 = 0;
    VAR7->VAR114 = 0;
    VAR7->VAR115  = 0;

    FUN12("");

    VAR7->VAR116 = 0;

 do
 {

        VAR11 = (VAR10*)VAR26->VAR35
 + VAR28->VAR42;

        VAR13 = VAR26->VAR39
 - VAR28->VAR42;
        VAR24 = VAR7->VAR117[VAR118].VAR119;

        VAR17 = 0;

        VAR12 = FUN13(VAR11, 0, VAR13,
 &VAR14,
 &VAR17);

 if(VAR12 == -1)
            VAR12 = 0;
 
 
        VAR12 = FUN14(VAR12, (VAR1)(VAR7->VAR117[VAR118].VAR120 - 8));

        VAR15 = VAR12 + VAR14;
        VAR28->VAR42 += VAR15;

 if(VAR12 >= VAR121)
 {

            FUN15(VAR7, VAR28);
            FUN16(
 "",
                            VAR121);
            VAR7->VAR122 = 1 << VAR123;

            VAR28->VAR64 = -1;
 
            FUN17(VAR7);
 

 if(VAR7->VAR116 == 0)
 {
 if(VAR7->VAR124 == 3)
 {
                    VAR7->VAR104 =
                                    VAR7->VAR125->VAR126 + 1;
 }

 
 if(VAR7->VAR127 == 3)
 {
                    FUN18(VAR7);
 }
 return VAR33;
 }
 else
 {
                VAR7->VAR41 = 1;
 continue;
 }
 }

 {
            UWORD8 VAR128, VAR129;

 if(VAR7->VAR130 == VAR131)
 {
                VAR128 = *(VAR11 + VAR14);
                VAR129 = (VAR10)(FUN19(VAR128));
 if(VAR129 == 0)
 {
 
                    VAR16 = 1;
 continue;
 }
 else
 {
 if(1 == VAR16)
 {
 
                        VAR28->VAR42 -=
                                        VAR15;
                        VAR28->VAR64 = VAR132;
                        VAR28->VAR36 =
                                        VAR133;
                        VAR28->VAR36 |= (1
 << VAR37);
                        VAR28->VAR65 = 0;
                        VAR28->VAR29 =
 sizeof(VAR27);
 
                        FUN17(VAR7);
 
 if(VAR7->VAR127 == 3)
 {
                            FUN18(VAR7);
 }

 return (VAR33);
 }
 }

 }

 }


 if(VAR12)
 {
            memcpy(VAR24, VAR11 + VAR14,
                   VAR12);
            VAR18 = 1;

 }
 else
 {
 

 if(VAR18 == 0)
 {
 

                VAR7->VAR122 = VAR134;
                VAR28->VAR36 |= 1 << VAR135;

 if(VAR7->VAR116 == 0)
 {

                    FUN15(VAR7,
                                                           VAR28);

                    VAR28->VAR36 = VAR7->VAR122;
                    VAR28->VAR65 = 0;

 return (VAR33);
 }
 else
 {
                    VAR7->VAR41 = 1;
 continue;
 }
 }
 else
 {
 
                VAR23 = 0;
                VAR22 = 0;
 continue;
 }

 }

        VAR7->VAR136 = 0;
        VAR19 = FUN20(VAR3, VAR28,
                              VAR24, VAR12);
 if(VAR19 != VAR137)
 {
            UWORD32 VAR138 =  FUN21(VAR19);
            VAR28->VAR36 = VAR138 | VAR19;
            VAR20 = VAR33;

 if((VAR19 == VAR139)
 || (VAR19 == VAR140)
 || (VAR19 == VAR141)
 || (VAR19 == VAR142)
 || (VAR19 == VAR143))
 {
                VAR7->VAR71 = 0;
 break;
 }

 if((VAR19 == VAR144) || (VAR19 == VAR145))
 {
                VAR28->VAR42 -= VAR15;
                VAR20 = VAR33;
 break;
 }

 if(VAR19 == VAR146)
 {
                VAR20 = VAR33;
 break;
 }

 }

 if(VAR7->VAR136)
 {
 
            VAR28->VAR42 -= VAR15;
            VAR28->VAR36 = VAR133;
            VAR28->VAR36 |= (1 << VAR37);
            VAR28->VAR65 = 0;
            VAR28->VAR29 = sizeof(VAR27);
 
            FUN17(VAR7);
 
 if(VAR7->VAR127 == 3)
 {
                FUN18(VAR7);
 }
 return (VAR33);

 }



        VAR22 = ((VAR7->VAR52 == 1)
 && (VAR7->VAR124 != 3)
 && (VAR28->VAR42
 < VAR26->VAR39));
        VAR23 = (((VAR7->VAR52 == 0)
 && ((VAR7->VAR41 == 0)
 || (VAR17 == 1)))
 && (VAR28->VAR42
 < VAR26->VAR39));
 }
 while(( VAR22 == 1)||(VAR23 == 1));

 if((VAR7->VAR71 == 1)
 && VAR7->VAR104 < VAR7->VAR147 * VAR7->VAR148)
 {
 
        WORD32 VAR149;
        WORD32 VAR150;
 pocstruct_t VAR151;
        WORD32 VAR152;
        WORD32 VAR153;
        VAR153 = VAR7->VAR154 >> (4 + VAR7->VAR155->VAR156);
        VAR149 = (VAR153 * VAR7->VAR148)
 - VAR7->VAR104;

 if(VAR7->VAR108 && (VAR7->VAR116 == 0))
            VAR150 = 1;
 else
            VAR150 = 2;

 if(VAR7->VAR108 && (VAR7->VAR104 == 0))
            VAR150 = 1;

        VAR152 = FUN22(VAR7, VAR149, VAR7->VAR157 == VAR158, VAR7->VAR155->VAR159,
 &VAR151, VAR150);

 if((VAR152 == VAR141) || (VAR152 == VAR142) ||
 (VAR152 == VAR143))
 {
            VAR19 = VAR152;
 }
 }

 if((VAR19 == VAR139)
 || (VAR19 == VAR140)
 || (VAR19 == VAR141)
 || (VAR19 == VAR142)
 || (VAR19 == VAR143))
 {

 
        FUN17(VAR7);
 
 if(VAR7->VAR127 == 3)
 {
            FUN18(VAR7);
 }
 
 if(VAR19 == VAR139)
 {
            VAR28->VAR42 -= VAR15;
 }
 return VAR33;
 }


 if(VAR7->VAR160)
 {
 
 if(VAR7->VAR127 == 2)
 {

 
 if((VAR7->VAR161 == 0) &&(VAR7->VAR115 == 1) && (VAR7->VAR125->VAR162 == 0))
 {
                UWORD32 VAR163,VAR164;
 tfr_ctxt_t VAR165;
 VAR166 *VAR167 = &VAR165;
 VAR168 *VAR169 = &VAR7->VAR170;

 
                VAR164 = (VAR7->VAR148 * VAR7->VAR147) - 1;
                VAR7->VAR114 = VAR164 + 1;


                FUN23(VAR7, VAR169, VAR167,
                                           VAR7->VAR148, 0);


                VAR163 = VAR164
 - VAR7->VAR171 + 1;

                FUN24("",VAR163);

 if(VAR163 != 0)
                    FUN25(VAR7, VAR163,
                                                   VAR167,1);

                VAR7->VAR115  = 0;

 }

 }

 
        FUN17(VAR7);
 
 if(VAR7->VAR127 == 3)
 {
            FUN18(VAR7);
 }
 }


    FUN3();


 if((VAR28->VAR36 & 0xff)
 != VAR172)
 {
        VAR28->VAR88 = (VAR89)VAR7->VAR90;
        VAR28->VAR91 = (VAR89)VAR7->VAR92;
 }


 if(VAR7->VAR124 != 3)
 {
        VAR28->VAR36 |= (1 << VAR135);

 }

 if(VAR7->VAR52 == 1 && VAR7->VAR124 != 3)
 {
        VAR28->VAR36 |= (1 << VAR135);

 }
 if(VAR7->VAR102)
 {
 
        VAR28->VAR36 = VAR133;
        VAR28->VAR36 |= (1 << VAR37);
        VAR28->VAR65 = 0;
        VAR28->VAR29 = sizeof(VAR27);
 
 if(VAR7->VAR127 == 3)
 {
            FUN18(VAR7);
 }
 return (VAR33);

 }

 if((VAR7->VAR71 == 1)
 && (VAR145 != VAR9))
 {
 

 if(VAR7->VAR155->VAR156)
 {
 if(1 == VAR7->VAR155->VAR173)
 {
                VAR7->VAR70 |= VAR69;
 }
 else
 {
                VAR7->VAR70 |= VAR68;
 }
 }

 
 if (((VAR7->VAR174->VAR175 & VAR176) == 0)
 && (VAR7->VAR116 == 1))

         {
             
             VAR19 = FUN26(VAR7);

            if(VAR19 != 0)

            {

                return VAR33;

            }
         }
 
 
 
 if(VAR7->VAR124 == 3)
 {
            VAR7->VAR104 = VAR7->VAR125->VAR126 + 1;
 }

 
 if(VAR7->VAR155->VAR157 == VAR158)
 {
            VAR7->VAR66 = VAR177;
 }
 else if(VAR7->VAR178 == VAR179)
 {
            VAR7->VAR66 = VAR132;
 }
 else if(VAR7->VAR178 == VAR180)
 {
            VAR7->VAR66 = VAR181;
 }
 else if(VAR7->VAR178 == VAR182)
 {
            VAR7->VAR66 = VAR183;
 }
 else
 {
            FUN16("");
 }

 
        VAR7->VAR67 = VAR7->VAR155->VAR156;

        VAR7->VAR60 = VAR7->VAR60 + 2;
        VAR7->VAR60 = VAR7->VAR60
 - VAR7->VAR155->VAR156;

 }

 
 if(VAR7->VAR127 == 3)
 {
        FUN18(VAR7);
 }


 {
 

 if((0 == VAR7->VAR184)
 && VAR7->VAR72)
 {

            FUN8(VAR7, VAR7->VAR43,
 &(VAR7->VAR47));
 if(0 == VAR7->VAR47.VAR36)
 {
                VAR7->VAR45 = 0;
                VAR7->VAR46 = 1;
 }
 }

        FUN15(VAR7, VAR28);

 
 if(VAR7->VAR46 &&
 (VAR7->VAR45 < VAR7->VAR86.VAR87))
 {
            VAR7->VAR48 = VAR7->VAR86.VAR87
 - VAR7->VAR45;
            FUN9(VAR7, &(VAR7->VAR47),
                                  VAR7->VAR45,
                                  VAR7->VAR48);
            VAR7->VAR45 += VAR7->VAR48;
 }

        FUN10(VAR7, &(VAR7->VAR47));
 }

 if(VAR7->VAR52 == 1 && (VAR7->VAR124 & 1) == 1)
 {
        VAR28->VAR94 = 1;
 if((NULL != VAR7->VAR125) && (1 == (VAR7->VAR125->VAR185)))
 {
 if((0 == VAR7->VAR186->VAR187)
 && (0 == VAR7->VAR186->VAR162))
                VAR28->VAR94 = 0;


         }
     }
 






























































     
     FUN3();
 
    FUN16("",
                         VAR28->VAR42);
 return VAR20;
}