FUN1( T42_Face    VAR1,
                         T42_Loader  VAR2 )
  {
    T42_Parser  VAR3 = &VAR2->VAR3;
    VAR4*  VAR5 = &VAR1->VAR6.VAR7;
    VAR8*  VAR9 = &VAR1->VAR6.VAR10;
     FT_Face     VAR11   = (VAR12)&VAR1->VAR11;
     FT_Fixed    VAR13[6];
     FT_Fixed    VAR14;


 
 

    (void)FUN2( VAR3, 6, VAR13, 3 );














 
     VAR14 = FUN3( VAR13[3] );
 














     
     
     
    VAR5->VAR15 = VAR13[0];
    VAR5->VAR16 = VAR13[1];
    VAR5->VAR17 = VAR13[2];
    VAR5->VAR18 = VAR13[3];

    
    VAR9->VAR19 = VAR13[4] >> 16;
    VAR9->VAR20 = VAR13[5] >> 16;
       VAR13[2] = FUN4( VAR13[2], VAR14 );
       VAR13[4] = FUN4( VAR13[4], VAR14 );
       VAR13[5] = FUN4( VAR13[5], VAR14 );

      VAR13[3] = 0x10000L;


     }