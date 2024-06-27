void FUN1(VAR1* VAR2, VAR3* VAR4) {
  FUN2("", VAR5);

 if (VAR2->VAR6 == VAR7) {
    VAR2->VAR8 = VAR9;
    FUN3("",
                    VAR2->VAR8);
 } else {
    VAR2->VAR8 = VAR10;
    FUN3("",
                    VAR2->VAR8);
 }

 switch (VAR2->VAR6) {
 case VAR7:
 case VAR11:
      memset(VAR2->VAR12, 0, VAR13);
      FUN4(VAR2);
 break;
 case VAR14:
 
      VAR2->VAR15 = VAR16;
      FUN5(VAR2, VAR17, NULL);
 break;
 case VAR18:
 
      FUN2("");
      FUN6(VAR2, NULL);
 break;
 case VAR19:
 
      FUN7(VAR2, NULL);
 break;
 default:
      FUN8("",
                      VAR2->VAR6);
 break;
 }
}