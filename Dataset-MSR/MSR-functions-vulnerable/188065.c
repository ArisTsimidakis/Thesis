VAR1 FUN1(UWORD8 VAR2,
                                 UWORD8 VAR3,
 VAR4 *VAR5 
 )
{
 VAR6 * VAR7 = VAR5->VAR7;
 VAR8 *VAR9;
 VAR10 *VAR11;
 VAR12 *VAR13 = VAR5->VAR13;
 pocstruct_t VAR14;
    WORD32 VAR15[2];
    WORD32 VAR16 = 0;
    UWORD16 VAR17, VAR18;
    UWORD8 VAR19, VAR20 = 0, VAR21;
    UWORD32 VAR22 = 0;
    UWORD8 VAR23, VAR24;

    UWORD8 VAR25;
    VAR26 *VAR27 = VAR7->VAR28;
    VAR26 *VAR29 = &VAR7->VAR30;
    WORD8 VAR31;

    WORD32 VAR32, VAR33;
    WORD32 VAR34, VAR35;
    UWORD8 VAR36;
 VAR37 *VAR38;

    UWORD32 VAR39;
    WORD32 VAR40;
    UWORD32 VAR41 = 0;

 
    VAR5->VAR42->VAR43 = 0;
    VAR17 = FUN2(VAR29,
                                     VAR27);
 if(VAR17
 > (VAR5->VAR44 * VAR5->VAR45))
 {

 return VAR46;
 }

 
 if(((VAR17 << VAR13->VAR47)
 <= VAR5->VAR48) && (VAR5->VAR49 == 0))
 {
 return VAR46;
 }

    FUN3("",VAR17);

    VAR39 = FUN2(VAR29, VAR27);

 if(VAR39 > 9)
 return VAR50;

    VAR21 = VAR39;
    FUN3("",(VAR21));
    VAR5->VAR51 = 0;
 
 
 
 if(VAR21 > 4)
 {
        VAR21 -= 5;
        VAR5->VAR51 = 1;
 }

 {
        UWORD32 VAR52;

 if((VAR5->VAR53 == VAR54)
 || (VAR5->VAR55 == VAR54))
 {
            UWORD32 VAR56 = 0;

 if(VAR5->VAR25 == VAR57)
 {
                VAR52 = 0;

                VAR5->VAR55 = VAR58;
 }
 else if((VAR59 == VAR21)
 && (1 >= VAR5->VAR60->VAR61))
 {
                VAR52 = 0;

                VAR5->VAR55 = VAR58;
 }
 else
 {
                VAR52 = 1;
 }

 
 if((0 == VAR17) && (1 == VAR5->VAR62))
 {
                VAR52 = 0;
 }

 if(VAR52)
 {
                VAR5->VAR62 = 1;
                VAR5->VAR55 = VAR54;
 return 0;
 }
 else
 {
 
 if(1 == VAR5->VAR62)
 {
                    VAR5->VAR63 = 1;
 return 0;
 }
 }
 }

 }

 
     VAR39 = FUN2(VAR29, VAR27);
     if(VAR39 & VAR64)

        return VAR65;


     
     FUN3("", VAR39);
     VAR9 = &VAR5->VAR9[VAR39];
     if(VAR66 == VAR9->VAR67)
     {

        return VAR65;


     }
     VAR11 = VAR9->VAR68;
     if(!VAR11)

        return VAR65;


     if(VAR66 == VAR11->VAR67)

        return VAR65;


 
     
     VAR18 = FUN4(VAR7,
                                         VAR11->VAR69);


    FUN3("", VAR18);


 
 if(!VAR11->VAR70)
 {

        VAR19 = FUN5(VAR7);
        FUN3("", VAR19);
        VAR23 = 0;

 if(VAR19)
 {
            VAR5->VAR71 = (VAR72 *)VAR73;
            VAR23 = FUN5(VAR7);
            FUN3("", VAR23);

 }
 else
 {
            VAR5->VAR71 = (VAR72 *)VAR74;
 }
 }
 else
 {
        VAR19 = 0;
        VAR23 = 0;

        VAR5->VAR71 = (VAR72 *)VAR74;
 }

    VAR25 = VAR75;
 if(VAR2)
 {
 if(0 == VAR19)
 {
            VAR5->VAR76 = VAR77 | VAR78;
 }
        VAR25 = VAR57;

         VAR22 = FUN2(VAR29,
                                    VAR27);
         if(VAR22 > 65535)

            return VAR65;


         FUN3("", VAR22);
     }
 
 
    VAR15[0] = VAR15[1] = 0;
    VAR14.VAR79 = 0;
    VAR14.VAR80 = 0;
    VAR24 = VAR11->VAR24;
 if(VAR24 == 0)
 {
        VAR40 = FUN4(

                         VAR7,
                         VAR11->VAR81);
         if(VAR40 < 0 || VAR40 >= VAR11->VAR82)

            return VAR65;


         VAR14.VAR79 = VAR40;
         FUN3("", VAR14.VAR79);
 
 if((VAR9->VAR83 == 1) && (!VAR19))
 {
            VAR14.VAR80 = FUN6(
                            VAR29, VAR27);
 
            FUN3("",
                            VAR14.VAR80);
 }
 }

    VAR14.VAR84[0] = 0;
    VAR14.VAR84[1] = 0;
 if(VAR24 == 1
 && (!VAR11->VAR85))
 {
        VAR14.VAR84[0] = FUN6(VAR29,
                                                         VAR27);
        FUN3("",
                        VAR14.VAR84[0]);

 if(VAR9->VAR83 && !VAR19)
 {
            VAR14.VAR84[1] = FUN6(
                            VAR29, VAR27);
            FUN3("",
                            VAR14.VAR84[1]);
 }
 }

 if(VAR9->VAR86)

     {
         VAR39 = FUN2(VAR29, VAR27);
         if(VAR39 > VAR87)

            return VAR65;


         VAR20 = VAR39;
         FUN3("", VAR20);
     }

 
 
 
    VAR31 = 0;
 if(!VAR5->VAR88)
 {
        VAR31 = FUN7(VAR18, VAR3,
 &VAR14, &VAR5->VAR89,
                                            VAR13, VAR24,
                                            VAR25, VAR22,
                                            VAR19,
                                            VAR23);

 
 if((VAR5->VAR49 == 2) && (VAR31 == 0))
 {
 
            VAR5->VAR90->VAR91 |= VAR92;
            VAR31 = 1;
 }
 else
 {
 
            VAR5->VAR90->VAR91 &= VAR93;
 }
 }

 
 
 
 
    VAR36 = VAR11->VAR94 && (!VAR19);
    VAR34 = 0;

 if(VAR31 || VAR5->VAR88)
 {
 if(VAR18 != VAR5->VAR95
 && VAR5->VAR76 != 0
 && VAR5->VAR76
 != (VAR77 | VAR78))
 {
            VAR5->VAR96 = 1;
 if(VAR5->VAR49)
 {
 
                VAR34 = 1;
 }
 else
 {
 
                VAR34 = 2;
 }

 if(VAR5->VAR76 ==VAR77)
                VAR13->VAR23 = 1;
 else
                VAR13->VAR23 = 0;

            VAR35 = (VAR5->VAR44 * VAR5->VAR45)
 - VAR5->VAR97;
            VAR38 = &VAR5->VAR89;

            VAR2 = VAR13->VAR25 == VAR57;
 }
 else if(VAR5->VAR49 == 2)
 {
 if(VAR17 > 0)
 {
 
                VAR34 = 1;
                VAR35 = VAR17 << VAR36;
                VAR38 = &VAR14;

 
                VAR13->VAR22 = VAR22;
                VAR13->VAR19 = VAR19;
                VAR13->VAR23 = VAR23;
                VAR13->VAR79 =
                        VAR14.VAR79;
                VAR13->VAR25 = VAR25;
                VAR13->VAR20 = VAR20;
                VAR13->VAR3 = VAR3;
                VAR13->VAR24 = VAR24;
                VAR13->VAR47 = VAR11->VAR94
 && (!VAR19);
 }
 }
 else
 {

 if(VAR5->VAR49)
 {
 
                VAR34 = 1;
                VAR35 = VAR17 << VAR36;
 }
 else
 {
 
                VAR34 = 2;
                VAR35 = (VAR5->VAR44 * VAR5->VAR45)
 - VAR5->VAR97;
 }
            VAR38 = &VAR14;
 }
 }
 else
 {
 if((VAR17 << VAR36) > VAR5->VAR97)
 {
 
            VAR34 = 2;
            VAR35 = (VAR17 << VAR36)
 - VAR5->VAR97;
            VAR38 = &VAR14;
 }
 else if((VAR17 << VAR36) < VAR5->VAR97)
 {
 return VAR46;
 }
 }

 if(VAR34)
 {
        VAR32 = FUN8(VAR5, VAR35, VAR2, VAR18, VAR38, VAR34);

 if(VAR5->VAR96 == 1)
 {
            VAR5->VAR98 = 1 - VAR5->VAR98;
            VAR13->VAR23 = VAR23;
            VAR5->VAR95 = VAR18;
            VAR5->VAR88 = 0;
 return VAR99;
 }

 if(VAR34 == 2)
 {
            VAR5->VAR88 = 0;
 return VAR100;
 }

 if(VAR5->VAR97
 >= VAR5->VAR44 * VAR5->VAR45)
 {
 
            VAR5->VAR88 = 0;
 return VAR101;
 }

 if(VAR5->VAR90->VAR91 & VAR92)
 {
            FUN9(VAR5);
 return VAR102;
 }

 if(VAR32 != VAR103)
 return VAR32;

        VAR31 = 0;
 }

 if (VAR5->VAR49 == 0)
 {
        VAR5->VAR104++;
        VAR5->VAR105++;
 }

 
 if((VAR5->VAR106 == 0) && (VAR5->VAR49 == 0))
 {
        VAR5->VAR107++;
 }
    VAR5->VAR108 = 0;

 
 
 
 if(!VAR5->VAR88)
 {
        UWORD8 VAR109 = 0;

 if(VAR5->VAR97
 == (VAR5->VAR60->VAR110 + 1))
 {
 
 if(VAR5->VAR49 == 0)
                VAR109 = 1;
 }

 if(VAR31 || VAR109)
 {

 if(1 == VAR5->VAR111)
 {
                VAR32 = FUN10(VAR5);

 if(VAR32 != VAR103)
 return VAR32;

                VAR32 = FUN11(VAR5, VAR2, VAR18);
 if(VAR32 != VAR103)
 return VAR32;
#if VAR112
                FUN12("");
#endif
 return VAR113;
 }
 else
 {
                VAR32 = FUN11(VAR5, VAR2, VAR18);
 if(VAR32 != VAR103)
 return VAR32;
 }

 }
 }

 if(VAR19)
 {
        VAR5->VAR95 = VAR18;
 }

 if(VAR13->VAR114)
 {
        WORD32 VAR115;
        WORD32 VAR116, VAR117;

 if(!VAR13->VAR19) 
 {
            VAR116 = VAR5->VAR118->VAR119;
            VAR117 =
                            VAR5->VAR118->VAR120;
            VAR115 = FUN13(VAR116,
                                     VAR117);
 }
 else if(!VAR13->VAR23)
            VAR115 = VAR5->VAR118->VAR119;
 else
            VAR115 = VAR5->VAR118->VAR120;

        VAR5->VAR118->VAR119 = VAR115
 - VAR5->VAR118->VAR119;
        VAR5->VAR118->VAR120 = VAR115
 - VAR5->VAR118->VAR120;
        VAR5->VAR118->VAR16 = VAR115;
        VAR5->VAR118->VAR121 = VAR115;
 }
 if(VAR5->VAR49 == 2)
 {
        VAR32 = FUN14(VAR2, VAR18,
 &VAR5->VAR122,
 &VAR14, VAR13, VAR9,
                                          VAR3,
                                          VAR23,
                                          VAR19, &VAR16);
 if(VAR32 != VAR103)
 return VAR32;
 
 if(VAR16 >= VAR5->VAR123)
            VAR5->VAR123 = VAR16;
 
 if(VAR16 == 0)
 {
            VAR5->VAR124 = VAR5->VAR124
 + VAR5->VAR123
 + VAR5->VAR125 + 1;
            VAR5->VAR123 = 0;
 }
 }

 
 
 
 
 
    VAR13->VAR84[0] = VAR15[0];
    VAR13->VAR84[1] = VAR15[1];
    VAR13->VAR22 = VAR22;
    VAR13->VAR17 = VAR17;
    VAR13->VAR19 = VAR19;
    VAR13->VAR23 = VAR23;
    VAR13->VAR21 = VAR21;
    VAR13->VAR79 = VAR14.VAR79;

    VAR13->VAR25 = VAR25;
    VAR13->VAR20 = VAR20;
    VAR13->VAR3 = VAR3;
    VAR13->VAR24 = VAR24;

 if(VAR11->VAR70)
        VAR13->VAR126 =
                        VAR11->VAR126;
 else
        VAR13->VAR126 = 1;

 if(VAR21 == VAR127)
 {
        VAR13->VAR128 = FUN5(
                        VAR7);
        FUN3("",
                        VAR13->VAR128);

 if(VAR13->VAR128)
            VAR13->VAR129 = VAR130;
 else
            VAR13->VAR129 = VAR131;
 if(!((VAR9->VAR68->VAR94) && (!VAR19)))
            VAR5->VAR132 = VAR133;
 }
 else
 {
 if(!((VAR9->VAR68->VAR94) && (!VAR19)))
            VAR5->VAR132 = VAR134;
 }

 if(VAR5->VAR49 == 2)
 {
 if(VAR17 == 0)
 {
            VAR32 = FUN15(VAR5, VAR16, &VAR14, VAR18, VAR9);
 if(VAR32 != VAR103)
 return VAR32;
 }

        VAR5->VAR135 = 0;

 {
            FUN16(VAR5,
                                          VAR5->VAR136,
 &(VAR5->VAR137));
 

 if(0 != VAR5->VAR137.VAR138)
 {
                VAR5->VAR139 = VAR5->VAR140.VAR141;
 }
 else
                VAR5->VAR135 = 1;
 }
 if(VAR5->VAR106 == 1)
 {
 if(VAR5->VAR142 == 0)
 {
                FUN17(VAR5->VAR143, NULL,
 (void *)VAR144,
 (void *)VAR5);

                VAR5->VAR142 = 1;
 }

 if((VAR5->VAR145 == 3) &&
 ((VAR5->VAR146 == 0) || VAR5->VAR147)
 && (VAR5->VAR148 == 0))
 {
                VAR5->VAR149 = 0;
                FUN17(VAR5->VAR150, NULL,
 (void *)VAR151,
 (void *)VAR5);
                VAR5->VAR148 = 1;
 }
 }

 }

 
 {
        UWORD8 VAR152;



        VAR152 = ((VAR5->VAR13->VAR19 == 0)
 && (VAR5->VAR13->VAR47 == 0)
 && (VAR21 != VAR127)
 && (VAR5->VAR153->VAR154 == 0));

 

 if(VAR152)
 {
            VAR5->VAR155 = VAR156;
            VAR5->VAR157 = VAR158;
 }
 else
 {
            VAR5->VAR155 = VAR159;
            VAR5->VAR157 = VAR160;
 }


 }

 
 {
 VAR161 * VAR162 = VAR5->VAR90;
 if(VAR162->VAR163 == VAR18)
 {
            VAR162->VAR91 = VAR164;
            VAR162->VAR163 = VAR165;
 }
        VAR162->VAR166 = VAR18;
 }

 
 {
        WORD32 VAR167, VAR168;

        VAR167 = (VAR5->VAR169 & VAR170)
 && (VAR127 == VAR21) && (0 == VAR3);

        VAR168 = (VAR5->VAR169 & VAR171)
 && (VAR172 == VAR21) && (0 == VAR3);

 
 
 
 
 
 if(VAR167)
 {
            VAR5->VAR118->VAR173 |= VAR170;
 
 
            VAR5->VAR111 = 1;

 return VAR103;
 }
 
 
 
 
 
 if(VAR168)
 {
            VAR5->VAR118->VAR173 |= VAR171;
 
 
            VAR5->VAR111 = 1;

 return VAR103;
 }
 }

 {
        UWORD16 VAR174, VAR175;

        VAR5->VAR176 = ((VAR17
 << VAR13->VAR47) * VAR177)
 - VAR177;
 if(VAR17)
 {
            UWORD8 VAR178;
            UWORD8 VAR179;
            UWORD16 VAR45;
            VAR45 = VAR11->VAR45;
            VAR178 = VAR13->VAR47;
            VAR179 = VAR13->VAR19;

 {
                UWORD32 VAR180;
                UWORD32 VAR181;
                UWORD32 VAR182;
 VAR183 *VAR184; 

 if(VAR5->VAR106)
 {
                    VAR184 = &VAR5->VAR185;
 }
 else
 {
                    VAR184 = &VAR5->VAR186;
 }
                VAR174 = FUN18(VAR17, VAR45);
                VAR175 = FUN19(VAR17, VAR45);

                VAR175 <<= VAR178;

 if((VAR174 > VAR45 - 1)
 || (VAR175 > VAR5->VAR44 - 1))
 {
 return VAR46;
 }

                VAR182 = VAR5->VAR187 << VAR179;
                VAR180 = VAR174 << 4;
                VAR181 = (VAR175 * VAR182) << 4;

                VAR184->VAR188 = VAR5->VAR189.VAR190 + VAR180
 + VAR181;

                VAR182 = VAR5->VAR191 << VAR179;
                VAR180 >>= 1;
                VAR181 = (VAR175 * VAR182) << 3;

                VAR180 *= VAR192;

                VAR184->VAR193 = VAR5->VAR189.VAR194 + VAR180
 + VAR181;
                VAR184->VAR195 = VAR5->VAR189.VAR196 + VAR180
 + VAR181;

                VAR184->VAR197 = VAR184->VAR188;
                VAR184->VAR198 = VAR184->VAR193;
                VAR184->VAR199 = VAR184->VAR195;


 
 if(VAR5->VAR106 == 1)
 {
                    VAR5->VAR200 = VAR5->VAR201
 + (VAR17 << VAR178);
 }
 else
 {
                        VAR5->VAR200 = VAR5->VAR201
 + (VAR17 << VAR178);
 }

                VAR5->VAR48 = (VAR17 << VAR178);

                VAR5->VAR202 = VAR5->VAR189.VAR203
 + ((VAR17 << VAR178) << 4);
 }
 }
 else
 {
 VAR183 *VAR184;

 if(VAR5->VAR106)
 {
                VAR184 = &VAR5->VAR185;
 }
 else
 {
                VAR184 = &VAR5->VAR186;
 }

            VAR174 = 0xffff;
            VAR175 = 0;
 
            VAR5->VAR48 = 0;
            VAR5->VAR200 = VAR5->VAR201;
            VAR5->VAR202 = VAR5->VAR189.VAR203;
            VAR184->VAR188 = VAR5->VAR189.VAR190;
            VAR184->VAR193 = VAR5->VAR189.VAR194;
            VAR184->VAR195 = VAR5->VAR189.VAR196;

            VAR184->VAR197 = VAR184->VAR188;
            VAR184->VAR198 = VAR184->VAR193;
            VAR184->VAR199 = VAR184->VAR195;

 }

        VAR5->VAR204 = VAR5->VAR205;

        VAR5->VAR206 =
 (FUN18(VAR17 - 1, VAR11->VAR45));
        VAR5->VAR207 =
 (FUN19(VAR17 - 1, VAR11->VAR45));
        VAR5->VAR207 <<= VAR13->VAR47;
        VAR5->VAR208 = VAR5->VAR206;
        VAR5->VAR209 = VAR5->VAR207;
 }

 
    VAR7->VAR210 += VAR5->VAR153->VAR211;

    VAR5->VAR212 = (VAR21 == VAR127);
    VAR5->VAR213 = 0;

    VAR5->VAR104->VAR214 =
                    VAR5->VAR13->VAR17;
    VAR5->VAR104->VAR215 =
                    VAR5->VAR13->VAR21;


    VAR5->VAR149 = 1;
 {
        WORD32 VAR216;
        WORD32 VAR217;
        VAR72 *VAR218;

        VAR216 = FUN13(VAR219, VAR5->VAR220);
        VAR216 = 2 * ((2 * VAR216) + 1);

        VAR217 = VAR216 * sizeof(void *);
        VAR217 += VAR221 * sizeof(void *);

        VAR218 = (VAR72 *)VAR5->VAR222;
        VAR218 += VAR217 * VAR5->VAR105;
        VAR5->VAR104->VAR223 = ( void *)VAR218;
 }

 if(VAR5->VAR106)
 {
        VAR5->VAR104->VAR224 = VAR5->VAR225;
 }
 else
 {
        VAR5->VAR226 = VAR5->VAR225;
 }

 if(VAR21 == VAR59)
 {
        VAR5->VAR118->VAR173 |= VAR227;

        VAR32 = FUN20(VAR5, VAR17);

 if(VAR5->VAR228 != VAR127 && VAR5->VAR228 != VAR172)
            VAR5->VAR228 = VAR59;

 }
 else if(VAR21 == VAR172)
 {
        VAR5->VAR118->VAR173 |= VAR171;
        VAR32 = FUN21(VAR5, VAR17);
        VAR5->VAR229 = VAR21;
 if(VAR5->VAR228 != VAR127)
            VAR5->VAR228 = VAR172;
 }
 else if(VAR21 == VAR127)
 {
        VAR5->VAR118->VAR173 |= VAR170;
        VAR32 = FUN22(VAR5, VAR17);
        VAR5->VAR229 = VAR21;
        VAR5->VAR228 = VAR127;
 }
 else
 return VAR50;

 if(VAR5->VAR108)
 {
 
 
        VAR5->VAR49 = 0;
        VAR5->VAR88 = 0;
 }

 if(VAR32 != VAR103)
 return VAR32;

 
    VAR5->VAR208 = VAR5->VAR206;
    VAR5->VAR209 = VAR5->VAR207;

 

 if(VAR5->VAR97 >= (VAR11->VAR110 + 1))
 {
        VAR5->VAR230 = 1;

 }

 {
 VAR161 * VAR162 = VAR5->VAR90;
 if((VAR162->VAR91 & VAR231)
 && (VAR162->VAR232 == VAR233))
 {
            VAR162->VAR91 = VAR164;
 }
 }

    FUN23(VAR5)

 return VAR32;
}