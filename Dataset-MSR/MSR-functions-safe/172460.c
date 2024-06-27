bool VAR1::FUN1(QOMX_VIDEO_HIERARCHICALCODINGTYPE VAR2,
                                    OMX_U32 VAR3)
{
 struct v4l2_control VAR4;

 if (!FUN2(VAR3, 0, 0, (int)VAR2)){
        FUN3("");
 return false;
 }

 if (VAR2 == VAR5) {
 
 
        VAR4.VAR6 = VAR7;
        VAR4.VAR8 = VAR3 - 1;
        FUN4("", (unsigned int)VAR3);
 if (FUN5(VAR9, VAR10, &VAR4)) {
            FUN3("");
 return false;
 }
 if (VAR11.VAR12 == VAR13) {
            FUN6("");
            VAR4.VAR6 = VAR14;
            VAR4.VAR8 = VAR15;
 if (FUN5(VAR9, VAR10, &VAR4)) {
                FUN3("");
 return false;
 }
 }
        VAR16.VAR17 = VAR18;
 } else if (VAR2 == VAR19) {
 if (VAR11.VAR12 != VAR20) {
            FUN3("");
 return false;
 }
        VAR4.VAR6 = VAR21;
        VAR4.VAR8 = VAR3 - 1;
        FUN7("", (unsigned int)VAR3);
 if (FUN5(VAR9, VAR10, &VAR4)) {
            FUN3("");
 return false;
 }
        VAR16.VAR17 = VAR22;
 } else {
        FUN3("", VAR2);
 return false;
 }
    VAR16.VAR23 = VAR3;
 return true;
}