VAR1* VAR2::FUN1() {
  VAR2* VAR3 = FUN2();
 
   if (VAR3->FUN3()) {
     return static_cast<VAR4*>(

               VAR3->FUN4()

                   ->FUN5()

                   ->FUN6())


         ->FUN7();
   }
 
  return VAR3->FUN6()->FUN7();
}