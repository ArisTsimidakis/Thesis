OMX_ERRORTYPE  VAR1::FUN1(OMX_IN OMX_HANDLETYPE      VAR2,
        OMX_IN OMX_INDEXTYPE VAR3,
        OMX_IN OMX_PTR        VAR4)
{
 (void)VAR2;
 if (VAR4 == NULL) {
        FUN2("");
 return VAR5;
 }

 if (VAR6 == VAR7) {
        FUN2("");
 return VAR8;
 }

 

     switch ((int)VAR3) {
         case VAR9:
             {


                 VAR10* VAR11 =
                     reinterpret_cast<VAR10*>(VAR4);
                 FUN3("", (unsigned int)VAR11->VAR12);

 if (VAR11->VAR13 == VAR14) {
 if (VAR15->FUN4(VAR4, VAR9) != true) {
                        FUN2("");
 return VAR16;
 }

                    VAR17.VAR12 = VAR11->VAR12;
                    VAR18.VAR19 = VAR11->VAR12;
                    VAR20.VAR21.VAR22.VAR23 = VAR11->VAR12;
 } else {
                    FUN2("", (unsigned int)VAR11->VAR13);
 return VAR24;
 }
 break;

             }
         case VAR25:
             {


                 VAR26* VAR11 =
                     reinterpret_cast<VAR26*>(VAR4);
                 FUN3("", (unsigned int)VAR11->VAR27);

 if (VAR11->VAR13 == VAR14) {
 if (VAR15->FUN4(VAR4, VAR25) != true) {
                        FUN2("");
 return VAR16;
 }

                    VAR28.VAR27 = VAR11->VAR27;
                    VAR20.VAR21.VAR22.VAR29 = VAR11->VAR27;
                    VAR30.VAR29 = VAR11->VAR27;
 } else {
                    FUN2("", (unsigned int)VAR11->VAR13);
 return VAR24;
 }

 break;

             }
         case VAR31:
             {


                 VAR32* VAR11 =
                     reinterpret_cast<VAR32*>(VAR4);
 
                FUN3("");
 if (VAR11->VAR13 == VAR14) {
#ifdef VAR33
 if (VAR11->VAR34 > 0) {
                        FUN2("");
 return VAR16;
 }
#endif
                    FUN3("",
 (unsigned int)VAR35.VAR36, (unsigned int)VAR35.VAR34,
 (unsigned int)VAR11->VAR36, (unsigned int)VAR11->VAR34);
 if (VAR35.VAR34 != VAR11->VAR34) {
 if(VAR37 && VAR6 == VAR38) {
                            FUN5("");
 }
 else {
                        FUN3("");
 return VAR16;
 }
 }
 if (VAR15->FUN4(VAR4, (VAR39) VAR31) != true) {
                        FUN2("");
 return VAR16;
 }
                    VAR35.VAR36 = VAR11->VAR36;
                    VAR35.VAR34 = VAR11->VAR34;
                    VAR35.VAR40 = VAR11->VAR40;

 if (VAR30.VAR41 == VAR42) {
                        VAR43.VAR36 = VAR11->VAR36;
 if (VAR43.VAR44 != VAR45)
                            VAR43.VAR34 = VAR11->VAR34;
 else
                            VAR43.VAR34 = 0;
 } else if (VAR30.VAR41 == VAR46) {
                        VAR47.VAR36 = VAR11->VAR36;
 } else {
                        VAR48.VAR36 = VAR11->VAR36;
 if ((VAR48.VAR44 != VAR49) &&
 (VAR48.VAR44 != (VAR50) VAR51))
                            VAR48.VAR34 = VAR11->VAR34;
 else
                            VAR48.VAR34 = 0;
 }
 } else {
                    FUN2("", (unsigned int)VAR11->VAR13);
 return VAR24;
 }

 break;
 }

 
         case VAR52:
             {


                 VAR53* VAR11 =
                     reinterpret_cast<VAR53*>(VAR4);
 
                FUN3("");
 if (VAR11->VAR13 == VAR14) {
 if (VAR15->FUN4(VAR4,
                                VAR52) != true) {
                        FUN2("");
 return VAR16;
 }

                    VAR54.VAR55 = VAR11->VAR55;
 } else {
                    FUN2("", (unsigned int)VAR11->VAR13);
 return VAR24;
 }

 break;

             }
         case VAR56:
             {


                 VAR57 *VAR11 =
                     reinterpret_cast<VAR57*>(VAR4);
                 OMX_S32 VAR58;

 if (VAR11->VAR13 != VAR14) {
                    FUN2("", (unsigned int)VAR11->VAR13);
 return VAR24;
 }
 if ( VAR11->VAR58 == 0 ||
                        VAR11->VAR58 == 90 ||
                        VAR11->VAR58 == 180 ||
                        VAR11->VAR58 == 270 ) {
                    FUN3("", (unsigned int)VAR11->VAR58);
 } else {
                    FUN2("", (unsigned int)VAR11->VAR58);
 return VAR16;
 }
                VAR58 = VAR11->VAR58 - VAR59.VAR58;
 if (VAR58 < 0)
                    VAR58 = -VAR58;
 if (VAR58 == 90 || VAR58 == 270) {
                    FUN3("");
 if (VAR15->FUN4(VAR4,
                                VAR56) != true) {
                        FUN2("");
 return VAR16;
 } else {
                        OMX_U32 VAR60;
                        OMX_U32 VAR61;

                        FUN3("");

                        VAR60 = VAR20.VAR21.VAR22.VAR60;
                        VAR61 = VAR20.VAR21.VAR22.VAR61;
                        VAR20.VAR21.VAR22.VAR60  = VAR61;
                        VAR20.VAR21.VAR22.VAR61 = VAR60;
                        VAR59.VAR58 = VAR11->VAR58;
 }
 } else {
                    VAR59.VAR58 = VAR11->VAR58;
 }
 break;
 }
 case VAR62:

             {
                 FUN3("");
                 if (VAR30.VAR41 == VAR63) {


                     VAR64 *VAR65 =
                         (VAR64 *) VAR4;
                     VAR66.FUN6(VAR65);
 } else {
                    FUN2("");
 }
 break;

             }
         case VAR67:
             {


                 VAR68* VAR11 = (VAR68*)VAR4;
                 if (!VAR15->FUN4(VAR4, (VAR39)VAR67)) {
                     FUN2("");
 return VAR16;
 }
                memcpy(&VAR69, VAR11, sizeof(VAR69));
 break;
 }

 
        case VAR70:
            {


                VAR71* VAR11 = (VAR71*) VAR4;
                if (!VAR15->FUN4(VAR11, (VAR39) VAR70)) {
                    FUN2("");
 return VAR16;
 }
               memcpy(&VAR72, VAR11, sizeof(VAR72));
 break;
 }

 
         case VAR73:
             {


                 VAR74* VAR11 = (VAR74*)VAR4;
                 if (!VAR15->FUN4(VAR11, (VAR39)VAR73)) {
                     FUN2("");
 return VAR16;
 }
                memcpy(&VAR75, VAR11, sizeof(VAR75));
 break;

             }
         case VAR76:
             {


                 VAR77* VAR11 = (VAR77*)VAR4;
                 if (!VAR15->FUN4(VAR11, (VAR39)VAR76)) {
                     FUN2("");
 return VAR16;
 }
 break;

             }
         case VAR78:
             {


                 VAR79 *VAR11 = (VAR79*) VAR4;
                 FUN7("");
                 if (!VAR15->FUN4(VAR11, (VAR39)VAR78)) {
                    FUN2("");
 return VAR16;
 }
                memcpy(&VAR80, VAR11, sizeof(VAR80));
 break;

             }
         case VAR81:
             {


                 VAR82 *VAR11 = (VAR82*) VAR4;
                 FUN7("");
                 if (!VAR15->FUN4(VAR11, (VAR39)VAR81)) {
                    FUN2("");
 return VAR16;
 }
                memcpy(&VAR83, VAR11, sizeof(VAR83));
 break;

             }
         case VAR84:
             {


                 VAR85* VAR11 = (VAR85*)VAR4;
                 if (!VAR15->FUN4(VAR11, (VAR39)VAR84)) {
                     FUN2("");
 return VAR16;
 }
 break;

             }
         case VAR86:
             {


                 if (!VAR15->FUN4(VAR4, (VAR39)VAR86)) {
                     FUN2("");
                     return VAR16;
 }
 break;

             }
         case VAR87:
             {


                 if (!VAR15->FUN4(VAR4, (VAR39)VAR87)) {
                     FUN2("");
                     return VAR15->VAR88 ? VAR89 :
                            VAR16;
 }
 break;
 }
 default:
            FUN2("", (int) VAR3);
 break;
 }

 return VAR90;
}