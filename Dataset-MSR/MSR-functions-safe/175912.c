void FUN1(VAR1* VAR2, VAR3* VAR4) {
 uint8_t VAR5 = 0;
  tSMP_INT_DATA VAR6;

  FUN2("", VAR7,
                  VAR2->VAR8);

 switch (VAR2->VAR8) {
 case VAR9: 
 if (VAR2->VAR10 == VAR11 &&
 ((VAR2->VAR12 & VAR13) != 0) &&
 ((VAR2->VAR14 & VAR13) == 0)) {
        FUN3(
 "");
        VAR6.VAR15 = VAR16;
        VAR5 = VAR17;
 } else {
        VAR2->VAR18 = VAR19;
        FUN4("",
                        VAR2->VAR18);

        tSMP_KEY VAR20;
        VAR20.VAR21 = VAR22;
        VAR20.VAR4 = VAR2->VAR23;
        VAR6.VAR20 = VAR20;

        memset(VAR2->VAR23, 0, VAR24);
 
        VAR5 = VAR25;
 }
 break;

 case VAR26:
      VAR2->VAR18 = VAR27;
      FUN4("",
                      VAR2->VAR18);

      VAR2->VAR28 = VAR29;
      VAR5 = VAR30;
 break;

 case VAR31:
      FUN3("");
      VAR2->VAR18 = VAR27;
      FUN4("",
                      VAR2->VAR18);

      VAR2->VAR28 = VAR32;
      VAR5 = VAR30;
 break;

 case VAR33:
      VAR2->VAR18 = VAR27;
      FUN2("");

 
      FUN5(VAR2, NULL);
 break;

 case VAR34:
 case VAR35:
 case VAR36:
 case VAR37:
 case VAR38:
      VAR5 = VAR39;
 break;

 case VAR40:
      FUN3("");
      VAR6.VAR15 = VAR41;
      VAR5 = VAR17;
 break;

 default:
      FUN3(
 "",
          VAR2->VAR8);
      VAR6.VAR15 = VAR41;
      VAR5 = VAR17;
 }

  FUN4("", VAR2->VAR18);
 if (VAR5) FUN6(VAR2, VAR5, &VAR6);
}