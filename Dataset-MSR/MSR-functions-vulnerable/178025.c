FUN1( RAS_ARGS Short       VAR1,
                                  FT_F26Dot6  VAR2,
                                  FT_F26Dot6  VAR3,
                                  PProfile    VAR4,
                                  PProfile    VAR5 )
  {
    FUN2( VAR4 );
    FUN2( VAR5 );


    if ( VAR3 - VAR2 < VAR6.VAR7 )
    {
      Long  VAR8, VAR9;


      VAR8 = FUN3( VAR2 );
      VAR9 = FUN4  ( VAR3 );

      if ( VAR8 == VAR9 )
      {
        Byte   VAR10;
        PByte  VAR11;


        VAR11 = VAR6.VAR12 + ( VAR1 >> 3 );
        VAR10   = (VAR13)( 0x80 >> ( VAR1 & 7 ) );
 
         VAR8 = FUN5( VAR8 );
 

        if ( VAR8 >= 0 && VAR8 < VAR6.VAR14.VAR15 )


         {
           PByte  VAR16;
 

          VAR16 = VAR11 - VAR8 * VAR6.VAR14.VAR17;
          if ( VAR6.VAR14.VAR17 > 0 )
            VAR16 += ( VAR6.VAR14.VAR15 - 1 ) * VAR6.VAR14.VAR17;

          VAR16[0] |= VAR10;
        }
      }
    }
  }