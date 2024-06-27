static VAR1 FUN1(const VAR2 *VAR3,
 unsigned int VAR4,
 VAR5 *VAR6,
 int *VAR7,

                                                 vpx_decrypt_cb VAR8,
                                                 void *VAR9) {
   int VAR10 = 0;

  uint8_t VAR11[9];


 
   if (VAR3 + VAR4 <= VAR3)
     return VAR12;

  VAR6->VAR13 = 0;
  VAR6->VAR14 = VAR6->VAR15 = 0;

 if (VAR8) {
    VAR4 = FUN2(sizeof(VAR11), VAR4);
    FUN3(VAR9, VAR3, VAR11, VAR4);

     VAR3 = VAR11;
   }
 










   {
     int VAR16;
     int VAR17;
 struct vpx_read_bit_buffer VAR18 = { VAR3, VAR3 + VAR4, 0, NULL, NULL };
 const int VAR19 = FUN4(&VAR18, 2);
 const BITSTREAM_PROFILE VAR20 = FUN5(&VAR18);

 if (VAR19 != VAR21)
 return VAR22;


     if (VAR20 >= VAR23)
       return VAR22;
 

    if ((VAR20 >= 2 && VAR4 <= 1) || VAR4 < 1)

      return VAR22;


     if (FUN6(&VAR18)) {  








       FUN4(&VAR18, 3);  
       return VAR24;
     }
 

    if (VAR4 <= 8)








       return VAR22;
 
     VAR6->VAR13 = !FUN6(&VAR18);
    VAR16 = FUN6(&VAR18);
    VAR17 = FUN6(&VAR18);

 if (VAR6->VAR13) {
 if (!FUN7(&VAR18))
 return VAR22;

 if (!FUN8(VAR20, &VAR18))
 return VAR22;
      FUN9(&VAR18, (int *)&VAR6->VAR14, (int *)&VAR6->VAR15);
 } else {
      VAR10 = VAR16 ? 0 : FUN6(&VAR18);

      VAR18.VAR25 += VAR17 ? 0 : 2; 

 if (VAR10) {
 if (!FUN7(&VAR18))
 return VAR22;
 if (VAR20 > VAR26) {
 if (!FUN8(VAR20, &VAR18))
 return VAR22;
 }
        VAR18.VAR25 += VAR27; 
        FUN9(&VAR18, (int *)&VAR6->VAR14, (int *)&VAR6->VAR15);
 }
 }
 }
 if (VAR7 != NULL)
 *VAR7 = VAR10;
 return VAR24;
}