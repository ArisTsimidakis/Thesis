FUN1( VAR1*  *VAR2,
                  FT_Byte    VAR3 )
  {
    FT_ULong  VAR4;
    VAR1*  VAR5 = *VAR2;


    for ( VAR4 = 0; VAR3 > 0; VAR3-- )
    {
      VAR4 <<= 8;
      VAR4  |= *VAR5++;
    }

    *VAR2 = VAR5;
    return (VAR6)VAR4;
  }