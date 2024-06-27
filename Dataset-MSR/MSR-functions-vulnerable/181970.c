MagickExport VAR1 FUN1(const VAR2 *VAR3,
   const VAR4 *VAR5,const QuantumType VAR6)
 {
   VAR1


     VAR7;
 
   assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR8 == VAR9);
  VAR7=1;
  switch (VAR6)
  {
    case VAR10: VAR7=2; break;
    case VAR11: VAR7=2; break;
    case VAR12: VAR7=3; break;
    case VAR13: VAR7=3; break;
    case VAR14: VAR7=4; break;
    case VAR15: VAR7=4; break;
    case VAR16: VAR7=4; break;
    case VAR17: VAR7=4; break;
     case VAR18: VAR7=5; break;
     default: break;
   }


   if (VAR5->VAR19 == VAR20)

    return((VAR1) (VAR7*VAR3->VAR21*((VAR5->VAR22+7)/8)));

  return((VAR1) ((VAR7*VAR3->VAR21*VAR5->VAR22+7)/8));




 }