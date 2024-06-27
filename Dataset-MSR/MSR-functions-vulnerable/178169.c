FUN1( RenderState  VAR1 )
  {
    ADisplay  VAR2 = (VAR3)VAR1->VAR4.VAR5;


    if ( VAR1->VAR6 == NULL )
    {
      FontFace  VAR7 = &VAR1->VAR8[VAR1->VAR9];
      int       VAR10, VAR11;


      VAR10   = VAR7->VAR12;
      VAR11 = 1;
      while ( VAR11 + VAR1->VAR9 < VAR1->VAR13 &&
              VAR7[VAR11].VAR14 == VAR7[0].VAR14     )
        VAR11++;

      VAR11 += VAR10;
 
       VAR1->VAR6 = VAR1->VAR15;
       if ( VAR11 > 1 )

        sprintf( VAR1->VAR15, "",


                  VAR1->VAR16, VAR10 + 1, VAR11,
                  VAR1->VAR17 );
       else

        sprintf( VAR1->VAR15, "",


                  VAR1->VAR16,
                  VAR1->VAR17 );
     }

    FUN2( VAR2->VAR18, 0, VAR19 - 10, VAR1->VAR6,
                       VAR2->VAR20 );

    VAR1->VAR6 = NULL;
  }