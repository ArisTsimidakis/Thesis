FUN1( CF2_HintMap   VAR1,
                     CF2_ArrStack  VAR2,
                     CF2_ArrStack  VAR3,
                     CF2_HintMask  VAR4,
                     CF2_Fixed     VAR5,
                     FT_Bool       VAR6 )
  {
    VAR7*  VAR8;

    CF2_Font         VAR9 = VAR1->VAR9;
    CF2_HintMaskRec  VAR10;

    size_t   VAR11, VAR12;
    FT_Byte  VAR13;


    
    if ( !VAR6 && !FUN2( VAR1->VAR14 ) )
    {
      
      
      FUN3( &VAR10, VAR4->VAR15 );
      FUN1( VAR1->VAR14,
                         VAR2,
                         VAR3,
                         &VAR10,
                         VAR5,
                         VAR16 );
    }

    if ( !FUN4( VAR4 ) )
    {
      
      FUN5( VAR4,
                           FUN6( VAR2 ) +
                             FUN6( VAR3 ) );
      if ( !FUN4( VAR4 ) )
          return;                   
    }

    
    VAR1->VAR17     = 0;
    VAR1->VAR18 = 0;

    
    VAR10 = *VAR4;
     VAR8      = FUN7( &VAR10 );
 
     

    
     VAR11 = FUN6( VAR2 );
 








     
     if ( VAR9->VAR19.VAR20 )
     {
      FUN8( &VAR21 );   

      
      FUN9( VAR1,
                              &VAR9->VAR19.VAR22,
                              &VAR21 );
      
      FUN9( VAR1,
                              &VAR21,
                              &VAR9->VAR19.VAR23 );
    }

    
    
    for ( VAR12 = 0, VAR13 = 0x80; VAR12 < VAR11; VAR12++ )
    {
      if ( VAR13 & *VAR8 )
      {
        
        CF2_HintRec  VAR24, VAR25;


        FUN10( &VAR24,
                       VAR2,
                       VAR12,
                       VAR9,
                       VAR5,
                       VAR1->VAR26,
                       VAR16  );
        FUN10( &VAR25,
                       VAR2,
                       VAR12,
                       VAR9,
                       VAR5,
                       VAR1->VAR26,
                       VAR27  );

        if ( FUN11( &VAR24 ) ||
             FUN11( &VAR25 )    ||
             FUN12( &VAR9->VAR19,
                                &VAR24,
                                &VAR25 )   )
        {
          
          FUN9( VAR1, &VAR24, &VAR25 );

          *VAR8 &= ~VAR13;      
        }
      }

      if ( ( VAR12 & 7 ) == 7 )
      {
        
        VAR8++;
        VAR13 = 0x80;
      }
      else
        VAR13 >>= 1;
    }

    

    

    if ( VAR6 )
    {
      
      
      

      if ( VAR1->VAR17 == 0                           ||
           VAR1->VAR28[0].VAR29 > 0                  ||
           VAR1->VAR28[VAR1->VAR17 - 1].VAR29 < 0 )
      {
        
        

        CF2_HintRec  VAR28, VAR30;


        FUN8( &VAR28 );

        VAR28.VAR31 = VAR32 |
                     VAR33      |
                     VAR34;
        VAR28.VAR26 = VAR1->VAR26;

        FUN8( &VAR30 );
        FUN9( VAR1, &VAR28, &VAR30 );
      }
    }
    else
    {
      

      VAR8 = FUN7( &VAR10 );

      for ( VAR12 = 0, VAR13 = 0x80; VAR12 < VAR11; VAR12++ )
      {
        if ( VAR13 & *VAR8 )
        {
          CF2_HintRec  VAR24, VAR25;


          FUN10( &VAR24,
                         VAR2,
                         VAR12,
                         VAR9,
                         VAR5,
                         VAR1->VAR26,
                         VAR16  );
          FUN10( &VAR25,
                         VAR2,
                         VAR12,
                         VAR9,
                         VAR5,
                         VAR1->VAR26,
                         VAR27  );

          FUN9( VAR1, &VAR24, &VAR25 );
        }

        if ( ( VAR12 & 7 ) == 7 )
        {
          
          VAR8++;
          VAR13 = 0x80;
        }
        else
          VAR13 >>= 1;
      }
    }

    

    
    FUN13( VAR1 );

    
    
    if ( !VAR6 )
    {
      for ( VAR12 = 0; VAR12 < VAR1->VAR17; VAR12++ )
      {
        if ( !FUN14( &VAR1->VAR28[VAR12] ) )
        {
          
          
          CF2_StemHint  VAR35 = (VAR36)
                          FUN15( VAR2,
                                                   VAR1->VAR28[VAR12].VAR37 );


          if ( FUN16( &VAR1->VAR28[VAR12] ) )
            VAR35->VAR38 = VAR1->VAR28[VAR12].VAR39;
          else
            VAR35->VAR40 = VAR1->VAR28[VAR12].VAR39;

          VAR35->VAR41 = VAR16;
        }
      }
    }

    
    VAR1->VAR42 = VAR16;

    
    FUN17( VAR4, VAR27 );
  }