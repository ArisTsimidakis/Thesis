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
 if(VAR7->VAR31 != 1)
 {
 return VAR32;
 }

 
    FUN3();

 if(0 == VAR7->VAR33)
 {
 if(VAR26->VAR34 == NULL)
 {
            VAR28->VAR35 |= 1 << VAR36;
            VAR28->VAR35 |= VAR37;
 return VAR32;
 }
 if(VAR26->VAR38 <= 0)
 {
            VAR28->VAR35 |= 1 << VAR36;
            VAR28->VAR35 |= VAR39;
 return VAR32;

 }
 }
    VAR7->VAR40 = 0;

    VAR28->VAR41 = 0;

    VAR7->VAR42 = NULL;

 if(VAR26->VAR29
 >= FUN4(VAR25, VAR43))
        VAR7->VAR42 = &VAR26->VAR43;

    VAR7->VAR44 = 0;

    VAR7->VAR45 = 0;
    VAR7->VAR46.VAR35 = 1;
    VAR7->VAR47 = VAR48;
 if(0 == VAR7->VAR49
 && VAR7->VAR50 == 0)
 {
        UWORD32 VAR51;
 if(VAR7->VAR42->VAR52 == 0)
 {
            VAR28->VAR35 |= 1 << VAR36;
            VAR28->VAR35 |= VAR53;
 return VAR32;
 }

 for(VAR51 = 0; VAR51 < VAR7->VAR42->VAR52; VAR51++)
 {
 if(VAR7->VAR42->VAR54[VAR51] == NULL)
 {
                VAR28->VAR35 |= 1 << VAR36;
                VAR28->VAR35 |= VAR55;
 return VAR32;
 }

 if(VAR7->VAR42->VAR56[VAR51] == 0)
 {
                VAR28->VAR35 |= 1 << VAR36;
                VAR28->VAR35 |=
                                VAR57;
 return VAR32;
 }
 }
 }

 if(VAR7->VAR58 >= VAR59)
 {
        VAR28->VAR35 = VAR60;
 return VAR32;
 }

 
    VAR7->VAR61 = VAR26->VAR61;

    VAR28->VAR35 = 0;
    VAR28->VAR62 = -1;
    VAR28->VAR45 = 0;
    VAR28->VAR63 = 0;

    VAR7->VAR64 = -1;
    VAR7->VAR65 = -1;
 
 {
 if((VAR66 | VAR67) == VAR7->VAR68)
 {
            VAR7->VAR68 = 0;
 }
 }
    VAR7->VAR69 = 0;

 

 if(VAR7->VAR70 == 1 && VAR7->VAR49 == 1
 && VAR7->VAR33 == 0)
 {
        UWORD32 VAR51;

        WORD32 VAR71 = 0, VAR72;

 
 
 for(VAR51 = 0; VAR51 < VAR7->VAR73; VAR51++)
 {
 if(0 == VAR7->VAR74[VAR51]
 || 1 == VAR7->VAR75[VAR51])
 {
                VAR71 = 1;
 break;
 }

 }

 if(0 == VAR71)
 {
 

            VAR28->VAR35 = VAR76;
            VAR28->VAR35 |= (1 << VAR36);
 return (VAR32);
 }

 while(1)
 {
 VAR77 *VAR78;
            VAR78 = (VAR77 *)FUN5(
 (VAR79 *)VAR7->VAR80, &VAR72);

 if(VAR78 == NULL)
 {
                UWORD32 VAR51, VAR81 = 0;

 
 for(VAR51 = 0; VAR51 < (VAR82); VAR51++)
 {
 if(0 != VAR7->VAR74[VAR51])
 {
                        VAR81 = 1;
 break;
 }
 }
 

 if(1 == VAR81)
 {
 
                    VAR28->VAR35 = VAR76;
                    VAR28->VAR35 |= (1
 << VAR36);
 return (VAR32);
 }
 }
 else
 {
 
 if(1 == VAR7->VAR74[VAR72])
 {
                    FUN6(
 (VAR79 *)VAR7->VAR80,
                                    VAR72,
                                    VAR83);
 }
 else
 {
 
                    FUN7((VAR79 *)VAR7->VAR80,
                                          VAR72,
                                          VAR83);
 break;
 }
 }
 }

 }

 if(VAR7->VAR33 && VAR7->VAR70)
 {

        FUN8(VAR7, VAR7->VAR42,
 &(VAR7->VAR46));
 if(0 == VAR7->VAR46.VAR35)
 {
            VAR7->VAR44 = 0;
            VAR7->VAR47 = VAR7->VAR84.VAR85;
            FUN9(VAR7, &(VAR7->VAR46),
                                  VAR7->VAR44,
                                  VAR7->VAR47);
            VAR7->VAR44 += VAR7->VAR47;
            VAR7->VAR45 = 1;

 }
        FUN10(VAR7, &(VAR7->VAR46));

        VAR28->VAR86 = (VAR87)VAR7->VAR88;
        VAR28->VAR89 = (VAR87)VAR7->VAR90;

        VAR28->VAR91 = 0;

        VAR28->VAR45 = VAR7->VAR45;
        VAR28->VAR92 =
                        VAR7->VAR46.VAR92;
        VAR28->VAR93 =
                        VAR7->VAR46.VAR93;
        VAR28->VAR94 = VAR7->VAR46.VAR94;
        VAR28->VAR95 = VAR7->VAR46.VAR95;
        VAR28->VAR61 = VAR7->VAR46.VAR61;
        VAR28->VAR96 = VAR7->VAR46.VAR96;

 
        VAR28->VAR97 = -1;
        VAR28->VAR62 = VAR98;
        VAR28->VAR63 = 0;

 if(0 == VAR7->VAR46.VAR35)
 {
 return (VAR21);
 }
 else
 return (VAR32);

 }
 if(VAR7->VAR99 == 1)
 {
 
        FUN11(VAR7);
 }

    VAR7->VAR100 = 0;

    VAR7->VAR101 = 0;
    VAR7->VAR102 = 0;
    VAR7->VAR103 = 0;
    VAR7->VAR104 = 0;
    VAR7->VAR105 = 0;
    VAR7->VAR106 = 2;
    VAR7->VAR107 = 1;
    VAR7->VAR108 = 0;
    VAR7->VAR109 = 0;

    VAR7->VAR110 = 0;
    VAR7->VAR111 = 0;
    VAR7->VAR112 = 0;
    VAR7->VAR113  = 0;

    FUN12("");


    VAR7->VAR114 = 0;

 do
 {
        WORD32 VAR115;

        VAR11 = (VAR10*)VAR26->VAR34
 + VAR28->VAR41;

        VAR13 = VAR26->VAR38
 - VAR28->VAR41;

 
 if((NULL == VAR7->VAR116) &&
 (VAR7->VAR117 & 1))
 {
            WORD32 VAR118;

 void *VAR119;
 void *VAR120 = VAR7->VAR120;
            VAR118 = FUN13(256000, VAR7->VAR121 * VAR7->VAR122 * 3 / 2);
            VAR119 = VAR7->FUN14(VAR120, 128, VAR118);
            FUN15((NULL == VAR119), VAR32);
            VAR7->VAR116 = VAR119;
            VAR7->VAR123 = VAR118;
 }

 if(VAR7->VAR116)
 {
            VAR24 = VAR7->VAR116;
            VAR115 = VAR7->VAR123;
 }
 else
 {
            VAR24 = VAR7->VAR124;
            VAR115 = VAR7->VAR125;
 }

        VAR17 = 0;

        VAR12 = FUN16(VAR11, 0, VAR13,
 &VAR14,
 &VAR17);

 if(VAR12 == -1)
            VAR12 = 0;
 
        VAR12 = FUN17(VAR12, VAR115);

        VAR15 = VAR12 + VAR14;
        VAR28->VAR41 += VAR15;

 {
            UWORD8 VAR126, VAR127;

 if(VAR7->VAR128 == VAR129)
 {
                VAR126 = *(VAR11 + VAR14);
                VAR127 = (VAR10)(FUN18(VAR126));
 if(VAR127 == 0)
 {
 
                    VAR16 = 1;
 continue;
 }
 else
 {
 if(1 == VAR16)
 {
 
                        VAR28->VAR41 -=
                                        VAR15;
                        VAR28->VAR62 = VAR130;
                        VAR28->VAR35 =
                                        VAR131;
                        VAR28->VAR35 |= (1
 << VAR36);
                        VAR28->VAR63 = 0;
                        VAR28->VAR29 =
 sizeof(VAR27);
 
                        FUN19(VAR7);
 
 if(VAR7->VAR132 == 3)
 {
                            FUN20(VAR7);
 }

 return (VAR32);
 }
 }

 }

 }


 if(VAR12)
 {
            memcpy(VAR24, VAR11 + VAR14,
                   VAR12);
 
 if((VAR12 + 8) < VAR115)
 {
                memset(VAR24 + VAR12, 0, 8);
 }
            VAR18 = 1;

 }
 else
 {
 

 if(VAR18 == 0)
 {
 

                VAR7->VAR133 = VAR134;
                VAR28->VAR35 |= 1 << VAR135;

 if(VAR7->VAR114 == 0)
 {

                    FUN21(VAR7,
                                                           VAR28);

                    VAR28->VAR35 = VAR7->VAR133;
                    VAR28->VAR63 = 0;

 return (VAR32);
 }
 else
 {
                    VAR7->VAR40 = 1;
 continue;
 }
 }
 else
 {
 
                VAR23 = 0;
 continue;
 }

 }

        VAR7->VAR136 = 0;
        VAR19 = FUN22(VAR3, VAR28,
                              VAR24, VAR12);
 if(VAR19 != VAR137)
 {
            UWORD32 VAR138 =  FUN23(VAR19);
            VAR28->VAR35 = VAR138 | VAR19;
            VAR20 = VAR32;

 if((VAR19 == VAR139)
 || (VAR19 == VAR140)
 || (VAR19 == VAR141)
 || (VAR19 == VAR142)
 || (VAR19 == VAR143))
 {
                VAR7->VAR69 = 0;
 break;
 }

 if((VAR19 == VAR144) || (VAR19 == VAR145))
 {
                VAR28->VAR41 -= VAR15;
                VAR20 = VAR32;
 break;
 }

 if(VAR19 == VAR146)
 {
                VAR20 = VAR32;
 break;
 }

 }

 if(VAR7->VAR136)
 {
 
            VAR28->VAR41 -= VAR15;
            VAR28->VAR35 = VAR131;
            VAR28->VAR35 |= (1 << VAR36);
            VAR28->VAR63 = 0;
            VAR28->VAR29 = sizeof(VAR27);
 
            FUN19(VAR7);
 
 if(VAR7->VAR132 == 3)
 {
                FUN20(VAR7);
 }
 return (VAR32);

 }



        VAR22 = ((VAR7->VAR50 == 1)
 && (VAR7->VAR117 != 3)
 && (VAR28->VAR41
 < VAR26->VAR38));
        VAR23 = (((VAR7->VAR50 == 0)
 && ((VAR7->VAR40 == 0)
 || (VAR17 == 1)))
 && (VAR28->VAR41
 < VAR26->VAR38));
 }
 while(( VAR22 == 1)||(VAR23 == 1));

 if((VAR7->VAR69 == 1)
 && (VAR19 != VAR140)
 && VAR7->VAR102 < VAR7->VAR147 * VAR7->VAR148)
 {
 
        WORD32 VAR149;
        WORD32 VAR150;
 pocstruct_t VAR151;
        WORD32 VAR152;

        VAR149 = (VAR7->VAR147 * VAR7->VAR148)
 - VAR7->VAR102;

 if(VAR7->VAR106 && (VAR7->VAR114 == 0))
            VAR150 = 1;

         else
             VAR150 = 2;
 






         VAR152 = FUN24(VAR7, VAR149, VAR7->VAR153 == VAR154, VAR7->VAR155->VAR156,
                                    &VAR151, VAR150);
 
 if((VAR152 == VAR141) || (VAR152 == VAR142))
 {
 return VAR32;
 }
 }

 if((VAR19 == VAR139)
 || (VAR19 == VAR140)
 || (VAR19 == VAR141)
 || (VAR19 == VAR142)
 || (VAR19 == VAR143))
 {

 
        FUN19(VAR7);
 
 if(VAR7->VAR132 == 3)
 {
            FUN20(VAR7);
 }
 
 if(VAR19 == VAR139)
 {
            VAR28->VAR41 -= VAR15;
 }
 return VAR32;
 }


 if(VAR7->VAR157)
 {
 
 if(VAR7->VAR132 == 2)
 {

 
 if((VAR7->VAR158 == 0) &&(VAR7->VAR113 == 1) && (VAR7->VAR159->VAR160 == 0))
 {
                UWORD32 VAR161,VAR162;
 tfr_ctxt_t VAR163;
 VAR164 *VAR165 = &VAR163;
 VAR166 *VAR167 = &VAR7->VAR168;

 
                VAR162 = (VAR7->VAR148 * VAR7->VAR147) - 1;
                VAR7->VAR112 = VAR162 + 1;


                FUN25(VAR7, VAR167, VAR165,
                                           VAR7->VAR148, 0);


                VAR161 = VAR162
 - VAR7->VAR169 + 1;

                FUN26("",VAR161);

 if(VAR161 != 0)
                    FUN27(VAR7, VAR161,
                                                   VAR165,1);

                VAR7->VAR113  = 0;

 }

 }

 
        FUN19(VAR7);
 
 if(VAR7->VAR132 == 3)
 {
            FUN20(VAR7);
 }
 }


    FUN3();


 if((VAR28->VAR35 & 0xff)
 != VAR170)
 {
        VAR28->VAR86 = (VAR87)VAR7->VAR88;
        VAR28->VAR89 = (VAR87)VAR7->VAR90;
 }


 if(VAR7->VAR117 != 3)
 {
        VAR28->VAR35 |= (1 << VAR135);

 }

 if(VAR7->VAR50 == 1 && VAR7->VAR117 != 3)
 {
        VAR28->VAR35 |= (1 << VAR135);

 }
 if(VAR7->VAR100)
 {
 
        VAR28->VAR35 = VAR131;
        VAR28->VAR35 |= (1 << VAR36);
        VAR28->VAR63 = 0;
        VAR28->VAR29 = sizeof(VAR27);
 
 if(VAR7->VAR132 == 3)
 {
            FUN20(VAR7);
 }
 return (VAR32);

 }

 if((VAR7->VAR69 == 1)
 && (VAR145 != VAR9))
 {
 

 if(VAR7->VAR155->VAR171)
 {
 if(1 == VAR7->VAR155->VAR172)
 {
                VAR7->VAR68 |= VAR67;
 }
 else
 {
                VAR7->VAR68 |= VAR66;
 }
 }

 
 if((VAR7->VAR173->VAR174 & VAR175) == 0)
 {
 
            VAR19 = FUN28(VAR7);
 if(VAR19 != 0)
 {
 return VAR32;
 }
 }


 
 if(VAR7->VAR117 == 3)
 {
            VAR7->VAR102 = VAR7->VAR159->VAR176 + 1;
 }

 
 if(VAR7->VAR155->VAR153 == VAR154)
 {
            VAR7->VAR64 = VAR177;
 }
 else if(VAR7->VAR178 == VAR179)
 {
            VAR7->VAR64 = VAR130;
 }
 else if(VAR7->VAR178 == VAR180)
 {
            VAR7->VAR64 = VAR181;
 }
 else if(VAR7->VAR178 == VAR182)
 {
            VAR7->VAR64 = VAR183;
 }
 else
 {
            FUN29("");
 }

 
        VAR7->VAR65 = VAR7->VAR155->VAR171;

        VAR7->VAR58 = VAR7->VAR58 + 2;
        VAR7->VAR58 = VAR7->VAR58
 - VAR7->VAR155->VAR171;

 }

 
 if(VAR7->VAR132 == 3)
 {
        FUN20(VAR7);
 }


 {
 

 if((VAR184 == VAR7->VAR185)
 && VAR7->VAR70)
 {

            FUN8(VAR7, VAR7->VAR42,
 &(VAR7->VAR46));
 if(0 == VAR7->VAR46.VAR35)
 {
                VAR7->VAR44 = 0;
                VAR7->VAR45 = 1;
 }
 }

        FUN21(VAR7, VAR28);

 
 if(VAR7->VAR45 &&
 (VAR7->VAR44 < VAR7->VAR84.VAR85))
 {
            VAR7->VAR47 = VAR7->VAR84.VAR85
 - VAR7->VAR44;
            FUN9(VAR7, &(VAR7->VAR46),
                                  VAR7->VAR44,
                                  VAR7->VAR47);
            VAR7->VAR44 += VAR7->VAR47;
 }

        FUN10(VAR7, &(VAR7->VAR46));
 }

 if(VAR7->VAR50 == 1 && (VAR7->VAR117 & 1) == 1)
 {
        VAR28->VAR92 = 1;
 if((NULL != VAR7->VAR159) && (1 == (VAR7->VAR159->VAR186)))
 {
 if((0 == VAR7->VAR187->VAR188)
 && (0 == VAR7->VAR187->VAR160))
                VAR28->VAR92 = 0;

 }
 }

 
    FUN3();

    FUN29("",
                         VAR28->VAR41);
 return VAR20;
}