FUN1( FT_Stream  VAR1,
                PCF_Face   VAR2 )
  {
    FT_Error   VAR3;
    PCF_Toc    VAR4 = &VAR2->VAR4;
    PCF_Table  VAR5;

    FT_Memory  VAR6 = FUN2( VAR2 )->VAR6;
    FT_UInt    VAR7;


    if ( FUN3 ( 0 )                          ||
         FUN4 ( VAR8, VAR4 ) )
      return FUN5( VAR9 );

    if ( VAR4->VAR10 != VAR11                 ||
         VAR4->VAR12   >  FUN6( VAR2->VAR4.VAR5 ) ||
         VAR4->VAR12   == 0                                )
      return FUN5( VAR13 );

    if ( FUN7( VAR2->VAR4.VAR5, VAR4->VAR12 ) )
      return FUN5( VAR14 );

    VAR5 = VAR2->VAR4.VAR5;
    for ( VAR7 = 0; VAR7 < VAR4->VAR12; VAR7++ )
    {
      if ( FUN4( VAR15, VAR5 ) )
        goto VAR16;
      VAR5++;
    }

    
    
    
    VAR5 = VAR2->VAR4.VAR5;

    for ( VAR7 = 0; VAR7 < VAR4->VAR12 - 1; VAR7++ )
    {
      FT_UInt  VAR17, VAR18;


      VAR18 = 0;

      for ( VAR17 = 0; VAR17 < VAR4->VAR12 - 1 - VAR7; VAR17++ )
      {
        PCF_TableRec  VAR19;


        if ( VAR5[VAR17].VAR20 > VAR5[VAR17 + 1].VAR20 )
        {
          VAR19           = VAR5[VAR17];
          VAR5[VAR17]     = VAR5[VAR17 + 1];
          VAR5[VAR17 + 1] = VAR19;

          VAR18 = 1;
        }

        if ( ( VAR5[VAR17].VAR21   > VAR5[VAR17 + 1].VAR20 )                  ||
             ( VAR5[VAR17].VAR20 > VAR5[VAR17 + 1].VAR20 - VAR5[VAR17].VAR21 ) )
        {
          VAR3 = FUN5( VAR22 );
          goto VAR16;
        }
      }

      if ( !VAR18 )
        break;
    }

    
    
    VAR5 = VAR2->VAR4.VAR5;
    for ( VAR7 = 0; VAR7 < VAR4->VAR12; VAR7++ )
    {
      
      if ( ( VAR5->VAR21   > VAR1->VAR21                ) ||
           ( VAR5->VAR20 > VAR1->VAR21 - VAR5->VAR21 ) )
      {
        VAR3 = FUN5( VAR23 );
        goto VAR16;
      }
      VAR5++;
    }

#ifdef VAR24

    {
      FT_UInt      VAR17, VAR25;
      const char*  VAR26 = "";


      FUN8(( "" ));

      FUN8(( "", VAR2->VAR4.VAR12 ));

      VAR5 = VAR2->VAR4.VAR5;
      for ( VAR17 = 0; VAR17 < VAR4->VAR12; VAR17++ )
      {
        for ( VAR25 = 0; VAR25 < sizeof ( VAR27 ) / sizeof ( VAR27[0] );
              VAR25++ )
          if ( VAR5[VAR17].VAR28 == (VAR29)( 1 << VAR25 ) )
            VAR26 = VAR27[VAR25];

        FUN8(( ""
                    "",
                    VAR17, VAR26,
                    VAR5[VAR17].VAR30,
                    VAR5[VAR17].VAR21, VAR5[VAR17].VAR21,
                    VAR5[VAR17].VAR20, VAR5[VAR17].VAR20 ));
      }
    }

#endif

    return VAR31;

  VAR16:
    FUN9( VAR2->VAR4.VAR5 );
    return VAR3;
  }