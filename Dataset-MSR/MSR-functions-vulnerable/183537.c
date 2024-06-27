void VAR1::FUN1() {

  VAR2.VAR3 = false;

  VAR2.VAR4 = false;




 

  VAR2.VAR5 = VAR6.FUN2();

  if (!VAR2.VAR5)


     return;


 

  VAR2.VAR3 = VAR6.FUN2();

  if (VAR2.VAR3)

    FUN3();






 

  VAR2.VAR4 = VAR6.FUN2();

  if (VAR2.VAR4)

    FUN4();






 }