FUN1( FT_Error  VAR1 )
  {
    FT_Face      VAR2;
    const char*  VAR3;
    const char*  VAR4;


    VAR5 = FUN2( VAR6->VAR7,
                                    VAR6->VAR8.VAR9, &VAR2 );
    if ( VAR5 )
      FUN3( "" );

    if ( !VAR10.VAR11 )
    {
      VAR3 = FUN4( VAR6->VAR12->VAR13 );

       switch ( VAR1 )
       {
       case VAR14:

        sprintf( VAR10.VAR15, "",


                  VAR2->VAR16, VAR2->VAR17, VAR3 );
         break;
       case VAR18:

        sprintf( VAR10.VAR15, "",


                  VAR3 );
         break;
       case VAR19:

        sprintf( VAR10.VAR15, "",


                  VAR3 );
         break;
       default:

        sprintf( VAR10.VAR15, "",


                  VAR3, (VAR20)VAR1 );
         break;
       }

      VAR10.VAR11 = VAR10.VAR15;
    }

    FUN5( VAR21->VAR22, 0, 0,
                       VAR10.VAR11, VAR21->VAR23 );

    VAR4 = VAR10.VAR24 != VAR25
             ? ""
             : "";

    snprintf( VAR10.VAR15, 256, VAR4,
              VAR10.VAR26 / 64.0, VAR10.VAR27 );

    if ( FUN6( VAR2 ) )
    {
      char*  VAR28;
      int    VAR29, VAR30, VAR31;


      VAR31 = strlen( VAR10.VAR15 );
      VAR28    = VAR10.VAR15 + VAR31;
      VAR31 = 256 - VAR31;

      VAR4 = "";
      VAR29 = strlen( VAR4 );

      if ( VAR31 >= VAR29 + 2 )
      {
        VAR30 = VAR10.VAR27;
        if ( VAR10.VAR24 != VAR25 )
          VAR30 = FUN7( VAR6, VAR10.VAR27 );

        strcpy( VAR28, VAR4 );
        if ( FUN8( VAR2, VAR30,
                                VAR28 + VAR29, VAR31 - VAR29 ) )
          *VAR28 = '';
      }
    }

    VAR10.VAR11 = VAR10.VAR15;
    FUN5( VAR21->VAR22, 0, VAR32,
                       VAR10.VAR15, VAR21->VAR23 );

    if ( VAR10.VAR33 )
    {
      int             VAR34 = VAR10.VAR35;
      unsigned char  *VAR36  = VAR10.VAR37;


      sprintf( VAR10.VAR15,
               "",
               VAR34 == 0 ? "" : "", VAR36[0], VAR34 == 0 ? "" : "",
               VAR34 == 1 ? "" : "", VAR36[1], VAR34 == 1 ? "" : "",
               VAR34 == 2 ? "" : "", VAR36[2], VAR34 == 2 ? "" : "",
               VAR34 == 3 ? "" : "", VAR36[3], VAR34 == 3 ? "" : "",
               VAR34 == 4 ? "" : "", VAR36[4], VAR34 == 4 ? "" : "" );
      FUN5( VAR21->VAR22, 0, 2 * VAR32,
                         VAR10.VAR15, VAR21->VAR23 );
    }

    FUN9( VAR21->VAR38 );
  }