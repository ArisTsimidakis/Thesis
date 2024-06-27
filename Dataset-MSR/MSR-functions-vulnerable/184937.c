VAR1::FUN1(
    VAR2* VAR3,
    VAR4* VAR5,
    const VAR6::VAR7& VAR8,
    const VAR6::VAR7& VAR9,
     const VAR6::VAR7& VAR10,
     StartSyncMode VAR11,
     bool VAR12,

    ConfirmationRequired VAR13)




     : FUN2(VAR11),
       FUN3(VAR12),
       FUN4(VAR13),


       FUN5(this) {
   FUN6(VAR3);
   VAR14::FUN7(this);

  FUN8(VAR3, VAR5);

  
  VAR15* VAR16 = VAR17::FUN9(VAR18);
  VAR15::OAuthTokenFetchedCallback VAR19;
  
  
  VAR19 = VAR20::FUN10(&VAR1::VAR21,
                        VAR22.FUN11());
  VAR16->FUN12(VAR8, VAR9, VAR10, VAR19);
}