void VAR1::FUN1() {

  if (!VAR2->FUN2()->FUN3()) {

    VAR2->FUN2()->FUN4(

        VAR3, VAR4::FUN5(&VAR1::VAR5, this));

    return;

  }



  

  if (VAR6.FUN6()) {

    VAR6->FUN7();

    VAR6.FUN8();

  }



  

  if (VAR7.FUN6()) {

    VAR7->FUN7();

    VAR7.FUN8();



    for (VAR8::iterator VAR9 = VAR10.FUN9();

         VAR9 != VAR10.FUN10(); ++VAR9) {

      (*VAR9)->FUN11();

    }

  }



  FUN12();

}