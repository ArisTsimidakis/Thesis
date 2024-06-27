FUN1( FT_Library  VAR1,
                          FT_Stream   VAR2,
                          VAR3    *VAR4,
                          FT_Long     VAR5,
                          FT_Long     VAR6,
                          VAR7    *VAR8 )
  {
    FT_Error   VAR9  = VAR10;
    FT_Memory  VAR11 = VAR1->VAR11;
    VAR12*   VAR13;
    int        VAR14, VAR15, VAR16;
    FT_Long    VAR17;
    FT_Long    VAR18, VAR19, VAR20;
    FT_Long    VAR21, VAR22;


    if ( VAR6 == -1 )
      VAR6 = 0;
    if ( VAR6 != 0 )
      return VAR9;

    
    
    VAR18 = 0;
    for ( VAR14 = 0; VAR14 < VAR5; ++VAR14 )
    {
      VAR9 = FUN2( VAR2, VAR4[VAR14] );
      if ( VAR9 )
        goto VAR23;
      if ( FUN3( VAR22 ) )
        goto VAR23;
      VAR18 += VAR22 + 6;
    }

    if ( FUN4( VAR13, (VAR3)VAR18 + 2 ) )
      goto VAR23;

    VAR13[0] = 0x80;
    VAR13[1] = 1;            
    VAR13[2] = 0;            
    VAR13[3] = 0;
    VAR13[4] = 0;
    VAR13[5] = 0;
    VAR19     = 6;
    VAR20  = 2;

    VAR17 = 0;
    VAR15 = 1;
    for ( VAR14 = 0; VAR14 < VAR5; ++VAR14 )
    {
      VAR9 = FUN2( VAR2, VAR4[VAR14] );
      if ( VAR9 )
        goto VAR24;
      if ( FUN3( VAR21 ) )
        goto VAR23;
      if ( FUN5( VAR16 ) )
        goto VAR23;
      VAR21 -= 2;                    
      if ( ( VAR16 >> 8 ) == VAR15 )
        VAR17 += VAR21;
      else
      {
        VAR13[VAR20    ] = (VAR12)( VAR17 );
        VAR13[VAR20 + 1] = (VAR12)( VAR17 >> 8 );
        VAR13[VAR20 + 2] = (VAR12)( VAR17 >> 16 );
        VAR13[VAR20 + 3] = (VAR12)( VAR17 >> 24 );

        if ( ( VAR16 >> 8 ) == 5 )      
          break;

        VAR13[VAR19++] = 0x80;

        VAR15 = VAR16 >> 8;
        VAR17 = VAR21;

        VAR13[VAR19++] = (VAR12)VAR15;
        VAR20          = VAR19;
        VAR13[VAR19++] = 0;        
        VAR13[VAR19++] = 0;
        VAR13[VAR19++] = 0;
        VAR13[VAR19++] = 0;
       }
 
       VAR9 = FUN6( VAR2, (VAR12 *)VAR13 + VAR19, VAR21 );




       VAR19 += VAR21;
     }

    VAR13[VAR20    ] = (VAR12)( VAR17 );
    VAR13[VAR20 + 1] = (VAR12)( VAR17 >> 8 );
    VAR13[VAR20 + 2] = (VAR12)( VAR17 >> 16 );
    VAR13[VAR20 + 3] = (VAR12)( VAR17 >> 24 );

    return FUN7( VAR1,
                                  VAR13,
                                  VAR19,
                                  VAR6,
                                  "",
                                  VAR8 );

  VAR24:
    FUN8( VAR13 );

  VAR23:
    return VAR9;
  }