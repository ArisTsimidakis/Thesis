void VAR1::FUN1(VAR2* VAR3,


                                            const VAR4* VAR5,
                                            int VAR6,
                                            void* VAR7) {
  VAR8* VAR9 = static_cast<VAR8*>(VAR7);
  VAR10* VAR11 = static_cast<VAR10*>(VAR9->VAR7);

  
  if (VAR6 == 0) {
    VAR11->VAR12 = VAR5->VAR13;
    VAR11->VAR14 = VAR5->VAR15 ? true : false;
    VAR9->VAR16 = true;
  }
   VAR9->VAR17->FUN2();
 }