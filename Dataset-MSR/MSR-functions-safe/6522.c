FUN1( FT_Stream       VAR1,
                 FT_Memory       VAR2,
                 VAR3*  VAR4,
                 VAR5*    *VAR6 )
  {
    unsigned long  VAR7 = 0; 
    VAR8   *VAR9     = NULL;

    FT_Memory      VAR10 = VAR2;
    FT_Error       VAR11  = VAR12;


    if ( FUN2( VAR9 ) )
      goto VAR13;

    VAR10    = NULL;
    VAR9->VAR4   = (VAR3*)( ( VAR4 != 0 ) ? VAR4 : &VAR14 );
    VAR9->VAR15  = 32767;
    VAR9->VAR10 = VAR2;  

    FUN3( &VAR9->VAR16, VAR2 );

    VAR11 = FUN4( VAR1, VAR17,
                             (void *)VAR9, &VAR7 );
    if ( VAR11 )
      goto VAR18;

    if ( VAR9->VAR6 != 0 )
    {
      
      
      VAR10 = VAR9->VAR6->VAR10;

      if ( VAR9->VAR6->VAR19 != VAR20 )
        VAR9->VAR6->VAR21 = VAR9->VAR6->VAR22.VAR23;

      
      
      if ( VAR9->VAR24 != VAR9->VAR6->VAR25 + VAR9->VAR6->VAR26 )
      {
        FUN5(( "" VAR27, VAR9->VAR24,
                    VAR9->VAR6->VAR25 + VAR9->VAR6->VAR26 ));
        VAR9->VAR6->VAR28 = 1;
      }

      
      
      if ( VAR9->VAR4->VAR29 != 0 &&
           ( VAR9->VAR6->VAR25 > 0 || VAR9->VAR6->VAR26 > 0 ) )
      {
        if ( VAR9->VAR30 - VAR9->VAR15 != VAR9->VAR6->VAR22.VAR23 )
        {
          FUN5(( "" VAR31,
                      VAR9->VAR6->VAR22.VAR23, VAR9->VAR30 - VAR9->VAR15 ));
          VAR9->VAR6->VAR22.VAR23 = (unsigned short)( VAR9->VAR30 - VAR9->VAR15 );
          VAR9->VAR6->VAR28  = 1;
        }

        if ( VAR9->VAR6->VAR22.VAR32 != VAR9->VAR15 )
        {
          FUN5(( "" VAR33,
                      VAR9->VAR6->VAR22.VAR32, VAR9->VAR15 ));
          VAR9->VAR6->VAR22.VAR32 = VAR9->VAR15;
          VAR9->VAR6->VAR28     = 1;
        }

        if ( VAR9->VAR6->VAR22.VAR34 != VAR9->VAR35 )
        {
          FUN5(( "" VAR36,
                      VAR9->VAR6->VAR22.VAR34, VAR9->VAR35 ));
          VAR9->VAR6->VAR22.VAR34 = VAR9->VAR35;
          VAR9->VAR6->VAR28   = 1;
        }

        if ( VAR9->VAR6->VAR22.VAR37 != VAR9->VAR38 )
        {
          FUN5(( "" VAR39,
                      VAR9->VAR6->VAR22.VAR37, VAR9->VAR38 ));
          VAR9->VAR6->VAR22.VAR37  = VAR9->VAR38;
          VAR9->VAR6->VAR22.VAR40 = (short)( -VAR9->VAR38 );
          VAR9->VAR6->VAR28     = 1;
        }

        if ( VAR9->VAR35 + VAR9->VAR38 != VAR9->VAR6->VAR22.VAR41 )
        {
          FUN5(( "" VAR42,
                      VAR9->VAR6->VAR22.VAR41, VAR9->VAR35 + VAR9->VAR38 ));
          VAR9->VAR6->VAR22.VAR41 = (unsigned short)( VAR9->VAR35 + VAR9->VAR38 );
        }

        if ( VAR9->VAR43 & VAR44 )
          FUN5(( "" VAR45 ));
      }
    }

    if ( VAR9->VAR43 & VAR46 )
    {
      
      if ( !( VAR9->VAR43 & VAR47 ) )
      {
        
        FUN6(( "" VAR48, VAR7 ));
        VAR11 = VAR49;
        goto VAR13;
      }
      else
      {
        
        FUN6(( "" VAR50, VAR7 ));
        VAR11 = VAR51;
        goto VAR13;
      }
    }

    if ( VAR9->VAR6 != 0 )
    {
      
      VAR10 = VAR9->VAR6->VAR10;

      if ( VAR9->VAR6->VAR52 > 0 )
      {
        if ( FUN7( VAR9->VAR6->VAR53,
                             VAR9->VAR6->VAR52,
                             VAR9->VAR6->VAR52 + 1 ) )
          goto VAR18;

        VAR9->VAR6->VAR53[VAR9->VAR6->VAR52] = 0;
      }
    }
    else if ( VAR11 == VAR12 )
      VAR11 = VAR54;

    *VAR6 = VAR9->VAR6;

  VAR13:
    if ( VAR9 )
    {
      FUN8( &VAR9->VAR16 );

      VAR10 = VAR2;

      FUN9( VAR9 );
    }

    return VAR11;

  VAR18:
    FUN10( VAR9->VAR6 );

    VAR10 = VAR2;

    FUN9( VAR9->VAR6 );

    goto VAR13;
  }