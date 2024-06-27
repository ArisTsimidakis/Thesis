void VAR1::FUN1(
     VAR2* VAR3,
     unsigned int VAR4,
     unsigned int VAR5) {

  VAR2* VAR6 = VAR7.FUN2();

  if (!VAR6)


     return;




   unsigned int VAR8 = VAR4 * 4;
   unsigned int VAR9 = VAR5 / 2;
   for (unsigned int VAR10 = 0; VAR10 < VAR9; VAR10++) {
    VAR2* VAR11 = VAR3 + VAR10 * VAR8;
    VAR2* VAR12 = VAR3 + (VAR5 - VAR10 - 1) * VAR8;
    
    
    
    
    memcpy(VAR6, VAR12, VAR8);
    memcpy(VAR12, VAR11, VAR8);
    memcpy(VAR11, VAR6, VAR8);
  }
}