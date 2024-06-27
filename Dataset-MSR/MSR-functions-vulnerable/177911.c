FUN1( VAR1*      VAR2,
                      FT_Validator  VAR3 )
  {
    VAR1*  VAR4 = VAR2 + 4;
    FT_ULong  VAR5, VAR6;


    if ( VAR2 + 20 > VAR3->VAR7 )
      VAR8;

    VAR5 = FUN2( VAR4 );
     VAR4      = VAR2 + 16;
     VAR6  = FUN2( VAR4 );
 

    if ( VAR2 + VAR5 > VAR3->VAR7 || VAR5 < 20 + VAR6 * 2 )




       VAR8;
 
     
    {
      FT_UInt  VAR9;


      for ( ; VAR6 > 0; VAR6-- )
      {
        VAR9 = FUN3( VAR4 );
        if ( VAR9 >= FUN4( VAR3 ) )
          VAR10;
      }
    }

    return VAR11;
  }