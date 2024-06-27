FUN1(VAR1 *VAR2, png_infopp VAR3,

   PNG_CONST char * volatile VAR4)


 {
    FUN2(VAR2);
 
 VAR5
 {
 if (VAR2->VAR6 != NULL)
         FUN3(VAR2->VAR6, "");

      FUN4(VAR2);
      FUN5(VAR2->VAR7, sizeof VAR2->VAR7, 0, VAR4);

 
#     ifdef VAR8
 if (!VAR2->VAR9)
            VAR2->VAR6 = FUN6(VAR10,
               VAR2, VAR11, VAR12, &VAR2->VAR13,
               VAR14, VAR15);

 else
#     endif
         VAR2->VAR6 = FUN7(VAR10,
            VAR2, VAR11, VAR12);

      FUN8(VAR2->VAR6, VAR2, VAR16, VAR17);

#     ifdef VAR18
 {
 int VAR19;
 for (VAR19=0; VAR19<VAR2->VAR20; ++VAR19)
 if (FUN9(VAR2->VAR6, VAR2->VAR21[VAR19].VAR22,
                  VAR2->VAR21[VAR19].VAR23) == VAR24)
                  FUN3(VAR2->VAR6, "");
 }
#     endif

 if (VAR3 != NULL)
 *VAR3 = VAR2->VAR25 = FUN10(VAR2->VAR6);
 }

 VAR26
 return NULL;

 return VAR2->VAR6;
}