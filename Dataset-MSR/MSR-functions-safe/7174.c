FUN1( TT_Face    VAR1,
                     FT_Stream  VAR2 )
  {
    FT_Error  VAR3;
    FT_ULong  VAR4;
    FT_Int    VAR5;


    
    VAR3 = VAR1->FUN2( VAR1, VAR6, VAR2, &VAR1->VAR7 );

    
    
    if ( FUN3( VAR3, VAR8 ) )
      VAR1->VAR7 = 0;
    else if ( VAR3 )
      goto VAR9;

    FUN4(( "" ));
    VAR3 = VAR1->FUN2( VAR1, VAR10, VAR2, &VAR4 );
    if ( VAR3 )
    {
      VAR3 = FUN5( VAR11 );
      goto VAR9;
    }

    if ( VAR1->VAR12.VAR13 != 0 )
    {
      VAR5 = 2;

      if ( VAR4 >= 0x40000L )
      {
        FUN4(( "" ));
        VAR3 = FUN5( VAR14 );
        goto VAR9;
      }
      VAR1->VAR15 = VAR4 >> VAR5;
    }
    else
    {
      VAR5 = 1;

      if ( VAR4 >= 0x20000L )
      {
        FUN4(( "" ));
        VAR3 = FUN5( VAR14 );
        goto VAR9;
      }
      VAR1->VAR15 = VAR4 >> VAR5;
    }

    if ( VAR1->VAR15 != (VAR16)VAR1->VAR17.VAR18 + 1 )
    {
      FUN4(( "",
                  VAR1->VAR15 - 1, VAR1->VAR17.VAR18 ));

      
      if ( VAR1->VAR15 <= (VAR16)VAR1->VAR17.VAR18 )
      {
        FT_Long   VAR19 =
                    ( (VAR20)( VAR1->VAR17.VAR18 ) + 1 ) << VAR5;

        TT_Table  VAR21 = VAR1->VAR22;
        TT_Table  VAR23 = VAR21 + VAR1->VAR24;

        FT_Long   VAR25  = FUN6( VAR2 );
        FT_Long   VAR26 = 0x7FFFFFFFL;


        
        for ( ; VAR21 < VAR23; VAR21++ )
        {
          FT_Long  VAR27 = VAR21->VAR28 - VAR25;


          if ( VAR27 > 0 && VAR27 < VAR26 )
            VAR26 = VAR27;
        }

        if ( VAR21 == VAR23 )
        {
          
          VAR26 = VAR2->VAR29 - VAR25;
        }

        if ( VAR19 <= VAR26 )
        {
          VAR1->VAR15 = VAR1->VAR17.VAR18 + 1;
          VAR4           = VAR19;

          FUN4(( "",
                      VAR1->VAR15 ));
        }
      }
    }

    
    if ( FUN7( VAR4, VAR1->VAR30 ) )
      goto VAR9;

    FUN4(( "" ));

  VAR9:
    return VAR3;
  }