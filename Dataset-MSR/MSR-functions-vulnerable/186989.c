bool FUN1(const VAR1* VAR2,




                                  const VAR3& VAR4,
                                  char VAR5,
                                  VAR6* VAR7,
                                  VAR3* VAR8) {

  bool VAR9 = true;
   if (VAR4.FUN2()) {
     if (VAR5)
       VAR7->FUN3(VAR5);
    
    
    
    VAR8->VAR10 = VAR7->FUN4();
    int VAR11 = VAR4.FUN5();
     for (int VAR12 = VAR4.VAR10; VAR12 < VAR11; VAR12++) {
       UCHAR VAR13 = static_cast<VAR14>(VAR2[VAR12]);
       if (VAR13 < 0x20 || VAR13 >= 0x80)

        VAR9 &= FUN6(VAR2, &VAR12, VAR11, VAR7);


       else
         VAR7->FUN3(static_cast<char>(VAR13));
     }
    VAR8->VAR15 = VAR7->FUN4() - VAR8->VAR10;
  } else {
     
     VAR8->FUN7();
   }

  return VAR9;
 }