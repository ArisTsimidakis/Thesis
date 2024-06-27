FUN1( int  VAR1,
              int  VAR2 )
  {
    int      VAR3, VAR4, VAR5, VAR6, VAR7, VAR8;
    int      VAR9;
    FT_Size  VAR10;


    VAR11 = FUN2( VAR12, &VAR10 );

    if ( VAR11 )
    {
      
      return VAR11;
    }

    FUN3( VAR10, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8 );

    VAR9 = VAR2;

    while ( VAR9 < VAR1 )
    {
      int  VAR13;


      if ( VAR12->VAR14 == VAR15 )
        VAR13 = VAR9;
      else
        VAR13 = FUN4( VAR12, VAR9 );

      VAR11 = FUN5( VAR12, VAR16, VAR13, &VAR7, &VAR8 );
      if ( VAR11 )
        VAR17.VAR18++;
      else if ( FUN6( VAR7, VAR10, VAR16 ) )
      {
        VAR7 = VAR3;
        VAR8 += VAR6;

        if ( FUN7( VAR8, VAR10, VAR16 ) )
          break;
      }

      VAR9++;
    }

    return VAR19;
  }