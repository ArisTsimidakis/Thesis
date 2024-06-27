bool VAR1::FUN1(const VAR2::VAR3& VAR4) {
  bool VAR5 = true;
  FUN2(VAR1, VAR4)
    FUN3(VAR6,
                        VAR7)
    FUN3(VAR8,
                        VAR9)
#if FUN4(VAR10)
     FUN5(VAR11,
                                     VAR12)
 #endif

    FUN3(VAR13,

                        VAR14)
     FUN6(VAR5 = false)
   FUN7()
   return VAR5;
}