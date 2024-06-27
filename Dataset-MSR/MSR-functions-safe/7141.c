FUN1( CF2_GlyphPath  VAR1,
                        CF2_Fixed      VAR2,
                        CF2_Fixed      VAR3 )
  {
    CF2_Fixed  VAR4, VAR5;
    FT_Vector  VAR6, VAR7;
    FT_Bool    VAR8;

    

    
    VAR8 = FUN2( VAR1->VAR9 ) &&
                 !VAR1->VAR10;

    

    

    if ( VAR1->VAR11.VAR2 == VAR2 &&
         VAR1->VAR11.VAR3 == VAR3 &&
         !VAR8                 )
      
      return;

    FUN3( VAR1,
                                 VAR1->VAR11.VAR2,
                                 VAR1->VAR11.VAR3,
                                 VAR2,
                                 VAR3,
                                 &VAR4,
                                 &VAR5 );

    
    VAR6.VAR2 = VAR1->VAR11.VAR2 + VAR4;
    VAR6.VAR3 = VAR1->VAR11.VAR3 + VAR5;
    VAR7.VAR2 = VAR2 + VAR4;
    VAR7.VAR3 = VAR3 + VAR5;

    if ( VAR1->VAR12 )
    {
      
      FUN4( VAR1, VAR6 );

      VAR1->VAR12 = VAR13;  
      VAR1->VAR14    = VAR15;

      VAR1->VAR16 = VAR7;              
    }

    if ( VAR1->VAR17 )
    {
      FUN5( FUN6( &VAR1->VAR18 ) );

      FUN7( VAR1,
                                  &VAR1->VAR18,
                                  &VAR6,
                                  VAR7,
                                  VAR13 );
    }

    
    VAR1->VAR17 = VAR15;
    VAR1->VAR19   = VAR20;
    VAR1->VAR21   = VAR6;
    VAR1->VAR22   = VAR7;

    
    if ( VAR8 )
      FUN8( &VAR1->VAR18,
                         VAR1->VAR23,
                         VAR1->VAR24,
                         VAR1->VAR9,
                         VAR1->VAR25,
                         VAR13 );

    VAR1->VAR11.VAR2 = VAR2;     
    VAR1->VAR11.VAR3 = VAR3;
  }