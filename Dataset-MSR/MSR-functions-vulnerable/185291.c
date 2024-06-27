bool VAR1<VAR2>::FUN1(const VAR3* VAR4, VAR5* VAR6,
                                 VAR7* VAR8) {
   const char *VAR9;
   int VAR10 = 0;

  bool VAR11 = VAR4->FUN2(VAR6, &VAR9, &VAR10);

  if (VAR11 && VAR10 == sizeof(VAR2)) {

    memcpy(VAR8, VAR9, sizeof(VAR2));

  } else {

    VAR11 = false;

    FUN3();












   }
 

  return VAR11;




 }