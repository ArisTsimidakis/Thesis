FUN1( T1_Face    VAR1,
                        T1_Loader  VAR2 )
  {
    T1_Parser   VAR3 = &VAR2->VAR3;
    VAR4*  VAR5 = &VAR1->VAR6.VAR7;
    VAR8*  VAR9 = &VAR1->VAR6.VAR10;
    FT_Face     VAR11   = (VAR12)&VAR1->VAR11;
    FT_Fixed    VAR13[6];
    FT_Fixed    VAR14;
    FT_Int      VAR15;

 
     VAR15 = FUN2( VAR3, 6, VAR13, 3 );
 

    if ( VAR15 < 0 )


     {
       VAR3->VAR11.VAR16 = FUN3( VAR17 );
       return;
    }

    VAR14 = FUN4( VAR13[3] );

    if ( VAR14 == 0 )
    {
      FUN5(( "" ));
      VAR3->VAR11.VAR16 = FUN3( VAR17 );
      return;
    }

    
    
    

    VAR11->VAR18 = (VAR19)FUN6( 1000, VAR14 );

    
    if ( VAR14 != 0x10000L )
    {
      VAR13[0] = FUN6( VAR13[0], VAR14 );
      VAR13[1] = FUN6( VAR13[1], VAR14 );
      VAR13[2] = FUN6( VAR13[2], VAR14 );
      VAR13[4] = FUN6( VAR13[4], VAR14 );
      VAR13[5] = FUN6( VAR13[5], VAR14 );
      VAR13[3] = VAR13[3] < 0 ? -0x10000L : 0x10000L;
    }

    VAR5->VAR20 = VAR13[0];
    VAR5->VAR21 = VAR13[1];
    VAR5->VAR22 = VAR13[2];
    VAR5->VAR23 = VAR13[3];

    
    VAR9->VAR24 = VAR13[4] >> 16;
    VAR9->VAR25 = VAR13[5] >> 16;
  }