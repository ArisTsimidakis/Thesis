FUN1( FT_Stream  VAR1 )
  {
    FT_Char  VAR2;


    FUN2( VAR1 && VAR1->VAR3 );

    VAR2 = 0;
    if ( VAR1->VAR3 < VAR1->VAR4 )
      VAR2 = *VAR1->VAR3++;

    return VAR2;
  }