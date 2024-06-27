NOINLINE void VAR1::FUN1(


     VAR2* VAR3,
     VAR2* VAR4) {

  VAR3->FUN2();

  volatile int VAR5 = 1;

  VAR4->FUN3();

  VAR5 = 0;  

  FUN4(VAR5);
















 }