FUN1( FT_GlyphSlot     VAR1,
                 FT_Int           VAR2,
                 FT_Int           VAR3,
                 FT_Int           VAR4,
                 TT_SBit_Metrics  VAR5,
                 FT_Memory        VAR6,
                 VAR7*         VAR8,
                 FT_UInt          VAR9,
                 FT_Bool          VAR10 )
  {
    VAR11    *VAR12   = &VAR1->VAR13;
    FT_Error      VAR14 = VAR15;
    FT_StreamRec  VAR16;

    png_structp  VAR17;
    png_infop    VAR18;
    png_uint_32  VAR19, VAR20;

    int         VAR21, VAR22, VAR23;
    FT_Int      VAR24;
    VAR25*  *VAR26 = NULL; 


    if ( VAR2 < 0 ||
         VAR3 < 0 )
    {
      VAR14 = FUN2( VAR27 );
       goto VAR28;
     }
 

    if ( !VAR10                   &&

         ( VAR2 + VAR5->VAR29  > VAR12->VAR29 ||

           VAR3 + VAR5->VAR30 > VAR12->VAR26  ||

           VAR4 != 32                          ||

           VAR12->VAR31 != VAR32   ) )










     {
       VAR14 = FUN2( VAR27 );
       goto VAR28;
    }

    FUN3( &VAR16, VAR8, VAR9 );

    VAR17 = FUN4( VAR33,
                                  &VAR14,
                                  VAR34,
                                  VAR35 );
    if ( !VAR17 )
    {
      VAR14 = FUN2( VAR36 );
      goto VAR28;
    }

    VAR18 = FUN5( VAR17 );
    if ( !VAR18 )
    {
      VAR14 = FUN2( VAR36 );
      FUN6( &VAR17, NULL, NULL );
      goto VAR28;
    }

    if ( FUN7( FUN8( VAR17 ) ) )
    {
      VAR14 = FUN2( VAR37 );
      goto VAR38;
    }

    FUN9( VAR17, &VAR16, VAR39 );

    FUN10( VAR17, VAR18 );
    FUN11( VAR17, VAR18,
                  &VAR19, &VAR20,
                  &VAR21, &VAR22, &VAR23,
                  NULL, NULL );

    if ( VAR14                                        ||
         ( !VAR10                &&
           ( (VAR40)VAR19  != VAR5->VAR29  ||
             (VAR40)VAR20 != VAR5->VAR30 ) ) )
      goto VAR38;

    if ( VAR10 )
    {
      FT_Long  VAR41;


      VAR5->VAR29  = (VAR40)VAR19;
      VAR5->VAR30 = (VAR40)VAR20;

      VAR12->VAR29      = VAR5->VAR29;
      VAR12->VAR26       = VAR5->VAR30;
      VAR12->VAR31 = VAR32;
      VAR12->VAR42      = VAR12->VAR29 * 4;
      VAR12->VAR43  = 256;

      
      if ( VAR12->VAR26 > 0x7FFF || VAR12->VAR29 > 0x7FFF )
      {
        VAR14 = FUN2( VAR44 );
        goto VAR38;
      }

      VAR41 = VAR12->VAR26 * VAR12->VAR42;

      VAR14 = FUN12( VAR1, VAR41 );
      if ( VAR14 )
        goto VAR38;
    }

    
    if ( VAR22 == VAR45 )
      FUN13( VAR17 );

    
    if ( VAR22 == VAR46 )
    {
#if VAR47 >= 10209
      FUN14( VAR17 );
#else
      FUN15( VAR17 );
#endif
    }

    
    if ( FUN16(VAR17, VAR18, VAR48 ) )
      FUN17( VAR17 );

    if ( VAR21 == 16 )
      FUN18( VAR17 );

    if ( VAR21 < 8 )
      FUN19( VAR17 );

    
    if ( VAR22 == VAR46       ||
         VAR22 == VAR49 )
      FUN20( VAR17 );

    if ( VAR23 != VAR50 )
      FUN21( VAR17 );

    FUN22( VAR17, 0xFF, VAR51 );

    
    FUN23(VAR17, VAR18 );
    FUN11( VAR17, VAR18,
                  &VAR19, &VAR20,
                  &VAR21, &VAR22, &VAR23,
                  NULL, NULL );

    if ( VAR21 != 8                              ||
        !( VAR22 == VAR52       ||
           VAR22 == VAR53 ) )
    {
      VAR14 = FUN2( VAR37 );
      goto VAR38;
    }

    switch ( VAR22 )
    {
    default:
      

    case VAR53:
      FUN24( VAR17, VAR54 );
      break;

    case VAR52:
      
      FUN24( VAR17, VAR55 );
      break;
    }

    if ( FUN25( VAR26, VAR20 ) )
    {
      VAR14 = FUN2( VAR36 );
      goto VAR38;
    }

    for ( VAR24 = 0; VAR24 < (VAR40)VAR20; VAR24++ )
      VAR26[VAR24] = VAR12->VAR56 + ( VAR3 + VAR24 ) * VAR12->VAR42 + VAR2 * 4;

    FUN26( VAR17, VAR26 );

    FUN27( VAR26 );

    FUN28( VAR17, VAR18 );

  VAR38:
    FUN6( &VAR17, &VAR18, NULL );
    FUN29( &VAR16 );

  VAR28:
    return VAR14;
  }