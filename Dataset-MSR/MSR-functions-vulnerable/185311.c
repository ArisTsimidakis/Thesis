VAR1* VAR1::FUN1(




     VAR2* VAR3) {
   VAR1* VAR4 =
       VAR1::FUN2(VAR3);
   if (!VAR4)
     VAR4 = new FUN3(VAR3);

  return VAR4;


 }