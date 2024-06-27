FUN1( FT_Library  VAR1,
                      VAR2*  VAR3,
                      FT_Pos      VAR4,
                      FT_Pos      VAR5 )
   {
     FT_Error        VAR6;
     unsigned char*  VAR7;

    FT_Int          VAR8, VAR9, VAR10, VAR11;




     FT_Int          VAR12, VAR13;
 
 
      return FUN2( VAR14 );

    if ( !VAR3 || !VAR3->VAR15 )
      return FUN2( VAR16 );

    if ( ( ( FUN3( VAR4 ) >> 6 ) > VAR17 ) ||
         ( ( FUN3( VAR5 ) >> 6 ) > VAR17 ) )
      return FUN2( VAR16 );

    VAR12 = (VAR18)FUN3( VAR4 ) >> 6;
    VAR13 = (VAR18)FUN3( VAR5 ) >> 6;

    if ( VAR12 == 0 && VAR13 == 0 )
      return VAR19;
    else if ( VAR12 < 0 || VAR13 < 0 )
      return FUN2( VAR16 );

    switch ( VAR3->VAR20 )
    {
    case VAR21:
    case VAR22:
      {
        FT_Bitmap  VAR23;


        
        FUN4( &VAR23 );
        VAR6 = FUN5( VAR1, VAR3, &VAR23, 1 );
        if ( VAR6 )
          return VAR6;

        FUN6( VAR1, VAR3 );
        *VAR3 = VAR23;
      }
      break;

    case VAR24:
      if ( VAR12 > 8 )
        VAR12 = 8;
      break;

    case VAR25:
      VAR12 *= 3;
      break;

    case VAR26:
      VAR13 *= 3;
      break;

    case VAR27:
      
      return VAR19;
    }

    VAR6 = FUN7( VAR1->VAR28, VAR3, VAR12, VAR13 );
    if ( VAR6 )
      return VAR6;

    
    VAR11 = VAR3->VAR11;
    if ( VAR11 > 0 )
      VAR7 = VAR3->VAR15 + VAR11 * VAR13;
    else
    {
      VAR11 = -VAR11;
      VAR7 = VAR3->VAR15 + VAR11 * ( VAR3->VAR29 - 1 );
    }

    
    for ( VAR10 = 0; VAR10 < VAR3->VAR29 ; VAR10++ )
    {
      
      for ( VAR9 = VAR11 - 1; VAR9 >= 0; VAR9-- )
      {
        unsigned char  VAR23;


        VAR23 = VAR7[VAR9];
        for ( VAR8 = 1; VAR8 <= VAR12; VAR8++ )
        {
          if ( VAR3->VAR20 == VAR24 )
          {
            VAR7[VAR9] |= VAR23 >> VAR8;

            
            if ( VAR9 > 0 )
              VAR7[VAR9] |= VAR7[VAR9 - 1] << ( 8 - VAR8 );

#if 0
            if ( VAR7[VAR9] == 0xff )
              break;
#endif
          }
          else
          {
            if ( VAR9 - VAR8 >= 0 )
            {
              if ( VAR7[VAR9] + VAR7[VAR9 - VAR8] > VAR3->VAR30 - 1 )
              {
                VAR7[VAR9] = (unsigned char)( VAR3->VAR30 - 1 );
                break;
              }
              else
              {
                VAR7[VAR9] = (unsigned char)( VAR7[VAR9] + VAR7[VAR9 - VAR8] );
                if ( VAR7[VAR9] == VAR3->VAR30 - 1 )
                  break;
              }
            }
            else
              break;
          }
        }
      }

      
      for ( VAR9 = 1; VAR9 <= VAR13; VAR9++ )
      {
        unsigned char*  VAR31;


        VAR31 = VAR7 - VAR3->VAR11 * VAR9;
        for ( VAR8 = 0; VAR8 < VAR11; VAR8++ )
          VAR31[VAR8] |= VAR7[VAR8];
      }

      VAR7 += VAR3->VAR11;
    }

    VAR3->VAR32 += VAR12;
    VAR3->VAR29 += VAR13;

    return VAR19;
  }