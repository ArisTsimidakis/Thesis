bool VAR1::FUN1(const VAR2& VAR3) const {

  

  if (VAR3.FUN2()) {

    return false;

  }



  VAR4* VAR5 = FUN3();

  if (VAR5 && VAR5->FUN4()) {

    

    return !VAR5->FUN4()->FUN5(VAR3);

  }



  

  

  return true;

}