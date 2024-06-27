FUN1(j_compress_ptr VAR1, VAR2 *VAR3, unsigned int VAR4)




{
  register int VAR5;
  register unsigned int VAR6;

  
  do {
    VAR5 = FUN2(VAR3);
    if (VAR5 == VAR7)
      FUN3(VAR1, VAR8);
  } while (VAR5 == '' || VAR5 == '' || VAR5 == '' || VAR5 == '');

  if (VAR5 < '' || VAR5 > '')
    FUN3(VAR1, VAR9);

  VAR6 = VAR5 - '';
  while ((VAR5 = FUN2(VAR3)) >= '' && VAR5 <= '') {
    VAR6 *= 10;
    VAR6 += VAR5 - '';
   }
 
   if (VAR6 > VAR4)

    FUN3(VAR1, VAR10);


 
   return VAR6;
 }