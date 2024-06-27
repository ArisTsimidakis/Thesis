void FUN1(int VAR1,

                              int VAR2,

                              bool VAR3) {








   FUN2(VAR4::FUN3(VAR4::VAR5));
   FUN4(VAR1, 0);
   FUN4(VAR2, 0);

  
  if (!VAR6)
    return;

  VAR7* VAR8 = VAR6->FUN5();
  if (!VAR8)
    return;

#if FUN6(VAR9)
  bool VAR10 =
      VAR6->FUN7()->FUN8()->
      FUN9()->FUN10(VAR8::VAR11);
#else
  bool VAR10 = false;
#endif

  VAR12::FUN1(
       VAR1,
       VAR2,
       VAR10,

      VAR3, VAR8);


 }