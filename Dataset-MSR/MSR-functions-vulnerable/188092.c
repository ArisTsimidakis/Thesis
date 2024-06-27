VAR1 FUN1(VAR2 *VAR3, void *VAR4, void *VAR5)
{
    WORD32 VAR6 = VAR7;
 VAR8 *VAR9 = (VAR8 *)(VAR3->VAR10);
 VAR11 *VAR12;
 VAR13 *VAR14;

    WORD32 VAR15 = 0;
    WORD32 VAR16 = 0;

 
    VAR9->VAR17 = 0;

    VAR12 = (VAR11 *)VAR4;
    VAR14 = (VAR13 *)VAR5;

 {
        UWORD32 VAR18 = VAR14->VAR18;
        memset(VAR14, 0, sizeof(VAR13));
        VAR14->VAR18 = VAR18; 
 }
 if(VAR9->VAR19 != 1)
 {
        VAR14->VAR20 |= 1 << VAR21;
        VAR14->VAR20 |= VAR22;
 return VAR23;
 }

 if(VAR9->VAR24 >= VAR25)
 {
        VAR14->VAR20 |= 1 << VAR21;
        VAR14->VAR20 |= VAR26;
 return VAR23;
 }

 
 if(VAR9->VAR27)
 {
        VAR9->VAR28 = 1;
 }

 
 
 
 if(0 == VAR9->VAR28)
 {
 if(VAR12->VAR29 == NULL)
 {
            VAR14->VAR20 |= 1 << VAR30;
            VAR14->VAR20 |= VAR31;
 return VAR23;
 }
 if(VAR12->VAR32 <= VAR33)
 {
 if((VAR1)VAR12->VAR32 > 0)
                VAR14->VAR34 = VAR12->VAR32;
 else
                VAR14->VAR34 = 0;

            VAR14->VAR20 |= 1 << VAR30;
            VAR14->VAR20 |= VAR35;
 return VAR23;

 }
 }

#ifdef VAR36
 {
        WORD32 VAR37;

        VAR37 = (VAR9->VAR38 * VAR9->VAR39 + 255) >> 8;
 
        VAR9->VAR40 = 0;
        memset(VAR9->VAR41, 0, ((VAR37 + 7) >> 3));
 }
#endif

 if(0 == VAR9->VAR42 && VAR9->VAR43 == 0)
 {
        UWORD32 VAR44;
 if(VAR12->VAR45.VAR46 == 0)
 {
            VAR14->VAR20 |= 1 << VAR30;
            VAR14->VAR20 |= VAR47;
 return VAR23;
 }

 for(VAR44 = 0; VAR44 < VAR12->VAR45.VAR46; VAR44++)
 {
 if(VAR12->VAR45.VAR48[VAR44] == NULL)
 {
                VAR14->VAR20 |= 1 << VAR30;
                VAR14->VAR20 |= VAR49;
 return VAR23;
 }

 if(VAR12->VAR45.VAR50[VAR44] == 0)
 {
                VAR14->VAR20 |= 1 << VAR30;
                VAR14->VAR20 |= VAR51;
 return VAR23;
 }
 }
 }

    VAR9->VAR52 = &VAR12->VAR45;
    VAR9->VAR53 = VAR12->VAR53;
 if(VAR9->VAR28)
 {

        VAR14->VAR54 = VAR9->VAR55;
        VAR14->VAR56 = VAR9->VAR57;

        VAR14->VAR58 = 0;

        VAR9->VAR59 = (VAR60 *)FUN2(
 (VAR61 *)VAR9->VAR62, &VAR9->VAR63);
 
 
 if((VAR9->VAR59)
 && ((0 == VAR9->VAR42)
 || (VAR64
 == VAR9->VAR65)))
 {

 VAR66 *VAR67 = &VAR9->VAR68[VAR16];
 if(0 == VAR67->VAR19)
 {
                FUN3(VAR67, 0);
 }

 
            VAR6 = FUN4(VAR9, &VAR9->VAR68[VAR16],
                                  VAR12->VAR45.VAR48[0],
                                  VAR12->VAR45.VAR48[1],
                                  VAR12->VAR45.VAR48[2], 0,
                                  VAR9->VAR57);

            FUN5((VAR69 *)VAR9->VAR70,
                                  VAR9->VAR63, VAR71);
 }

        FUN6(VAR9, VAR12, VAR14);

 if(1 == VAR14->VAR72)
 {
            WORD32 VAR73 = VAR9->VAR55 - 32 - VAR74;
            WORD32 VAR75 = VAR9->VAR57 - 32 - VAR76;

 if(VAR75 < 0)
                VAR75 = 0;

 if(VAR73 < 0)
                VAR73 = 0;

            FUN7(VAR12->VAR45.VAR48[0],
                        VAR12->VAR45.VAR48[1],
                        VAR12->VAR45.VAR48[2], VAR9->VAR77,
                        VAR73,
                        VAR75,
                        VAR9->VAR65,
                        VAR9->VAR55,
                        VAR9->VAR57);
 }


 if(NULL == VAR9->VAR59)
 {
 
 if(VAR9->VAR27)
 {
                FUN8(VAR9);
 }
 return (VAR23);
 }

 return (VAR7);

 }
 
 if((0 == VAR9->VAR43) && (1 == VAR9->VAR42))
 {
        WORD32 VAR78;
        VAR78 = 1;
 if(VAR9->VAR70)
            VAR78 = FUN9((VAR69 *)VAR9->VAR70);

 
 if(0 == VAR78)
 {
            VAR14->VAR20 = VAR79;
            VAR14->VAR20 |= (1 << VAR30);
 return VAR23;
 }
 }
    VAR9->VAR80 = VAR12->VAR32;
    VAR9->VAR81 = (VAR82 *)VAR12->VAR29;
    VAR9->VAR83.VAR84 = 0;

    VAR9->VAR85 = 0;
    VAR9->VAR86 = 0;
    VAR9->VAR59 = NULL;

 if(VAR9->VAR87 > 1)
 {
        FUN10(0);
 }
 while(VAR33 < VAR9->VAR80)
 {
        WORD32 VAR88;
        WORD32 VAR89;
        WORD32 VAR90;

 if(VAR9->VAR86)
 {
 VAR91 *VAR92 = VAR9->VAR83.VAR93 + (VAR9->VAR83.VAR94 & (VAR95 - 1));
            WORD32 VAR96 = VAR92->VAR97 +
                            VAR92->VAR98 * VAR9->VAR83.VAR99->VAR100;
 if(VAR9->VAR83.VAR101 == VAR96)
                VAR9->VAR86 = 0;
 }

 if(VAR9->VAR102)
 {
            VAR9->VAR103 = VAR9->VAR102;
            VAR9->VAR104 = VAR9->VAR105;
 }
 else
 {
            VAR9->VAR103 = VAR9->VAR106;
            VAR9->VAR104 = VAR9->VAR107;
 }

        VAR89 = FUN11(VAR9->VAR81,
                                                VAR9->VAR80);

        VAR9->VAR108 = VAR89;
 {
            WORD32 VAR109 = VAR9->VAR80 - VAR89;

            VAR109 = FUN12((VAR110)VAR109, VAR9->VAR104);
            FUN13(VAR9->VAR81 + VAR89,
                                        VAR9->VAR103,
                                        VAR109,
 &VAR88, &VAR90);

 
 
 if(VAR90 < (VAR1)(VAR9->VAR104 - 8))
 {
                memset(VAR9->VAR103 + VAR90, 0, 2 * sizeof(VAR110));
 }
 }
 
        VAR9->VAR111 = VAR88 - VAR90;
        VAR9->VAR112 = VAR88;

        FUN14(&VAR9->VAR83.VAR113, VAR9->VAR103,
                         VAR90);

        VAR6 = FUN15(VAR9);

 
 if(VAR9->VAR85 &&
 (VAR9->VAR83.VAR101 != VAR9->VAR83.VAR99->VAR114))
 {
 if((VAR9->VAR80 - (VAR88 + VAR89) <= VAR33) ||
 (VAR9->VAR115))
 {
 VAR91 *VAR92;

                VAR9->VAR83.VAR94--;
 if(VAR9->VAR83.VAR94 < 0)
                    VAR9->VAR83.VAR94 = 0;

                VAR92 = VAR9->VAR83.VAR93 + ((VAR9->VAR83.VAR94 + 1) & (VAR95 - 1));
                VAR92->VAR97 = 0;
                VAR92->VAR98 = VAR9->VAR83.VAR99->VAR116;
                VAR9->VAR86 = 1;
 continue;
 }
 }

 
         if(VAR117 == VAR6)
         {


             VAR9->VAR81 += (VAR89 + VAR88);
             VAR9->VAR80 -= (VAR89 + VAR88);
 
 continue;
 }

 if((VAR118 == VAR6) ||
 (VAR119 == VAR6))
 {
 break;
 }

 
 
 
 
 if(VAR6 != VAR120)
 {
 if((0 == VAR9->VAR86) ||
 (VAR9->VAR80 - (VAR88 + VAR89) <= VAR33))
 {
                VAR9->VAR81 += (VAR89 + VAR88);
                VAR9->VAR80 -= (VAR89 + VAR88);
 }
 if(VAR6 != VAR121)
 break;

 if(VAR9->VAR83.VAR84)
 break;
 }
 else
 {
            VAR6 = VAR121;
 break;
 }

 
 if((VAR9->VAR122 == 0) && VAR9->VAR123)
 {
            WORD32 VAR6;
            VAR6 = FUN16(VAR9);
 if(VAR6 != VAR7)
 {
 
                FUN17(VAR9);
                VAR9->VAR17 = VAR124;
                VAR14->VAR20 |= 1 << VAR21;
                VAR14->VAR20 |= VAR124;

 return VAR23;
 }
 }

        FUN18();
 }

 if((VAR9->VAR24 == 0) && (VAR6 != VAR121))
 {
        VAR9->VAR17 = VAR6;

        FUN6(VAR9, VAR12, VAR14);
 return VAR23;
 }

 if(1 == VAR9->VAR85)
 {
        WORD32 VAR44;
 VAR125 *VAR99 = VAR9->VAR83.VAR99;
        VAR9->VAR126 = 1;

 
 if(VAR9->VAR87 > 1 && VAR9->VAR83.VAR84)
 {

 
 
 VAR66 *VAR67;

 
            VAR67 = &VAR9->VAR68[VAR9->VAR87 - 1];

 if((VAR9->VAR59) &&
 ((0 == VAR9->VAR42) || (VAR64 == VAR9->VAR65)))
 {
 
 if((0 == VAR9->VAR127) ||
 (VAR9->VAR63 == VAR67->VAR128))
 for(VAR44 = 0; VAR44 < VAR99->VAR116; VAR44++)
 {
 proc_job_t VAR129;
                        IHEVCD_ERROR_T VAR6;
                        VAR129.VAR130 = VAR131;
                        VAR129.VAR132 = 0;
                        VAR129.VAR97 = 0;
                        VAR129.VAR98 = VAR44;
                        VAR129.VAR133 = 0;
                        VAR129.VAR134 = 0;
                        VAR6 = FUN19((VAR135 *)VAR9->VAR83.VAR136,
 &VAR129, sizeof(VAR137), 1);
 if(VAR6 != (VAR138)VAR121)
 return (VAR1)VAR6;
 }
 }
 
 
            VAR6 = FUN20((VAR135 *)VAR9->VAR83.VAR136);

 while(1)
 {
                IHEVCD_ERROR_T VAR6;
 proc_job_t VAR129;
 VAR66 *VAR67;

 
                VAR67 = &VAR9->VAR68[VAR9->VAR87 - 1];

                VAR6 = FUN21((VAR135 *)VAR67->VAR136, &VAR129,
 sizeof(VAR137), 1);
 if((VAR138)VAR121 != VAR6)
 break;

                VAR67->VAR139 = VAR129.VAR132;
                VAR67->VAR140 = VAR129.VAR97;
                VAR67->VAR141 = VAR129.VAR98;
                VAR67->VAR94 = VAR129.VAR133;

 if(VAR142 == VAR129.VAR130)
 {
                    FUN3(VAR67, VAR129.VAR134);

                    FUN22(VAR67);
 }
 else if(VAR131 == VAR129.VAR130)
 {
 VAR125 *VAR99 = VAR9->VAR83.VAR99;
                    WORD32 VAR143 = 1 << VAR99->VAR144;
 if(0 == VAR67->VAR19)
 {
                        FUN3(VAR67, 0);
 }

                    VAR143 = FUN12(VAR143, (VAR9->VAR57 - (VAR129.VAR98 << VAR99->VAR144)));
 if(VAR143 < 0)
                        VAR143 = 0;

                    FUN4(VAR9, VAR67,
                                    VAR12->VAR45.VAR48[0],
                                    VAR12->VAR45.VAR48[1],
                                    VAR12->VAR45.VAR48[2],
                                    VAR129.VAR98 << VAR99->VAR144,
                                    VAR143);
 }
 }
 }
 
 
 else if((VAR9->VAR59) && ((0 == VAR9->VAR42) ||
 (VAR64 == VAR9->VAR65)) &&
 (VAR9->VAR83.VAR84))
 {
 VAR66 *VAR67 = &VAR9->VAR68[VAR15];
 
            VAR9->VAR145.VAR146 = VAR9->VAR57
 - VAR9->VAR145.VAR147;
 if(0 == VAR67->VAR19)
 {
                FUN3(VAR67, 0);
 }

 if(VAR9->VAR145.VAR146 < 0)
                VAR9->VAR145.VAR146 = 0;

            VAR6 = FUN4(VAR9, VAR67,
                                  VAR12->VAR45.VAR48[0],
                                  VAR12->VAR45.VAR48[1],
                                  VAR12->VAR45.VAR48[2],
                                  VAR9->VAR145.VAR147,
                                  VAR9->VAR145.VAR146);
            VAR9->VAR145.VAR147 += VAR9->VAR145.VAR146;

 }


        FUN23(VAR9);

 
        FUN24((VAR69 *)VAR9->VAR148,
                                 VAR9->VAR68[VAR15].VAR149,
                                 VAR150);

 
        FUN24((VAR69 *)VAR9->VAR70,
                                 VAR9->VAR68[VAR15].VAR128,
                                 VAR150);

 
        FUN24((VAR69 *)VAR9->VAR70,
                                 VAR9->VAR68[VAR15].VAR128,
                                 VAR71);

 
        FUN25((VAR151 *)VAR9->VAR152,
                                 VAR9->VAR68[VAR15].VAR153,
                                 VAR9->VAR68[VAR15].VAR128);

 
 if((0 == VAR9->VAR42) && (VAR9->VAR59))
            FUN5((VAR69 *)VAR9->VAR70,
                                  VAR9->VAR63, VAR71);

 
 for(VAR44 = 0; VAR44 < (VAR9->VAR87 - 1); VAR44++)
 {
 if(VAR9->VAR154[VAR44])
 {
                FUN26(VAR9->VAR155[VAR44], NULL);
                VAR9->VAR154[VAR44] = 0;
 }
 }

        FUN27(&VAR9->VAR68[VAR15]);
 if(VAR9->VAR24 > 0)
 {
            FUN28(VAR9);
 }
        FUN29(VAR9);

 
        VAR9->VAR24++;
 }
    FUN6(VAR9, VAR12, VAR14);

 if(1 == VAR14->VAR72)
 {
        WORD32 VAR73 = VAR9->VAR55 - 32 - VAR74;
        WORD32 VAR75 = VAR9->VAR57 - 32 - VAR76;

 if(VAR75 < 0)
            VAR75 = 0;

 if(VAR73 < 0)
            VAR73 = 0;

        FUN7(VAR12->VAR45.VAR48[0],
                    VAR12->VAR45.VAR48[1],
                    VAR12->VAR45.VAR48[2], VAR9->VAR77,
                    VAR73,
                    VAR75,
                    VAR9->VAR65,
                    VAR9->VAR55,
                    VAR9->VAR57);
 }


 return VAR6;
}