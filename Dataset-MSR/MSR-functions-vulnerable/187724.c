FUN1(VAR1* PNG_CONST VAR2, png_uint_32 PNG_CONST VAR3,


    int VAR4, int VAR5)
 {
    standard_display VAR6;
   FUN2(VAR2, VAR7);

 
   FUN3(&VAR6, VAR2, VAR3, VAR4, VAR5);

 
 VAR8
 {
      png_structp VAR9;
      png_infop VAR10;

 
      VAR9 = FUN4(VAR6.VAR11, &VAR10, VAR6.VAR3,
         VAR6.VAR4 ? (VAR6.VAR11->VAR12 ?
 "" :
 "") : (VAR6.VAR11->VAR12 ?
 "" : ""));

 
      FUN5(&VAR6);

 
 if (VAR6.VAR11->VAR12)
 {
         FUN6(VAR9, &VAR6, VAR13, VAR14,
            VAR15);

 
         FUN7(VAR6.VAR11, VAR9, VAR10);
 }
 else
 {
 
         FUN8(VAR9, VAR6.VAR11, VAR16);

 
         FUN9(VAR9, VAR10);

 
         FUN10(&VAR6, VAR9, VAR10, 2 );

 
 {
            FUN11(&VAR6, VAR9, VAR10, 0, 1);

 
 if (!VAR6.VAR17)
 {
               FUN12(&VAR6, VAR9, VAR10, 1);
               FUN13(&VAR6, VAR9, 0, 1);
 }
 else
               VAR6.VAR11->VAR18 = 1;
 }
 }

 
 if (!VAR6.VAR11->VAR18)
         FUN14(VAR9, "");

 
 }

 FUN15(VAR7)
      VAR6.VAR11 = VAR7; 

 
   FUN16(VAR6.VAR11);

 }