static void  FUN1( VAR1*  VAR2 )
{
  HB_UShort             VAR3, VAR4;

  VAR5*  VAR6;


  if ( VAR2->VAR7 )
  {
    VAR4 = VAR2->VAR8;
    VAR6  = VAR2->VAR7;

    for ( VAR3 = 0; VAR3 < VAR4; VAR3++ )
      FUN2( &VAR6[VAR3] );

    FUN3( VAR6 );
  }

  FUN4( &VAR2->VAR9 );
}