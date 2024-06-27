OMX_ERRORTYPE  VAR1::FUN1(OMX_IN OMX_HANDLETYPE     VAR2,
        OMX_IN OMX_INDEXTYPE VAR3,
        OMX_IN OMX_PTR        VAR4)
{
    OMX_ERRORTYPE VAR5 = VAR6;
 int VAR7=0;
 struct v4l2_format VAR8;
#ifdef VAR9
 char VAR10[VAR11] = {0};
#endif
 if (VAR12 == VAR13) {
        FUN2("");
 return VAR14;
 }
 if (VAR4 == NULL) {
        FUN2("");
 return VAR15;
 }
 if ((VAR12 != VAR16) &&
            FUN3(&VAR17,VAR18) &&
 (VAR19 == VAR20) &&
            FUN3(&VAR17, VAR21) &&
 (VAR22 == VAR20)) {
        FUN2("");
 return VAR23;

     }
     switch ((unsigned long)VAR3) {
         case VAR24: {


                                VAR25 *VAR26;
                                VAR26 = (VAR25 *) VAR4;
                                
 
                               FUN4("",
 (int)VAR26->VAR27.VAR28.VAR29,
 (int)VAR26->VAR27.VAR28.VAR30);
 if (VAR31 == VAR26->VAR32) {
                                   FUN4("");
 bool VAR33 = false;
                                   VAR34 = VAR26->VAR27.VAR28.VAR35;
 unsigned int VAR36;
 
 if (VAR37) {
                                       FUN4("",
 (unsigned int)VAR26->VAR27.VAR28.VAR30,
 (unsigned int)VAR26->VAR27.VAR28.VAR29);
 if (VAR26->VAR27.VAR28.VAR29 != 0x0 &&
                                               VAR26->VAR27.VAR28.VAR30 != 0x0) {
                                           memset(&VAR8, 0x0, sizeof(struct VAR38));
                                           VAR8.VAR39 = VAR40;
                                           VAR8.VAR8.VAR41.VAR42 = VAR43;
                                           VAR7 = FUN5(VAR44.VAR45, VAR46, &VAR8);
 if (VAR7) {
                                               FUN2("");
                                               VAR5 = VAR47;
 break;
 }
 if ((VAR26->VAR27.VAR28.VAR29 != (unsigned int)VAR8.VAR8.VAR41.VAR48) ||
 (VAR26->VAR27.VAR28.VAR30 != (unsigned int)VAR8.VAR8.VAR41.VAR49)) {
                                                   VAR33 = true;
 }
                                           FUN6(VAR26->VAR27.VAR28.VAR30,
                                                   VAR26->VAR27.VAR28.VAR29,
                                                   VAR26->VAR27.VAR28.VAR30,
                                                   VAR26->VAR27.VAR28.VAR29);

 
                                           VAR50.VAR51 = 0;
                                           VAR50.VAR52 = 0;
                                           VAR50.VAR53 = VAR26->VAR27.VAR28.VAR30;
                                           VAR50.VAR54 = VAR26->VAR27.VAR28.VAR29;

                                           VAR5 = FUN7();
 if (VAR5)
 break;
                                           memset(&VAR8, 0x0, sizeof(struct VAR38));
                                           VAR8.VAR39 = VAR40;
                                           VAR8.VAR8.VAR41.VAR48 = VAR44.VAR55.VAR56;
                                           VAR8.VAR8.VAR41.VAR49 = VAR44.VAR55.VAR57;
                                           VAR8.VAR8.VAR41.VAR42 = VAR43;
                                           FUN4("",
                                               VAR8.VAR8.VAR41.VAR48, VAR8.VAR8.VAR41.VAR49);
                                           VAR7 = FUN5(VAR44.VAR45, VAR58, &VAR8);
 if (VAR7) {
                                               FUN2("");
                                               VAR5 = VAR59;
 } else
                                               VAR5 = FUN8(&VAR44.VAR60);
 }

 if (VAR5) {
 break;
 }

 if (VAR61) {
 struct v4l2_control VAR62;
                                           VAR62.VAR63 = VAR64;
 if (FUN5(VAR44.VAR45, VAR65, &VAR62) < 0) {
                                               FUN2("", VAR66, VAR62.VAR63);
                                               VAR5 = VAR47;
 } else {
 
                                               OMX_U32 VAR67, VAR68;
 if (VAR44.VAR69 == VAR70) {
                                                   VAR67 = FUN9(VAR71, VAR26->VAR27.VAR28.VAR30);
                                                   VAR68 = FUN10(VAR71, VAR26->VAR27.VAR28.VAR29);
 } else {
                                                   VAR67 = VAR26->VAR27.VAR28.VAR30;
                                                   VAR68 = VAR26->VAR27.VAR28.VAR29;
 }

                                               FUN4("", VAR67, VAR68, VAR67 * VAR68);
                                               FUN4("", VAR62.VAR72);

 if (VAR67 * VAR68 <= (VAR73)VAR62.VAR72) {
                                                   VAR74 = true;
                                                   FUN11("");
                                                   VAR62.VAR63 = VAR75;
                                                   VAR62.VAR72 = 1;
 if (FUN5(VAR44.VAR45, VAR76, &VAR62) < 0) {
                                                       FUN2("");
                                                       VAR5 = VAR59;
 }
 }
 }
 }
 }

 if (VAR5) {
 break;
 }

 if (!VAR77.FUN8(VAR36)) {
                                       FUN2("");
                                       VAR5 = VAR15;
 } else if (!VAR33) {
 if ( VAR26->VAR78 >= VAR44.VAR60.VAR79 &&
                                               VAR26->VAR80 >=  VAR44.VAR60.VAR36 ) {
                                           VAR44.VAR60.VAR81 = VAR26->VAR78;
                                           VAR44.VAR60.VAR36 = VAR26->VAR80;
                                           VAR44.VAR82.VAR83 = VAR44.VAR60.VAR81;
                                           VAR44.VAR82.VAR84 = VAR44.VAR82.VAR83 *
                                               VAR44.VAR82.VAR36;
                                           VAR5 = FUN12(&VAR44.VAR60);
 if (VAR5 == VAR6)
                                               VAR85 = *VAR26;
 } else {
                                           FUN2("",
                                                   VAR44.VAR60.VAR79, (unsigned int)VAR44.VAR60.VAR36,
 (unsigned int)VAR26->VAR78, (unsigned int)VAR26->VAR80);
                                           VAR5 = VAR15;
 }
 }
 } else if (VAR86 == VAR26->VAR32) {
                                   FUN4("");
 bool VAR33 = false;
 if ((VAR26->VAR27.VAR28.VAR87 >> 16) > 0 &&
 (VAR26->VAR27.VAR28.VAR87 >> 16) <= VAR88) {
 
 
 
                                       FUN11("",
 (unsigned int)VAR26->VAR27.VAR28.VAR87 >> 16);
                                       FUN13(VAR26->VAR27.VAR28.VAR87, VAR44.VAR89.VAR90,
                                               VAR44.VAR89.VAR91);
 if (!VAR44.VAR89.VAR90) {
                                           FUN2("");
                                           VAR44.VAR89.VAR90 = 30;
 }
 if (VAR44.VAR89.VAR91)
                                           VAR44.VAR89.VAR90 = (int)
                                               VAR44.VAR89.VAR90 / VAR44.VAR89.VAR91;
                                       VAR44.VAR89.VAR91 = 1;
                                       VAR92 = VAR44.VAR89.VAR91 * 1e6 /
                                           VAR44.VAR89.VAR90;
                                       FUN4("",
 (unsigned int)VAR92, VAR44.VAR89.VAR90 /
 (float)VAR44.VAR89.VAR91);

 struct v4l2_outputparm VAR93;
 
                                       VAR93.VAR94.VAR95 = VAR44.VAR89.VAR91;
                                       VAR93.VAR94.VAR96 = VAR44.VAR89.VAR90;

 struct v4l2_streamparm VAR97;
                                       VAR97.VAR39 = VAR98;
                                       VAR97.VAR99.VAR100 = VAR93;
 if (FUN5(VAR44.VAR45, VAR101, &VAR97)) {
                                           FUN2("");
                                           VAR5 = VAR47;
 break;
 }
 
 }

 if (VAR44.VAR55.VAR56 !=
                                           VAR26->VAR27.VAR28.VAR29 ||
                                           VAR44.VAR55.VAR57  !=
                                           VAR26->VAR27.VAR28.VAR30) {
                                       FUN4("",
 (unsigned int)VAR26->VAR27.VAR28.VAR30,
 (unsigned int)VAR26->VAR27.VAR28.VAR29);
                                       VAR33 = true;
                                       OMX_U32 VAR102 = VAR26->VAR27.VAR28.VAR30;
                                       OMX_U32 VAR103 = VAR26->VAR27.VAR28.VAR29;
 if (VAR103 != 0x0 && VAR102 != 0x0) {
 if (VAR104 &&
 ((VAR102 * VAR103) <
 (VAR105 * VAR106))) {
                                               VAR102 = VAR105;
                                               VAR103 = VAR106;
                                               FUN4(""
 "",
 (unsigned int)VAR102, (unsigned int)VAR103);
 }
                                           FUN6(VAR102, VAR103,
                                                   VAR102, VAR103);
                                           VAR5 = FUN7();
 if (VAR5)
 break;
                                           memset(&VAR8, 0x0, sizeof(struct VAR38));
                                           VAR8.VAR39 = VAR98;
                                           VAR8.VAR8.VAR41.VAR48 = VAR44.VAR55.VAR56;
                                           VAR8.VAR8.VAR41.VAR49 = VAR44.VAR55.VAR57;
                                           VAR8.VAR8.VAR41.VAR42 = VAR107;
                                           FUN4("",VAR8.VAR8.VAR41.VAR48,VAR8.VAR8.VAR41.VAR49);
                                           VAR7 = FUN5(VAR44.VAR45, VAR58, &VAR8);
 if (VAR7) {
                                               FUN2("");
                                               VAR5 = VAR59;
 } else {
 if (!VAR37)
                                               VAR5 = FUN8(&VAR44.VAR60);
 }
 }
 }
 if (VAR108.VAR109
 && (VAR26->VAR80 > VAR108.VAR109)) {
                                       FUN2("",
                                               VAR108.VAR109, VAR26->VAR80);
                                       VAR5 = VAR15;
 break;
 }
 if (VAR26->VAR78 >= VAR44.VAR110.VAR79
 || VAR26->VAR80 != VAR44.VAR110.VAR36) {
                                       VAR33 = true;
                                       VAR111 *VAR112 = &VAR44.VAR110;
                                       VAR44.VAR110.VAR81 = VAR26->VAR78;
                                       VAR44.VAR110.VAR36 = (VAR26->VAR80 + VAR112->VAR113 - 1) &
 (~(VAR112->VAR113 - 1));
                                       VAR5 = FUN12(VAR112);
 }
 if (false == VAR33) {
                                       FUN2("",
                                               VAR44.VAR110.VAR79, (unsigned int)VAR44.VAR110.VAR36,
 (unsigned int)VAR26->VAR78, (unsigned int)VAR26->VAR80);
                                       VAR5 = VAR15;
 }
 } else if (VAR26->VAR32 ==  VAR114) {
                                   FUN2("",
 (int)VAR26->VAR115);
                                   VAR5 = VAR116;
 }

                            }
                            break;
         case VAR117: {


                                 VAR118 *VAR119 =
                                     (VAR118 *)VAR4;
                                 int VAR7=0;
 struct v4l2_format VAR8;
                                FUN4("",
                                        VAR119->VAR120, (unsigned int)VAR119->VAR115);

                                memset(&VAR8, 0x0, sizeof(struct VAR38));
 if (1 == VAR119->VAR115) {
                                    VAR8.VAR39 = VAR40;
                                    VAR8.VAR8.VAR41.VAR48 = VAR44.VAR55.VAR56;
                                    VAR8.VAR8.VAR41.VAR49 = VAR44.VAR55.VAR57;
                                    VAR8.VAR8.VAR41.VAR42 = VAR43;
 enum vdec_output_fromat VAR121;
 if (VAR119->VAR120 == (VAR122)
                                                VAR123 ||
                                            VAR119->VAR120 == (VAR122)
                                                VAR124 ||
                                            VAR119->VAR120 == VAR125 ||
                                            VAR119->VAR120 == VAR126)
                                        VAR121 = (enum VAR127)VAR70;
 else
                                        VAR5 = VAR15;

 if (VAR5 == VAR6) {
                                        VAR44.VAR69 = VAR121;
                                        VAR7 = FUN5(VAR44.VAR45, VAR58, &VAR8);
 if (VAR7) {
                                            FUN2("");
                                            VAR5 = VAR59;
 
 } else {
                                            VAR5 = FUN8(&VAR44.VAR60);
 }
 }
 if (VAR5 == VAR6) {
 if (!VAR77.FUN14(VAR119->VAR120)) {
                                            FUN2("");
                                            VAR5 = VAR15;
 }
 }
 }
 }

                             break;
 
         case VAR128: {


                             VAR129 *VAR119 =
                                 (VAR129 *) VAR4;
                             FUN4("",
 (unsigned int)VAR119->VAR130);

 
 if (VAR119->VAR115 == 0) {
 if (VAR119->VAR130 == VAR131) {
 if (VAR61) {
                                        VAR132 = false;
                                        FUN2("");
                                        VAR5 = VAR59;
 } else {
                                        VAR132 = true;
 }
 } else if (VAR119->VAR130 ==
                                        VAR133) {
                                    VAR132 = false;
#ifdef VAR9
                                    FUN15("", VAR10, "");
 if (FUN16(VAR10)) {
                                        FUN11("");
                                        VAR132 = true;
 }
#endif
 } else {
                                    FUN2("",
 (unsigned int)VAR119->VAR130);
                                    VAR5 = VAR59;
 }
 } else if (VAR119->VAR115 == VAR134) {
                                FUN11("");
 if ( (VAR119->VAR135 > VAR136 &&
                                            VAR119->VAR135 < VAR137) &&
                                        VAR119->VAR138 == VAR139) {
                                    VAR140 = VAR20;
 if ((VAR140 && VAR141)) {
                                        FUN11("");
                                        VAR142 = VAR20;
 }
 }
 }
 }

                         break;
 
         case VAR143: {


                                   VAR144 *VAR145;
                                   VAR145 = (VAR144 *) VAR4;
                                   FUN4("",
                                          VAR145->VAR146);

 if ((VAR12 == VAR16)&&
 !FUN17(&VAR17,VAR147)) {
                                      FUN4("");
 } else {
                                      FUN2("");
 return VAR23;
 }

 if (!FUN18(VAR44.VAR148, "",VAR149)) {
 if (!FUN18((char*)VAR145->VAR146,"",VAR149)) {
                                          FUN19((char*)VAR150,"",VAR149);
 } else {
                                          FUN2("", VAR145->VAR146);
                                          VAR5 =VAR59;
 }
 } else if (!FUN18(VAR44.VAR148, "", VAR149)) {
 if (!FUN18((char*)VAR145->VAR146, "", VAR149)) {
                                          FUN19((char*)VAR150, "", VAR149);
 } else {
                                          FUN2("", VAR145->VAR146);
                                          VAR5 =VAR59;
 }
 } else if (!FUN18(VAR44.VAR148, "",VAR149)) {
 if (!FUN18((const char*)VAR145->VAR146,"",VAR149)) {
                                          FUN19((char*)VAR150,"",VAR149);
 } else {
                                          FUN2("", VAR145->VAR146);
                                          VAR5 = VAR59;
 }
 } else if (!FUN18(VAR44.VAR148, "",VAR149)) {
 if (!FUN18((const char*)VAR145->VAR146,"",VAR149)) {
                                          FUN19((char*)VAR150,"",VAR149);
 } else {
                                          FUN2("", VAR145->VAR146);
                                          VAR5 =VAR59;
 }
 } else if (!FUN18(VAR44.VAR148, "",VAR149)) {
 if (!FUN18((const char*)VAR145->VAR146,"",VAR149)) {
                                          FUN19((char*)VAR150,"",VAR149);
 } else {
                                          FUN2("", VAR145->VAR146);
                                          VAR5 = VAR59;
 }
 } else if ((!FUN18(VAR44.VAR148, "",VAR149)) ||
 (!FUN18(VAR44.VAR148, "", VAR149)) ||
 (!FUN18(VAR44.VAR148, "", VAR149))
 ) {
 if (!FUN18((const char*)VAR145->VAR146,"",VAR149)) {
                                          FUN19((char*)VAR150,"",VAR149);
 } else {
                                          FUN2("", VAR145->VAR146);
                                          VAR5 =VAR59;
 }
 } else if ( (!FUN18(VAR44.VAR148, "",VAR149)) ||
 (!FUN18(VAR44.VAR148, "",VAR149))
 ) {
 if (!FUN18((const char*)VAR145->VAR146,"",VAR149)) {
                                          FUN19((char*)VAR150,"",VAR149);
 } else {
                                          FUN2("", VAR145->VAR146);
                                          VAR5 =VAR59;
 }
 } else if (!FUN18(VAR44.VAR148, "",VAR149)) {
 if (!FUN18((const char*)VAR145->VAR146,"",VAR149) ||
 (!FUN18((const char*)VAR145->VAR146,"",VAR149))) {
                                          FUN19((char*)VAR150,"",VAR149);
 } else {
                                          FUN2("", VAR145->VAR146);
                                          VAR5 = VAR59;
 }
 } else if (!FUN18(VAR44.VAR148, "", VAR149)) {
 if (!FUN18((const char*)VAR145->VAR146, "", VAR149)) {
                                          FUN19((char*)VAR150, "", VAR149);
 } else {
                                          FUN2("", VAR145->VAR146);
                                          VAR5 = VAR59;
 }
 } else {
                                      FUN2("", VAR44.VAR148);
                                      VAR5 = VAR151;
 }
 break;

                               }
 
         case VAR152: {


                              if (VAR12 != VAR16) {
                                  FUN2("");
                                  return VAR23;
 }
                             VAR153 *VAR154 = (VAR153*) VAR4;
                             FUN4("",
 (unsigned int)VAR154->VAR155);

                             FUN4("",
 (unsigned int)VAR154->VAR156);

                             VAR157.VAR155 = VAR154->VAR155;
                             VAR157.VAR156 = VAR154->VAR156;

 break;

                          }
 
         case VAR158: {


                                    VAR159 *VAR160 = (VAR159*) VAR4;
                                    FUN4("",
                                            VAR160->VAR161);
 if (VAR160->VAR115 == 0 || VAR160->VAR115 ==1)
                                       VAR162.VAR161 = VAR160->VAR161;

 else

                                       VAR5 = VAR116;

 break;

 }
 case VAR163: {
                             FUN4("",
                                     VAR3);
 break;
 }
 case (VAR164)VAR165: {
                            FUN4("",
                                     VAR3);
 break;
 }
 case VAR166: {
                              FUN4("",
                                      VAR3);
 break;
 }
 case VAR167: {
                               FUN4("",
                                       VAR3);
 break;
 }
 case VAR168: {
                               FUN4("",
                                       VAR3);

                                break;
                            }
         case VAR169: {


                                      VAR170 *VAR171 =
                                          (VAR170 *)VAR4;
                                      struct v4l2_control VAR62;
 int VAR172,VAR173=0;
                                     FUN11("",
                                             VAR171->VAR174);
 if (VAR171->VAR174 == VAR175) {
                                         VAR172 = VAR176;
 } else if (VAR171->VAR174 == VAR177) {
                                         VAR172 = VAR178;
                                         VAR179.FUN20(false);
 } else
                                         VAR5 = VAR15;
 if (VAR5 == VAR6) {
                                         VAR62.VAR63 = VAR180;
                                         VAR62.VAR72 = VAR172;
                                         VAR173 = FUN5(VAR44.VAR45, VAR76, &VAR62);
 if (VAR173) {
                                             FUN2("");
                                             VAR5 = VAR59;
 }
 }

                                      break;
                                  }
         case VAR181:


                                      VAR5 = FUN21(VAR182, false,
                                              ((VAR183 *)VAR4)->VAR184);
                                  break;
         case VAR185:


                                        VAR5 = FUN21(VAR186, false,
                                                ((VAR183 *)VAR4)->VAR184);
                                    break;
         case VAR187:


                                VAR5 = FUN21(VAR188, false,
                                        ((VAR183 *)VAR4)->VAR184);
                                break;
         case VAR189:


                                    VAR5 = FUN21(VAR190, false,
                                            ((VAR183 *)VAR4)->VAR184);
                                break;
         case VAR191:


                                    VAR5 = FUN21(VAR192, false,
                                            ((VAR183 *)VAR4)->VAR184);
                                break;
         case VAR193:


                                VAR5 = FUN21(VAR194, false,
                                        ((VAR183 *)VAR4)->VAR184);
                                break;
         case VAR195:


                                VAR5 = FUN21(VAR196, false,
                                        ((VAR183 *)VAR4)->VAR184);
                                break;
         case VAR197:


                                VAR5 = FUN21(VAR198, false,
                                        ((VAR183 *)VAR4)->VAR184);
                                break;
         case VAR199:


                                 VAR5 = FUN21(VAR200, false,
                                     ((VAR183 *)VAR4)->VAR184);
                                break;
         case VAR201:


                                 VAR5 = FUN21(VAR202, false,
                                     ((VAR183 *)VAR4)->VAR184);
                                 break;
 case VAR203: {
                              VAR204* VAR205 = (VAR204 *) VAR4;

                           }
                           break;
         case VAR206: {


                                FUN11("");
                                VAR207* VAR208 = (VAR207 *) VAR4;
                                if (VAR208->VAR39 != VAR209) {
                                   FUN11("", VAR208->VAR39);
                                   VAR5 = VAR59;
 } else {
                                   VAR141 = VAR20;
 if ((VAR140 && VAR141)) {
                                       FUN11("");
                                       VAR142 = VAR20;
 }
 }

 }
 break;
 case VAR210: {
                                       FUN11("");
                                       FUN11("");
 struct v4l2_control VAR62;
 int VAR173;
                                       VAR44.VAR211 = 1;
                                       VAR62.VAR63 = VAR180;
                                       VAR62.VAR72 = VAR178;
                                       VAR173 = FUN5(VAR44.VAR45, VAR76, &VAR62);
 if (VAR173) {
                                           FUN2("");
                                           VAR5 = VAR59;
 } else {
                                           VAR62.VAR63 = VAR212;
                                           VAR62.VAR72 = VAR213;
                                           VAR173 = FUN5(VAR44.VAR45, VAR76, &VAR62);
 if (VAR173) {
                                               FUN2("");
                                               VAR5 = VAR59;
 }
 
 if (FUN8(&VAR44.VAR110)) {
                                               FUN2("");
                                               VAR5 = VAR59;
 }
 if (FUN8(&VAR44.VAR60)) {
                                               FUN2("");
                                               VAR5 = VAR59;
 }
 }
 }

                                    break;
 
         case VAR214: {


                                        VAR215 *VAR216 = (VAR215 *) VAR4;
                                        if ((VAR216->VAR217 == VAR24) &&
                                                (VAR216->VAR218 == VAR20) &&
 (VAR216->VAR115 == 1)) {
                                        FUN11("");
                                           VAR5 = FUN21(VAR219, false, VAR216->VAR218);

 }
 }
 break;
 case VAR220: {
#ifndef VAR221
                                      VAR5 = FUN22();
#else
                                      VAR5 = VAR59;
#endif
 }
 break;
#if FUN23 (VAR222) || FUN23 (VAR223)
 
         case VAR224: {


                                            VAR225* VAR226 = (VAR225 *) VAR4;
                                            if (VAR226) {
                                                VAR227 = VAR226->VAR228;
 }
#if !FUN23(VAR229)
 if (VAR227) {
 
 if(!VAR77.FUN14(FUN24(0))) {
                                                   FUN2("");
                                                   VAR5 = VAR59;
 }
 }
#endif

                                        }
                                        break;
         case VAR230: {


                                        VAR5 = FUN25(VAR2, VAR4);
                                    }
                                    break;
 #endif
         case VAR231: {


                                        VAR232 *VAR233 = (VAR232 *)VAR4;
                                        if (VAR44.VAR234 == (VAR235)VAR175) {
                                            if (VAR233->VAR184 == VAR20) {
                                               VAR92 =0;
                                               VAR179.FUN20(true);
 } else
                                               VAR179.FUN20(false);
 } else {
                                           VAR179.FUN20(false);
 if (VAR233->VAR184 == VAR20) {
                                               VAR5 = VAR59;
 }
 }

                                    }
                                    break;
         case VAR236: {


                                      VAR237* VAR238 =
                                          (VAR237*)VAR4;
                                      if (VAR238) {
                                         VAR239.VAR240 = VAR238->VAR240;
                                         VAR239.VAR241 = VAR238->VAR241;
 }
 break;


                                  }
         case VAR242:
         {


             VAR243 *VAR244 =
                 (VAR243 *)VAR4;
             if (!VAR244) {
                FUN2("", VAR244);
                VAR5 = VAR15;
 break;
 }
 if (VAR245) {
                FUN11("");
                VAR5 = VAR59;
 break;
 }
 if (VAR244->VAR115 == VAR134) {
 
 struct v4l2_control VAR62;
 struct v4l2_format VAR8;
                    VAR62.VAR63 = VAR246;
 if (VAR244->VAR247 == true) {
                    VAR62.VAR72 = VAR248;
 } else {
                        VAR62.VAR72 = VAR249;
 }
 int VAR173 = FUN5(VAR44.VAR45, VAR76,&VAR62);
 if (!VAR173) {
                        FUN11("",
 (VAR244->VAR247 == true)? "" : "");
                               VAR250 = VAR244->VAR247;
 } else {
                        FUN2("",
 (VAR244->VAR247 == true)? "" : "");
                        VAR5 = VAR59;
 }
 } else {
                    FUN2(
 "",
 (unsigned int)VAR244->VAR115);
                    VAR5 = VAR59;
 }
 break;

         }
         case VAR251:
         {


             VAR252* VAR238 = (VAR252*)VAR4;
             struct v4l2_control VAR62;
             int VAR173;
 if (VAR238) {
                VAR37 = VAR238->VAR184;
 if (VAR37) {
                    VAR62.VAR63 = VAR253;
                    VAR62.VAR72 = VAR254;
                    FUN4("", VAR238->VAR184);
                    VAR173 = FUN5(VAR44.VAR45, VAR76, &VAR62);
 if (VAR173 < 0) {
                        FUN2("");
                        VAR5 = VAR59;
 }
                    VAR62.VAR63 = VAR255;
                    VAR62.VAR72 = 1;
                    VAR173 = FUN5(VAR44.VAR45, VAR76, &VAR62);
 if (VAR173 < 0) {
                        FUN2("");
                        VAR5 = VAR59;
 }
 }
 }
 break;
 }

 #ifdef VAR256
         case VAR257:
         {


             FUN4("");
             VAR258* VAR259 =
                     (VAR258 *) VAR4;
 if (VAR259->VAR115 == VAR134) {
 if (!VAR259->VAR184) {
 return VAR6;
 }
 if (VAR259->VAR260 > VAR261
 || VAR259->VAR262 > VAR263) {
                    FUN2(
 "",
 (unsigned int)VAR259->VAR260, (unsigned int)VAR259->VAR262,
 (unsigned int)VAR261, (unsigned int)VAR263);
                    VAR5 = VAR15;
 } else {
                    VAR5 = FUN26(VAR259->VAR260, VAR259->VAR262);
 }
 } else {
                FUN2(
 "");
                VAR5 = VAR15;
 }
 break;
 }


 #endif
         case VAR264:
         {


             FUN4("");
             VAR265* VAR238 = (VAR265*)VAR4;
             if (VAR238->VAR115 == VAR266) {
 struct v4l2_control VAR62;
                VAR62.VAR63 = VAR267;
                VAR62.VAR72 = VAR238->VAR80;
 if (FUN5(VAR44.VAR45, VAR76, &VAR62)) {
                    FUN2("");
                    VAR5 = VAR59;
 } else {
                    VAR5 = FUN8(&VAR44.VAR110);
 if (VAR5 == VAR6) {
                        VAR108.VAR109 = VAR44.VAR110.VAR36;
                        FUN11("",
                            VAR108.VAR109);
 } else {
                        FUN2("");
 }
 }
 } else {
                FUN2("");
                VAR5 = VAR15;
 }
 break;
 }
 default: {
                 FUN2("", VAR3);
                 VAR5 = VAR268;
 }
 }
 if (VAR5 != VAR6)
        FUN2("", VAR5, VAR3);
 return VAR5;
}