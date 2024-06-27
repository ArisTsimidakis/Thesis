OMX_ERRORTYPE VAR1::FUN1(
        OMX_INDEXTYPE VAR2, OMX_PTR VAR3) {
 switch (VAR2) {
 case VAR4:
 {

             VAR5 *VAR6 =
                 (VAR5 *)VAR3;
 








             if (VAR6->VAR7 >= VAR8.FUN2()
                     || VAR6->VAR9
                             != sizeof(VAR5)) {
 return VAR10;
 }

 const VAR11 *VAR12 =
 &VAR8.FUN3(VAR6->VAR7);

            memcpy(VAR6, &VAR12->VAR13, sizeof(VAR12->VAR13));

 return VAR14;
 }

 default:
 return VAR15;
 }
}