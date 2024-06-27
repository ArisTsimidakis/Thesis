FUN1( FT_Stream  VAR1,
                     PCF_Face   VAR2 )
  {
    FT_Error      VAR3;
    FT_Memory     VAR4 = FUN2( VAR2 )->VAR4;
    FT_ULong      VAR5, VAR6;
    int           VAR7, VAR8;
    int           VAR9, VAR10;
    int           VAR11, VAR12;
    int           VAR13, VAR14, VAR15;
    PCF_Encoding  VAR16 = NULL;


    VAR3 = FUN3( VAR1,
                                    VAR2->VAR17.VAR18,
                                    VAR2->VAR17.VAR19,
                                    VAR20,
                                    &VAR5,
                                    &VAR6 );
    if ( VAR3 )
      return VAR3;

    VAR3 = FUN4( VAR1, 14 );
    if ( VAR3 )
      return VAR3;

    VAR5 = FUN5();

    if ( FUN6( VAR5 ) == VAR21 )
    {
      VAR7          = FUN7();
      VAR8           = FUN7();
      VAR9          = FUN7();
      VAR10           = FUN7();
      VAR2->VAR22 = FUN7();
    }
    else
    {
      VAR7          = FUN8();
      VAR8           = FUN8();
      VAR9          = FUN8();
      VAR10           = FUN8();
      VAR2->VAR22 = FUN8();
    }

    FUN9( VAR1 );

     if ( !FUN10( VAR5, VAR23 ) )
       return FUN11( VAR24 );
 


















     FUN12(( "" ));
 
     FUN12(( "",
      goto VAR25;

    VAR15 = 0;
    for ( VAR13 = VAR9; VAR13 <= VAR10; VAR13++ )
    {
      for ( VAR14 = VAR7; VAR14 <= VAR8; VAR14++ )
      {
        if ( FUN6( VAR5 ) == VAR21 )
          VAR12 = FUN7();
        else
          VAR12 = FUN8();

        if ( VAR12 != -1 )
        {
          VAR16[VAR15].VAR26   = VAR13 * 256 + VAR14;
          VAR16[VAR15].VAR27 = (VAR28)VAR12;

          FUN13(( "",
                      VAR16[VAR15].VAR26, VAR16[VAR15].VAR26, VAR16[VAR15].VAR27 ));

          VAR15++;
        }
      }
    }
    FUN9( VAR1 );

    if ( FUN14( VAR16, VAR11, VAR15 ) )
      goto VAR25;

    VAR2->VAR29 = VAR15;
    VAR2->VAR30  = VAR16;

    return VAR3;

  VAR25:
    FUN15( VAR16 );
    return VAR3;
  }