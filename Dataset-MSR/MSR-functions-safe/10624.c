FUN1( TT_ExecContext  VAR1,
          VAR2*        VAR3 )
  {
    FT_UShort   VAR4, VAR5;
    FT_F26Dot6  VAR6;


    VAR4 = (VAR7)VAR3[1];
    VAR5 = (VAR7)VAR3[0];

    if ( FUN2( VAR5, VAR1->VAR8.VAR9 ) ||
         FUN2( VAR4, VAR1->VAR10.VAR9 ) )
    {
      if ( VAR1->VAR11 )
        VAR1->VAR12 = FUN3( VAR13 );
      VAR6 = 0;
    }
    else
    {
      if ( VAR1->VAR14 & 1 )
        VAR6 = FUN4( VAR1->VAR8.VAR15 + VAR5, VAR1->VAR10.VAR15 + VAR4 );
      else
      {
        

        if ( VAR1->VAR16.VAR17 == 0 || VAR1->VAR16.VAR18 == 0 )
        {
          VAR19*  VAR20 = VAR1->VAR8.VAR21 + VAR5;
          VAR19*  VAR22 = VAR1->VAR10.VAR21 + VAR4;


          VAR6 = FUN5( VAR20, VAR22 );
        }
        else
        {
          VAR19*  VAR20 = VAR1->VAR8.VAR23 + VAR5;
          VAR19*  VAR22 = VAR1->VAR10.VAR23 + VAR4;


          if ( VAR1->VAR24.VAR25 == VAR1->VAR24.VAR26 )
          {
            
            VAR6 = FUN5( VAR20, VAR22 );
            VAR6 = FUN6( VAR6, VAR1->VAR24.VAR25 );
          }
          else
          {
            FT_Vector  VAR27;


            VAR27.VAR28 = FUN6( VAR20->VAR28 - VAR22->VAR28, VAR1->VAR24.VAR25 );
            VAR27.VAR29 = FUN6( VAR20->VAR29 - VAR22->VAR29, VAR1->VAR24.VAR26 );

            VAR6 = FUN7( &VAR27 );
          }
        }
      }
    }

#ifdef VAR30
    
    if ( VAR31 &&
         VAR1->VAR32          &&
         FUN8( VAR6 ) == 64           )
      VAR6 += 1;
#endif 

    VAR3[0] = VAR6;
  }