FUN1( T42_Face    VAR1,
                         T42_Loader  VAR2 )
  {
    T42_Parser     VAR3       = &VAR2->VAR3;
    PS_Table       VAR4   = &VAR2->VAR5;
    PS_Table       VAR6   = &VAR2->VAR7;
    PS_Table       VAR8   = &VAR2->VAR8;
    FT_Memory      VAR9       = VAR3->VAR10.VAR9;
    FT_Error       VAR11;

    PSAux_Service  VAR12        = (VAR13)VAR1->VAR12;

    VAR14*       VAR15;
    VAR14*       VAR16        = VAR3->VAR10.VAR16;
    FT_UInt        VAR17;
    FT_UInt        VAR18 = 0;
    FT_Byte        VAR19 = 0;


    FUN2( VAR3 );

    if ( VAR3->VAR10.VAR20 >= VAR16 )
    {
      FUN3(( "" ));
      VAR11 = FUN4( VAR21 );
      goto VAR22;
    }

    if ( FUN5( *VAR3->VAR10.VAR20 ) )
    {
      VAR2->VAR23 = (VAR24)FUN6( VAR3 );
      if ( VAR3->VAR10.VAR11 )
        return;
    }
    else if ( *VAR3->VAR10.VAR20 == '' )
    {
      
      
      FT_UInt  VAR25 = 0;


      FUN7( VAR3 );
      if ( VAR3->VAR10.VAR11 )
        return;
      FUN2( VAR3 );
      VAR15 = VAR3->VAR10.VAR20;

      while ( VAR3->VAR10.VAR20 < VAR16 )
      {
        if ( *VAR3->VAR10.VAR20 == '' )
          VAR25++;
        else if ( *VAR3->VAR10.VAR20 == '' )
        {
          VAR2->VAR23  = VAR25;
          VAR3->VAR10.VAR20 = VAR15;        
          break;
        }
        FUN7( VAR3 );
        if ( VAR3->VAR10.VAR11 )
          return;
        FUN2( VAR3 );
      }
    }
    else
    {
      FUN3(( "" ));
      VAR11 = FUN4( VAR21 );
      goto VAR22;
    }

    if ( VAR3->VAR10.VAR20 >= VAR16 )
    {
      FUN3(( "" ));
      VAR11 = FUN4( VAR21 );
      goto VAR22;
    }

    

    VAR11 = VAR12->VAR26->FUN8( VAR4,
                                         VAR2->VAR23,
                                         VAR9 );
    if ( VAR11 )
      goto VAR22;

    VAR11 = VAR12->VAR26->FUN8( VAR6,
                                         VAR2->VAR23,
                                         VAR9 );
    if ( VAR11 )
      goto VAR22;

    
    

    VAR11 = VAR12->VAR26->FUN8( VAR8, 4, VAR9 );
    if ( VAR11 )
      goto VAR22;

    VAR17 = 0;

    for (;;)
    {
      
      

      FUN2( VAR3 );

      VAR15 = VAR3->VAR10.VAR20;
      if ( VAR15 >= VAR16 )
        break;

      
      if ( *VAR15   == ''          &&
           VAR15 + 3 < VAR16        &&
           VAR15[1] == ''          &&
           VAR15[2] == ''          &&
           FUN9( VAR15[3] ) )
        break;
      if ( *VAR15 == '' )
         break;
 
       FUN7( VAR3 );












       if ( VAR3->VAR10.VAR11 )
         return;
        {
          FUN3(( "" ));
          VAR11 = FUN4( VAR21 );
          goto VAR22;
        }

        VAR15++;                              
        VAR27 = VAR3->VAR10.VAR20 - VAR15;

        VAR11 = FUN10( VAR6, VAR17, VAR15, VAR27 + 1 );
        if ( VAR11 )
          goto VAR22;

        
        VAR6->VAR28[VAR17][VAR27] = '';

        
        if ( *VAR15 == ''                                              &&
             FUN11( "",
                        (const char*)(VAR6->VAR28[VAR17]) ) == 0 )
        {
          VAR18 = VAR17;
          VAR19 = 1;
        }

        FUN2( VAR3 );

        VAR15 = VAR3->VAR10.VAR20;

        (void)FUN6( VAR3 );
        if ( VAR3->VAR10.VAR20 >= VAR16 )
        {
          FUN3(( "" ));
          VAR11 = FUN4( VAR21 );
          goto VAR22;
        }

        VAR27 = VAR3->VAR10.VAR20 - VAR15;

        VAR11 = FUN10( VAR4, VAR17, VAR15, VAR27 + 1 );
        if ( VAR11 )
          goto VAR22;

        VAR4->VAR28[VAR17][VAR27] = '';

        VAR17++;
        if ( VAR17 >= VAR2->VAR23 )
          break;
      }
    }