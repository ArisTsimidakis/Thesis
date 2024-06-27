FUN1( VAR1*  VAR2,
                         const char*  VAR3 )
  {
    hashnode  VAR4;


    if ( VAR2 == 0 || VAR2->VAR5 == 0 || VAR3 == 0 || *VAR3 == 0 )
      return 0;

    VAR4 = FUN2( VAR3, (VAR6 *)VAR2->VAR7 );

    return VAR4 ? ( VAR2->VAR8 + VAR4->VAR9 ) : 0;
  }