FUN1( T1_Face    VAR1,
                     T1_Loader  VAR2 )
  {
    T1_Parser      VAR3       = &VAR2->VAR3;
    PS_Table       VAR4   = &VAR2->VAR5;
    PS_Table       VAR6   = &VAR2->VAR7;
    PS_Table       VAR8   = &VAR2->VAR8;
    FT_Memory      VAR9       = VAR3->VAR10.VAR9;
    FT_Error       VAR11;

    PSAux_Service  VAR12        = (VAR13)VAR1->VAR12;

    VAR14*       VAR15;
    VAR14*       VAR16        = VAR3->VAR10.VAR16;
    FT_Int         VAR17, VAR18;
    FT_UInt        VAR19 = 0;
    FT_Byte        VAR20 = 0;


    VAR18 = (VAR21)FUN2( VAR3 );
    if ( VAR18 < 0 )
    {
      VAR11 = FUN3( VAR22 );
      goto VAR23;
    }

    
    
    if ( VAR18 == 0 || VAR3->VAR10.VAR11 )
      return;

    
    
    

    
    
    
    if ( !VAR2->VAR18 )
    {
      VAR11 = VAR12->VAR24->FUN4(
                VAR4, VAR18 + 1 + VAR25, VAR9 );
      if ( VAR11 )
        goto VAR23;

      VAR11 = VAR12->VAR24->FUN4(
                VAR6, VAR18 + 1 + VAR25, VAR9 );
      if ( VAR11 )
        goto VAR23;

      
      

      VAR11 = VAR12->VAR24->FUN4( VAR8, 4, VAR9 );
      if ( VAR11 )
        goto VAR23;
    }

    VAR17 = 0;

    for (;;)
    {
      FT_Long   VAR26;
      VAR14*  VAR27;


      
      

      FUN5( VAR3 );

      VAR15 = VAR3->VAR10.VAR28;
      if ( VAR15 >= VAR16 )
        break;

      
      if ( VAR15 + 3 < VAR16 && FUN6( VAR15[3] ) )
      {
        if ( VAR15[0] == '' &&
             VAR15[1] == '' &&
             VAR15[2] == '' )
        {
          
          
          
          
          
          
          
          
          
          
          if ( VAR17 )
            break;
        }

        if ( VAR15[0] == '' &&
             VAR15[1] == '' &&
             VAR15[2] == '' )
          break;
      }

      FUN7( VAR3 );
      if ( VAR3->VAR10.VAR11 )
        return;

      if ( *VAR15 == '' )
      {
         FT_PtrDist  VAR29;
 
 

        if ( VAR15 + 1 >= VAR16 )


         {
           VAR11 = FUN3( VAR22 );
           goto VAR23;
        }

        VAR15++;                              
        VAR29 = VAR3->VAR10.VAR28 - VAR15;

        if ( !FUN8( VAR3, &VAR26, &VAR27, VAR30 ) )
          return;

        
        
        
        if ( VAR2->VAR18 )
          continue;

        VAR11 = FUN9( VAR6, VAR17, VAR15, VAR29 + 1 );
        if ( VAR11 )
          goto VAR23;

        
        VAR6->VAR31[VAR17][VAR29] = '';

        
        if ( *VAR15 == ''                                              &&
             FUN10( "",
                        (const char*)(VAR6->VAR31[VAR17]) ) == 0 )
        {
          VAR19 = VAR17;
          VAR20 = 1;
        }

        if ( VAR1->VAR32.VAR33.VAR34 >= 0 &&
             VAR17 < VAR18 + VAR25       )
        {
          VAR14*  VAR35;


          if ( VAR26 <= VAR1->VAR32.VAR33.VAR34 )
          {
            VAR11 = FUN3( VAR22 );
            goto VAR23;
          }

          
          if ( FUN11( VAR35, VAR26 ) )
            goto VAR23;
          FUN12( VAR35, VAR27, VAR26 );
          VAR12->FUN13( VAR35, VAR26, 4330 );
          VAR26 -= VAR1->VAR32.VAR33.VAR34;
          VAR11 = FUN9( VAR4, VAR17,
                                VAR35 + VAR1->VAR32.VAR33.VAR34, VAR26 );
          FUN14( VAR35 );
        }
        else
          VAR11 = FUN9( VAR4, VAR17, VAR27, VAR26 );
        if ( VAR11 )
          goto VAR23;

        VAR17++;
      }
    }

    VAR2->VAR18 = VAR17;

    
    if ( VAR20                                                 &&
         FUN10( "", (const char*)VAR6->VAR31[0] ) )
    {
      
      
      
      
      

      
      VAR11 = FUN9( VAR8, 0,
                            VAR6->VAR31[0],
                            VAR6->VAR36 [0] );
      if ( VAR11 )
        goto VAR23;

      
      VAR11 = FUN9( VAR8, 1,
                            VAR4->VAR31[0],
                            VAR4->VAR36 [0] );
      if ( VAR11 )
        goto VAR23;

      
      VAR11 = FUN9( VAR8, 2,
                            VAR6->VAR31[VAR19],
                            VAR6->VAR36 [VAR19] );
      if ( VAR11 )
        goto VAR23;

      
      VAR11 = FUN9( VAR8, 3,
                            VAR4->VAR31[VAR19],
                            VAR4->VAR36 [VAR19] );
      if ( VAR11 )
        goto VAR23;

      VAR11 = FUN9( VAR6, VAR19,
                            VAR8->VAR31[0],
                            VAR8->VAR36 [0] );
      if ( VAR11 )
        goto VAR23;

      VAR11 = FUN9( VAR4, VAR19,
                            VAR8->VAR31[1],
                            VAR8->VAR36 [1] );
      if ( VAR11 )
        goto VAR23;

      VAR11 = FUN9( VAR6, 0,
                            VAR8->VAR31[2],
                            VAR8->VAR36 [2] );
      if ( VAR11 )
        goto VAR23;

      VAR11 = FUN9( VAR4, 0,
                            VAR8->VAR31[3],
                            VAR8->VAR36 [3] );
      if ( VAR11 )
        goto VAR23;

    }
    else if ( !VAR20 )
    {
      
      
      
      

      
      FT_Byte  VAR37[] = { 0x8B, 0xF7, 0xE1, 0x0D, 0x0E };
      char*    VAR38    = (char *)"";


      VAR11 = FUN9( VAR8, 0,
                            VAR6->VAR31[0],
                            VAR6->VAR36 [0] );
      if ( VAR11 )
        goto VAR23;

      VAR11 = FUN9( VAR8, 1,
                            VAR4->VAR31[0],
                            VAR4->VAR36 [0] );
      if ( VAR11 )
        goto VAR23;

      VAR11 = FUN9( VAR6, 0, VAR38, 8 );
      if ( VAR11 )
        goto VAR23;

      VAR11 = FUN9( VAR4, 0, VAR37, 5 );

      if ( VAR11 )
        goto VAR23;

      VAR11 = FUN9( VAR6, VAR17,
                            VAR8->VAR31[0],
                            VAR8->VAR36 [0] );
      if ( VAR11 )
        goto VAR23;

      VAR11 = FUN9( VAR4, VAR17,
                            VAR8->VAR31[1],
                            VAR8->VAR36 [1] );
      if ( VAR11 )
        goto VAR23;

      
      VAR2->VAR18 += 1;
    }

    return;

  VAR23:
    VAR3->VAR10.VAR11 = VAR11;
  }