OMX_ERRORTYPE VAR1::FUN1(OMX_STRING VAR2)
{

    OMX_ERRORTYPE VAR3 = VAR4;
 struct v4l2_fmtdesc VAR5;
 struct v4l2_format VAR6;
 struct v4l2_requestbuffers VAR7;
 struct v4l2_control VAR8;
 struct v4l2_frmsizeenum VAR9;
 unsigned int   VAR10 = 0,VAR11 = 0;
 int VAR12[2];
 int VAR13,VAR14=0;
 bool VAR15 = false;
    OMX_STRING VAR16 = (VAR17)"";
 char VAR18[VAR19] = {0};

#ifdef VAR20
 char VAR21[VAR19];
    FUN2("", VAR21, "");
 if (!FUN3(VAR21, "", 7)) {
        VAR16 = (VAR17)"";
        VAR22 = true;
        VAR23 = 1280;
        VAR24 = 720;
 }
#endif

#ifdef VAR20
 
    VAR25 = false;
    FUN2("", VAR18, "");
 if (FUN4(VAR18)) {
        FUN5("");
        VAR25 = true;
 }
#endif

 if (!FUN3(VAR2, "",
                VAR26)) {
        VAR27 = true;
        VAR25 = false;
        VAR2 = (VAR17)"";
 } else if (!FUN3(VAR2, "",
                VAR26)) {
        VAR27 = true;
        VAR25 = false;
        VAR2 = (VAR17)"";
 } else if (!FUN3(VAR2, "",
                VAR26)) {
        VAR27 = true;
        VAR25 = false;
        VAR2 = (VAR17)"";
 } else if (!FUN3(VAR2, "",
                VAR26)) {
        VAR27 = true;
        VAR25 = false;
        VAR2 = (VAR17)"";
 } else if (!FUN3(VAR2, "",
                VAR26)) {
        VAR27 = true;
        VAR25 = false;
        VAR2 = (VAR17)"";
 } else if (!FUN3(VAR2, "",
                VAR26)) {
        VAR27 = true;
        VAR25 = false;
        VAR2 = (VAR17)"";
 }

    VAR28.VAR29 = open(VAR16, VAR30);

    FUN6("", VAR2, VAR28.VAR29);

 if (VAR28.VAR29 == 0) {
        FUN7("");
        VAR28.VAR29 = open(VAR16, VAR30);
        close(0);
 }

 if (VAR28.VAR29 < 0) {
        FUN7("", VAR31);
 return VAR32;
 }
    VAR28.VAR33.VAR34 = VAR35;
    VAR28.VAR33.VAR36 = 1;

    VAR14 = FUN8(VAR28.VAR29);
 if (!VAR14) {
        VAR37 = true;
        VAR14 = FUN9(&VAR38,0,VAR39,this);
 }
 if (VAR14) {
        FUN7("");
        VAR37 = false;
 return VAR32;
 }

#ifdef VAR40
    VAR41 = fopen (VAR42, "");
#endif

 
    FUN10(VAR28.VAR43,VAR2,128);

 if (!FUN3(VAR28.VAR43,"",\
                VAR26)) {
        FUN10((char *)VAR44, "",\
                VAR26);
        VAR28.VAR45 = true;
        VAR28.VAR46 = VAR47;
        VAR48 = VAR49;
        VAR50=VAR51;
 
        VAR52 = VAR53;
        VAR54.FUN11 (VAR52);
 } else if (!FUN3(VAR28.VAR43,"",\
                VAR26)) {
        FUN10((char *)VAR44, "",\
                VAR26);
        VAR28.VAR46 = VAR55;
        VAR50 = VAR56;
        VAR48 = VAR57;
 
        VAR52 = VAR58;
        VAR54.FUN11 (VAR52);
 } else if (!FUN3(VAR28.VAR43, "",\
                VAR26)) {
        FUN10((char *)VAR44, "",VAR26);
        FUN12("");
        VAR28.VAR46 = VAR59;
        VAR48 = VAR60;
        VAR50 = VAR61;
        VAR52 = VAR62;
        VAR54.FUN11 (VAR52);
 } else if (!FUN3(VAR28.VAR43, "",\
                VAR26)) {
        FUN10((char *)VAR44, "",VAR26);
        FUN12 ("");
        VAR28.VAR46 = VAR63;
        VAR50 = VAR64;
        VAR48 = (VAR65)VAR66;
        VAR52 = VAR67;
        VAR54.FUN11 (VAR52);

        VAR3 = FUN13();
 if (VAR3 != VAR4) {
            FUN7("");
 return VAR3;
 }
 } else if (!FUN3(VAR28.VAR43, "",\
                VAR26)) {
        FUN10((char *)VAR44, "",VAR26);
        FUN7 ("");
        VAR28.VAR46 = VAR68;
        VAR50 = VAR69;
        VAR48 = (VAR65)VAR66;
        VAR52 = VAR67;
        VAR15 = true;
        VAR54.FUN11 (VAR52);

        VAR3 = FUN13();
 if (VAR3 != VAR4) {
            FUN7("");
 return VAR3;
 }
 } else if (!FUN3(VAR28.VAR43, "",\
                VAR26)) {
        FUN10((char *)VAR44, "",VAR26);
        FUN7 ("");
        VAR28.VAR46 = VAR70;
        VAR50 = VAR69;
        VAR48 = (VAR65)VAR66;
        VAR52 = VAR67;
        VAR15 = true;
        VAR54.FUN11 (VAR52);

        VAR3 = FUN13();
 if (VAR3 != VAR4) {
            FUN7("");
 return VAR3;
 }

 } else if (!FUN3(VAR28.VAR43, "",\
                VAR26)) {
        FUN10((char *)VAR44, "",VAR26);
        VAR28.VAR46 = VAR71;
        VAR50=VAR72;
        VAR48 = VAR73;
        VAR52 = VAR74;
        VAR54.FUN11 (VAR52);
        VAR54.FUN14(VAR75);
 } else if (!FUN3(VAR28.VAR43, "",\
                VAR26)) {
        FUN10((char *)VAR44, "", VAR26);
        VAR28.VAR46 = VAR76;
        VAR50 = VAR77;
        VAR48 = (VAR65)VAR78;
        VAR52 = VAR74;
        VAR54.FUN11(VAR52);
        VAR54.FUN14(VAR75);
 } else if (!FUN3(VAR28.VAR43, "",\
                VAR26)) {
        FUN10((char *)VAR44, "",VAR26);
        VAR28.VAR46 = VAR79;
        VAR50 = VAR80;
        VAR48 = (VAR65)VAR81;
        VAR52 = VAR82;
        VAR54.FUN11(VAR52);
        VAR54.FUN14(VAR75);
 } else if (!FUN3(VAR28.VAR43, "",\
                VAR26)) {
        FUN10((char *)VAR44, "",VAR26);
        VAR28.VAR46 = VAR83;
        VAR48 = VAR84;
        VAR52 = VAR85;
        VAR50 = VAR86;
        VAR54.FUN11 (VAR52);
 } else if (!FUN3(VAR28.VAR43, "",\
                VAR26)) {
        FUN10((char *)VAR44, "",VAR26);
        VAR28.VAR46 = VAR87;
        VAR48 = VAR84;
        VAR52 = VAR85;
        VAR50 = VAR88;
        VAR54.FUN11 (VAR52);
 } else if (!FUN3(VAR28.VAR43, "",    \
                VAR26)) {
        FUN10((char *)VAR44, "",VAR26);
        VAR50=VAR89;
        VAR48 = VAR90;
        VAR52 = VAR91;
        VAR25 = false;

 } else {
        FUN7("");
        VAR3 = VAR92;
 }
 if (VAR3 == VAR4) {
        OMX_COLOR_FORMATTYPE VAR93;
        VAR28.VAR94 = VAR95;
 if (VAR48 == (VAR65)VAR78)
            VAR93 = (VAR96)
                VAR97;
 else
            VAR93 = (VAR96)
            VAR98;
 if (!VAR99.FUN15(VAR93)) {
            FUN7("");
            VAR3 = VAR32;
 }

        VAR100= VAR101;

 struct v4l2_capability VAR102;
        VAR14 = FUN16(VAR28.VAR29, VAR103, &VAR102);
 if (VAR14) {
            FUN7("");
 
 } else {
            FUN6(""
 "", VAR102.VAR104, VAR102.VAR105,
                    VAR102.VAR106, VAR102.VAR107, VAR102.VAR108);
 }
        VAR14=0;
        VAR5.VAR109=VAR110;
        VAR5.VAR111=0;
 while (FUN16(VAR28.VAR29, VAR112, &VAR5) == 0) {
            FUN5("", VAR5.VAR113,
                    VAR5.VAR114, VAR5.VAR115);
            VAR5.VAR111++;
 }
        VAR5.VAR109=VAR116;
        VAR5.VAR111=0;
 while (FUN16(VAR28.VAR29, VAR112, &VAR5) == 0) {

            FUN5("", VAR5.VAR113,
                    VAR5.VAR114, VAR5.VAR115);
            VAR5.VAR111++;
 }
        FUN17(320, 240, 320, 240);
        VAR6.VAR109 = VAR116;
        VAR6.VAR6.VAR117.VAR118 = VAR28.VAR119.VAR120;
        VAR6.VAR6.VAR117.VAR121 = VAR28.VAR119.VAR122;
        VAR6.VAR6.VAR117.VAR114 = VAR50;
        VAR14 = FUN16(VAR28.VAR29, VAR123, &VAR6);
 if (VAR14) {
 
            FUN7("");
 return VAR32;
 }
        FUN5("");
 if (VAR15) {
 if (VAR50 == VAR69) {
 struct v4l2_control VAR124;

 if (VAR28.VAR46 == VAR68) {
                    VAR124.VAR125 = VAR126;
 } else if (VAR28.VAR46 == VAR127) {
                    VAR124.VAR125 = VAR128;
 } else {
                    VAR124.VAR125 = VAR129;
 }

                VAR124.VAR130 = VAR131;
                VAR14 = FUN16(VAR28.VAR29, VAR132, &VAR124);
 if (VAR14) {
                    FUN7("");
 }
 } else {
                FUN7("");
 }
 }

        FUN2("", VAR18, VAR133);
        VAR134= FUN4(VAR18);
        FUN5("", (unsigned int)VAR134);
        VAR8.VAR130 = VAR135;
        VAR8.VAR125 = VAR134;
        VAR14 = FUN16(VAR28.VAR29, VAR132, &VAR8);
 if (VAR14) {
            FUN7("", VAR14);
 }

 
        memset((void *)&VAR9,0,sizeof(VAR9));
        VAR9.VAR111 = 0;
        VAR9.VAR136 = VAR50;
        VAR14 = FUN16(VAR28.VAR29,
                VAR137, &VAR9);
 if (VAR14 || VAR9.VAR109 != VAR138) {
            FUN7("");
 return VAR139;
 }

 if (VAR9.VAR109 == VAR138) {
            VAR140.VAR141 = VAR9.VAR142.VAR141;
            VAR140.VAR143 = VAR9.VAR142.VAR143;
            VAR140.VAR144 = VAR9.VAR142.VAR144;
            VAR140.VAR145 = VAR9.VAR142.VAR145;
 }

        memset(&VAR6, 0x0, sizeof(struct VAR146));
        VAR6.VAR109 = VAR110;
        VAR6.VAR6.VAR117.VAR118 = VAR28.VAR119.VAR120;
        VAR6.VAR6.VAR117.VAR121 = VAR28.VAR119.VAR122;
        VAR6.VAR6.VAR117.VAR114 = VAR100;
        VAR14 = FUN16(VAR28.VAR29, VAR123, &VAR6);
 if (VAR14) {
 
            FUN7("");
 }
        memset(&VAR147, 0, sizeof(VAR148));
        VAR147.VAR149 = VAR28.VAR119.VAR122;
        VAR147.VAR150 = VAR28.VAR119.VAR120;

        memset(&VAR151, 0, sizeof(VAR152));
        VAR151.VAR149 = VAR28.VAR119.VAR122;
        VAR151.VAR150 = VAR28.VAR119.VAR120;

        FUN5("");
 if (VAR27) {
            VAR8.VAR130 = VAR153;
            VAR8.VAR125 = 1;
            FUN12("", VAR14);
            VAR14=FUN16(VAR28.VAR29, VAR132,&VAR8);
 if (VAR14) {
                FUN7("", VAR14);
 return VAR32;
 }
 }
 if (VAR50 == VAR77) {
            VAR8.VAR130 = VAR154;
            VAR8.VAR125 = VAR155;
            VAR14=FUN16(VAR28.VAR29, VAR132,&VAR8);
 if (VAR14) {
                FUN7("");
 return VAR32;
 }
 }

 
        VAR28.VAR156.VAR157 = VAR158;
        VAR28.VAR159.VAR157 = VAR160;
 if (VAR27) {
            VAR28.VAR159.VAR10=VAR161;
            VAR28.VAR156.VAR10=VAR161;
 } else {
            VAR28.VAR159.VAR10=VAR162;
            VAR28.VAR156.VAR10=VAR162;
 }
        VAR28.VAR163 = VAR164;
        VAR28.VAR165 = 0;
        VAR28.VAR166 = VAR167;
        VAR8.VAR130 = VAR168;
        VAR8.VAR125 = VAR169;
        VAR14 = FUN16(VAR28.VAR29, VAR132, &VAR8);
        VAR28.VAR170 = 0;

        FUN2("", VAR18, "");
 if (FUN4(VAR18)) {
            FUN5("");
            VAR8.VAR130 = VAR171;
            VAR8.VAR125 = VAR172;
 if (FUN16(VAR28.VAR29, VAR132, &VAR8)) {
                FUN7("");
 }
 }

        VAR173 = VAR174;
#ifdef VAR175
 if (!FUN3(VAR28.VAR43, "", VAR26) &&
 (VAR3 == VAR4)) {
                FUN6("", VAR28.VAR43);
                FUN18(VAR175, true, true);
 }
#endif
        VAR3=FUN19(&VAR28.VAR156);
        FUN5("",(unsigned int)VAR28.VAR156.VAR11);
        FUN19(&VAR28.VAR159);
 if (VAR28.VAR46 == VAR71 ||
                VAR28.VAR46 == VAR79 ||
                VAR28.VAR46 == VAR76) {
                    VAR176.VAR177 = VAR28.VAR156.VAR11;
                    VAR176.VAR178 = (VAR179 *)malloc (VAR28.VAR156.VAR11);
                    VAR176.VAR180 = 0;
                    VAR176.VAR181 = 0;

 if (VAR176.VAR178 == NULL) {
                        FUN7("");
 return VAR32;
 }
 }
 if (VAR28.VAR46 == VAR71 ||
            VAR28.VAR46 == VAR76) {
 if (VAR54.VAR182 == NULL) {
                VAR54.VAR182 = new FUN20();
 if (VAR54.VAR182 == NULL) {
                    FUN7("");
                    VAR3 = VAR32;
 } else {
                    VAR54.VAR182->FUN21();
                    VAR54.VAR182->FUN22 (VAR28.VAR156.VAR11);
 }
 }

            VAR183 = new FUN23();
 if (!VAR183) {
                FUN7("");
                VAR3 = VAR32;
 }
 }

 if (FUN24(VAR12)) {
            FUN7("");
            VAR3 = VAR32;
 } else {
 int VAR184[2];
 if (VAR12[0] == 0 || VAR12[1] == 0) {
 if (FUN24 (VAR184)) {
                    FUN7("");
 return VAR32;
 }
 
 
                VAR12[0] = VAR184 [0];
                VAR12[1] = VAR184 [1];
 }
            VAR185 = VAR12[0];
            VAR186 = VAR12[1];
            VAR187 = true;
            VAR13 = FUN9(&VAR188,0,VAR189,this);

 if (VAR13 < 0) {
                FUN7("");
                VAR187 = false;
                VAR3 = VAR32;
 }
 }
 }

 if (VAR3 != VAR4) {
        FUN7("");
 } else {
        FUN6("",
                VAR28.VAR29);
 }
 
    VAR8.VAR130 = VAR190;
    VAR8.VAR125 = VAR191;

 if (FUN16(VAR28.VAR29, VAR132, &VAR8)) {
        FUN7("");
        VAR3 = VAR192;
 }
 return VAR3;
}