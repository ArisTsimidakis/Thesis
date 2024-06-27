FUN1( RenderState  VAR1,
                      double       VAR2 )
  {
    ADisplay  VAR3 = (VAR4)VAR1->VAR3.VAR5;


    FUN2( VAR3, VAR2 );
    if ( VAR3->VAR6 == 0.0 )
      sprintf( VAR1->VAR7, "" );
    else
      sprintf( VAR1->VAR7, "", VAR3->VAR6 );

    VAR1->VAR8 = VAR1->VAR7;
  }