VAR1 FUN1(VAR2 *VAR3, VAR2 *VAR4,
                                        VAR2 *VAR5, WORD32 VAR6,
                                        WORD32 VAR7) {
  VAR2 *VAR8 = VAR5 + VAR6;
  WORD32 VAR9, VAR10;
  WORD32 VAR11;

 for (VAR11 = (VAR6 - 1); VAR11 >= 0; VAR11 -= 2) {
    WORD32 VAR12, VAR13, VAR14, VAR15;
    VAR15 = VAR4[VAR11];
    VAR13 = VAR3[VAR11];

     VAR12 = *VAR3++;
     VAR14 = *VAR4++;
 

    VAR10 = FUN2(VAR14, VAR12);


     VAR10 = (FUN3(VAR10, VAR7));
     VAR8[VAR11] = VAR10;
 

    VAR9 = FUN4(VAR15, VAR13);


     VAR9 = (FUN3(VAR9, VAR7));
     VAR5[VAR11] = VAR9;
 

    VAR9 = FUN4(VAR14, VAR12);


     VAR9 = (FUN3(VAR9, VAR7));
     *VAR5++ = VAR9;
 

    VAR10 = FUN2(VAR15, VAR13);


     VAR10 = (FUN3(VAR10, VAR7));
     *VAR8++ = VAR10;
   }
}