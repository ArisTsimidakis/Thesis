void FUN1(VAR1::VAR2<VAR1::VAR3, VAR1::VAR3>* VAR4) {
  VAR5::VAR6::VAR7* VAR8 = VAR5::VAR6::VAR7::FUN2();
 
   (*VAR4)[""] = VAR8->FUN3();
   (*VAR4)[""] = VAR8->FUN4();


   (*VAR4)[""] = VAR8->FUN5();
   (*VAR4)[""] = VAR8->FUN6();
   (*VAR4)[""] = VAR8->FUN7();
  (*VAR4)[""] = VAR8->FUN8();
  (*VAR4)[""] = VAR8->FUN9();
  (*VAR4)[""] = VAR8->FUN10();
  (*VAR4)[""] = VAR8->FUN11();
  (*VAR4)[""] = VAR8->FUN12();
  (*VAR4)[""] = VAR8->FUN13();

  if (VAR8->FUN14()[0] != '') {
    (*VAR4)[""] = VAR1::FUN15(VAR8->FUN14()) + "" +
                                VAR8->FUN16() + "" +
                                VAR8->FUN17() + "";
  }
}