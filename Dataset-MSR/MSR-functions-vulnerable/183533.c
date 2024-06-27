bool VAR1::FUN1() {

  const VAR2* VAR3 = VAR4;

  off_t VAR5 = VAR6;



  FUN2(VAR7.FUN3());



  

  VAR4 = nullptr;

  VAR6 = 0;



  if (VAR5 < 1)

    return false;



  

  

  uint8_t VAR8 = *(VAR3 + VAR5 - 1);

  if ((VAR8 & 0xe0) != 0xc0) {

    VAR7.FUN4(FUN5(VAR3, VAR5));

    return true;

  }



  FUN6(1) << "";



  

  

  

  size_t VAR9 = (VAR8 & 0x7) + 1;

  size_t VAR10 = ((VAR8 >> 3) & 0x3) + 1;

  off_t VAR11 = 2 + VAR10 * VAR9;
 

  if (VAR5 < VAR11)


     return false;
 

  const VAR2* VAR12 = VAR3 + VAR5 - VAR11;

  if (VAR8 != *VAR12)

    return false;



  ++VAR12;

  VAR5 -= VAR11;



  

  

  for (size_t VAR13 = 0; VAR13 < VAR9; ++VAR13) {

    uint32_t VAR14 = 0;

    for (size_t VAR15 = 0; VAR15 < VAR10; ++VAR15) {

      VAR14 |= *VAR12 << (VAR15 * 8);

      ++VAR12;

    }



    if (VAR16::VAR17<VAR18>(VAR14) > VAR5) {

      FUN6(1) << "" << VAR13;

      return false;

    }



    VAR7.FUN4(FUN5(VAR3, VAR14));

    VAR3 += VAR14;

    VAR5 -= VAR14;



    FUN6(1) << "" << VAR13 << "" << VAR14;

  }


 
   return true;
 }