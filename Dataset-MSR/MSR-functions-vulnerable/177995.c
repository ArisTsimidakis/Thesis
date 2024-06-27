FUN1( char*          VAR1,
                     unsigned long  VAR2,
                     unsigned long  VAR3,
                     void*          VAR4,
                     void*          VAR5 )
  {
    int                VAR6, VAR7;
    char*              VAR8;
    unsigned char*     VAR9;
    unsigned long      VAR10, VAR11, VAR12;

    VAR13*      VAR14;
    VAR15*       VAR16;
    VAR17*        VAR18;

    FT_Memory          VAR19;
    FT_Error           VAR20 = VAR21;

    FUN2( VAR4 );
    FUN2( VAR3 );        


    VAR14 = (VAR13 *)VAR5;

    VAR18   = VAR14->VAR18;
    VAR19 = VAR18->VAR19;

    
    if ( FUN3( VAR1, "", 7 ) == 0 )
    {
      VAR2 -= 7;

      VAR8 = VAR1 + 7;
      if ( *VAR8 != 0 )
      {
        VAR8++;
        VAR2--;
      }
      VAR20 = FUN4( VAR14->VAR18, VAR8, VAR2 );
      goto VAR22;
    }

    
    if ( !( VAR14->VAR23 & VAR24 ) )
    {
      if ( FUN3( VAR1, "", 5 ) != 0 )
      {
        FUN5(( "" VAR25, VAR3, "" ));
        VAR20 = VAR26;
        goto VAR22;
      }

      VAR20 = FUN6( &VAR14->VAR27, (char *)"", VAR1, VAR2 );
      if ( VAR20 )
        goto VAR22;
      VAR14->VAR28 = VAR18->VAR29 = FUN7( VAR14->VAR27.VAR30[1], 0, 10 );

      
      if ( VAR14->VAR28 == 0 )
        VAR18->VAR29 = 64;

      
      
      if ( VAR14->VAR28 >= 0x110000UL )
      {
        FUN5(( "" VAR31, VAR3, "" ));
        VAR20 = VAR32;
        goto VAR22;
      }

      if ( FUN8( VAR18->VAR33, VAR18->VAR29 ) )
        goto VAR22;

      VAR14->VAR23 |= VAR24;

      goto VAR22;
    }

    
    if ( FUN3( VAR1, "", 7 ) == 0 )
    {
      
      FUN9( (char *)VAR18->VAR33,
                VAR18->VAR34,
                sizeof ( VAR15 ),
                VAR35 );

      VAR14->VAR23 &= ~VAR36;

      goto VAR22;
    }

    
    if ( FUN3( VAR1, "", 7 ) == 0 )
    {
      VAR14->VAR37 = 0;
      VAR14->VAR23    &= ~VAR38;

      goto VAR22;
    }

    
    
    if ( ( VAR14->VAR23 & VAR39 )     &&
         VAR14->VAR37            == -1 &&
         VAR14->VAR40->VAR41 == 0  )
      goto VAR22;

    
    if ( FUN3( VAR1, "", 9 ) == 0 )
    {
      
      
      FUN10( VAR14->VAR42 );

      VAR20 = FUN6( &VAR14->VAR27, (char *)"", VAR1, VAR2 );
      if ( VAR20 )
        goto VAR22;

      FUN11( &VAR14->VAR27, 1 );

      VAR8 = FUN12( &VAR14->VAR27, '', &VAR11 );

      if ( !VAR8 )
      {
        FUN5(( "" VAR43, VAR3, "" ));
        VAR20 = VAR44;
        goto VAR22;
      }

      if ( FUN8( VAR14->VAR42, VAR11 + 1 ) )
        goto VAR22;

      FUN13( VAR14->VAR42, VAR8, VAR11 + 1 );

      VAR14->VAR23 |= VAR39;

      FUN14(( VAR45, VAR3, VAR8 ));

      goto VAR22;
    }

    
    if ( FUN3( VAR1, "", 8 ) == 0 )
    {
      if ( !( VAR14->VAR23 & VAR39 ) )
      {
        
        FUN5(( "" VAR25, VAR3, "" ));
        VAR20 = VAR46;
        goto VAR22;
      }

      VAR20 = FUN6( &VAR14->VAR27, (char *)"", VAR1, VAR2 );
      if ( VAR20 )
        goto VAR22;

      VAR14->VAR37 = FUN15( VAR14->VAR27.VAR30[1], 0, 10 );

      
      
      if ( VAR14->VAR37 < -1 )
        VAR14->VAR37 = -1;

      
      if ( VAR14->VAR37 == -1 && VAR14->VAR27.VAR47 > 2 )
        VAR14->VAR37 = FUN15( VAR14->VAR27.VAR30[2], 0, 10 );

      FUN14(( VAR48, VAR14->VAR37 ));
 
       
       

      if ( VAR14->VAR37 > 0                               &&

           (VAR49)VAR14->VAR37 >= sizeof ( VAR14->VAR50 ) * 8 )






       {
         FUN5(( "" VAR31, VAR3, "" ));
         VAR20 = VAR44;
      }

      
      
      
      if ( VAR14->VAR37 >= 0 )
      {
        if ( FUN16( VAR14->VAR50, VAR14->VAR37 ) )
        {
          
          
          FUN17(( "" VAR51,
                      VAR14->VAR37, VAR14->VAR42 ));
          VAR14->VAR37 = -1;
          VAR18->VAR52 = 1;
        }
        else
          FUN18( VAR14->VAR50, VAR14->VAR37 );
      }

      if ( VAR14->VAR37 >= 0 )
      {
        
        
        if ( VAR18->VAR34 == VAR18->VAR29 )
        {
          if ( FUN19( VAR18->VAR33,
                               VAR18->VAR29,
                               VAR18->VAR29 + 64 ) )
            goto VAR22;

          VAR18->VAR29 += 64;
        }

        VAR16           = VAR18->VAR33 + VAR18->VAR34++;
        VAR16->VAR53     = VAR14->VAR42;
        VAR16->VAR54 = VAR14->VAR37;

        
        VAR14->VAR42 = 0;
      }
      else
      {
        
        
        if ( VAR14->VAR40->VAR41 != 0 )
        {
          
          if ( VAR18->VAR55 == VAR18->VAR56 )
          {
            if ( FUN19( VAR18->VAR57 ,
                                 VAR18->VAR56,
                                 VAR18->VAR56 + 4 ) )
              goto VAR22;

            VAR18->VAR56 += 4;
          }

          VAR16           = VAR18->VAR57 + VAR18->VAR55;
          VAR16->VAR53     = VAR14->VAR42;
          VAR16->VAR54 = VAR18->VAR55++;
        }
        else
          
          
          FUN10( VAR14->VAR42 );

        VAR14->VAR42 = 0;
      }

      
      
      VAR14->VAR23 &= ~( VAR58 | VAR59 );

      VAR14->VAR23 |= VAR60;

      goto VAR22;
    }

    
    if ( VAR14->VAR37 == -1 )
      VAR16 = VAR18->VAR57 + ( VAR18->VAR55 - 1 );
    else
      VAR16 = VAR18->VAR33 + ( VAR18->VAR34 - 1 );

    
    if ( VAR14->VAR23 & VAR61 )
    {
      
      
      if ( VAR14->VAR62 >= (unsigned long)VAR16->VAR63.VAR64 )
      {
        if ( !( VAR14->VAR23 & VAR59 ) )
        {
          FUN17(( "" VAR65, VAR16->VAR54 ));
          VAR14->VAR23 |= VAR59;
          VAR18->VAR52 = 1;
        }

        goto VAR22;
      }

      
      
      VAR12 = VAR16->VAR66 << 1;
      VAR9      = VAR16->VAR67 + VAR14->VAR62 * VAR16->VAR66;

      for ( VAR10 = 0; VAR10 < VAR12; VAR10++ )
      {
        VAR6 = VAR1[VAR10];
        if ( !FUN20( VAR68, VAR6 ) )
          break;
        *VAR9 = (VAR69)( ( *VAR9 << 4 ) + VAR70[VAR6] );
        if ( VAR10 + 1 < VAR12 && ( VAR10 & 1 ) )
          *++VAR9 = 0;
      }

      
      
      if ( VAR10 < VAR12                            &&
           !( VAR14->VAR23 & VAR58 ) )
      {
        FUN17(( "" VAR71, VAR16->VAR54 ));
        VAR14->VAR23       |= VAR58;
        VAR18->VAR52  = 1;
      }

      
      VAR7 = ( VAR16->VAR63.VAR72 * VAR14->VAR18->VAR73 ) & 7;
      if ( VAR16->VAR63.VAR72 )
        *VAR9 &= VAR74[VAR7];

      
      if ( VAR10 == VAR12                           &&
           FUN20( VAR68, VAR1[VAR12] )      &&
           !( VAR14->VAR23 & VAR58 ) )
      {
        FUN17(( "" VAR75, VAR16->VAR54 ));
        VAR14->VAR23       |= VAR58;
        VAR18->VAR52  = 1;
      }

      VAR14->VAR62++;
      goto VAR22;
    }

    
    if ( FUN3( VAR1, "", 6 ) == 0 )
    {
      if ( !( VAR14->VAR23 & VAR60 ) )
        goto VAR76;

      VAR20 = FUN6( &VAR14->VAR27, (char *)"", VAR1, VAR2 );
      if ( VAR20 )
        goto VAR22;

      VAR16->VAR77 = (unsigned short)FUN7( VAR14->VAR27.VAR30[1], 0, 10 );
      VAR14->VAR23 |= VAR78;

      goto VAR22;
    }

    
    if ( FUN3( VAR1, "", 6 ) == 0 )
    {
      if ( !( VAR14->VAR23 & VAR60 ) )
        goto VAR76;

      VAR20 = FUN6( &VAR14->VAR27, (char *)"", VAR1, VAR2 );
      if ( VAR20 )
        goto VAR22;

      VAR16->VAR79 = (unsigned short)FUN7( VAR14->VAR27.VAR30[1], 0, 10 );

      if ( !( VAR14->VAR23 & VAR78 ) )
      {
        
        
        FUN17(( "" VAR80, VAR3 ));

        VAR16->VAR77 = (unsigned short)FUN21(
                          VAR16->VAR79, 72000L,
                          (VAR81)( VAR18->VAR82 *
                                     VAR18->VAR83 ) );
      }

      VAR14->VAR23 |= VAR84;
      goto VAR22;
    }

    
    if ( FUN3( VAR1, "", 3 ) == 0 )
    {
      if ( !( VAR14->VAR23 & VAR60 ) )
        goto VAR76;

      VAR20 = FUN6( &VAR14->VAR27, (char *)"", VAR1, VAR2 );
      if ( VAR20 )
        goto VAR22;

      VAR16->VAR63.VAR72    = FUN22( VAR14->VAR27.VAR30[1], 0, 10 );
      VAR16->VAR63.VAR64   = FUN22( VAR14->VAR27.VAR30[2], 0, 10 );
      VAR16->VAR63.VAR85 = FUN22( VAR14->VAR27.VAR30[3], 0, 10 );
      VAR16->VAR63.VAR86 = FUN22( VAR14->VAR27.VAR30[4], 0, 10 );

      
      VAR16->VAR63.VAR87  = (short)( VAR16->VAR63.VAR64 + VAR16->VAR63.VAR86 );
      VAR16->VAR63.VAR88 = (short)( -VAR16->VAR63.VAR86 );

      
      
      VAR14->VAR89    = (short)FUN23( VAR16->VAR63.VAR87, VAR14->VAR89 );
      VAR14->VAR90    = (short)FUN23( VAR16->VAR63.VAR88, VAR14->VAR90 );

      VAR14->VAR91 = (short)( VAR16->VAR63.VAR72 + VAR16->VAR63.VAR85 );

      VAR14->VAR92    = (short)FUN23( VAR14->VAR91, VAR14->VAR92 );
      VAR14->VAR93    = (short)FUN24( VAR16->VAR63.VAR85, VAR14->VAR93 );
      VAR14->VAR94    = (short)FUN23( VAR16->VAR63.VAR85, VAR14->VAR94 );

      if ( !( VAR14->VAR23 & VAR84 ) )
      {
        
        
        FUN17(( "" VAR95, VAR3 ));
        VAR16->VAR79 = VAR16->VAR63.VAR72;
      }

      
      
      if ( VAR14->VAR40->VAR96 != 0 )
      {
        
        unsigned short  VAR97 = (unsigned short)FUN21(
                               VAR16->VAR79, 72000L,
                               (VAR81)( VAR18->VAR82 *
                                          VAR18->VAR83 ) );


        if ( VAR97 != VAR16->VAR77 )
        {
          VAR16->VAR77 = VAR97;

          if ( VAR14->VAR37 == -1 )
            FUN18( VAR18->VAR98,
                                     VAR18->VAR55 - 1 );
          else
            FUN18( VAR18->VAR99, VAR16->VAR54 );

          VAR14->VAR23       |= VAR100;
          VAR18->VAR52  = 1;
        }
      }

      VAR14->VAR23 |= VAR101;
      goto VAR22;
    }

    
    if ( FUN3( VAR1, "", 6 ) == 0 )
    {
      unsigned long  VAR102;


      if ( !( VAR14->VAR23 & VAR101 ) )
      {
        
        FUN5(( "" VAR25, VAR3, "" ));
        VAR20 = VAR103;
        goto VAR22;
      }

      
      VAR16->VAR66 = ( VAR16->VAR63.VAR72 * VAR14->VAR18->VAR73 + 7 ) >> 3;

      VAR102 = VAR16->VAR66 * VAR16->VAR63.VAR64;
      if ( VAR16->VAR66 > 0xFFFFU || VAR102 > 0xFFFFU )
      {
        FUN5(( "" VAR104, VAR3 ));
        VAR20 = VAR105;
        goto VAR22;
      }
      else
        VAR16->VAR106 = (unsigned short)VAR102;

      if ( FUN8( VAR16->VAR67, VAR16->VAR106 ) )
        goto VAR22;

      VAR14->VAR62    = 0;
      VAR14->VAR23 |= VAR61;

      goto VAR22;
    }

    FUN5(( "" VAR107, VAR3 ));
    VAR20 = VAR44;
    goto VAR22;

  VAR76:
    
    FUN5(( "" VAR25, VAR3, "" ));
    VAR20 = VAR108;

  VAR22:
    if ( VAR20 && ( VAR14->VAR23 & VAR39 ) )
      FUN10( VAR14->VAR42 );

    return VAR20;
  }