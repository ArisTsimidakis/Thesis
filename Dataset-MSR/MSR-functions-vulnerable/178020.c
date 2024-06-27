FUN1( FT_Library        VAR1,
                  const VAR2  *VAR3,
                  VAR2        *VAR4)
  {
    FT_Memory  VAR5 = VAR1->VAR5;
    FT_Error   VAR6  = VAR7;
    FT_Int     VAR8  = VAR3->VAR8;
    FT_ULong   VAR9;


    if ( VAR3 == VAR4 )
      return VAR7;

    if ( VAR3->VAR10 == NULL )
    {
      *VAR4 = *VAR3;

      return VAR7;
    }
 
     if ( VAR8 < 0 )
       VAR8 = -VAR8;

    VAR9 = (VAR11)( VAR8 * VAR3->VAR12 );


 
     if ( VAR4->VAR10 )
     {
      FT_Int    VAR13 = VAR4->VAR8;
      FT_ULong  VAR14;

 
       if ( VAR13 < 0  )
         VAR13 = -VAR13;

      VAR14 = (VAR11)( VAR13 * VAR4->VAR12 );


 
       if ( VAR14 != VAR9 )
         (void)FUN2( VAR4->VAR10, VAR14, VAR9 );
    }
    else
      (void)FUN3( VAR4->VAR10, VAR9 );

    if ( !VAR6 )
    {
      unsigned char *VAR15;


      VAR15 = VAR4->VAR10;
      *VAR4 = *VAR3;
      VAR4->VAR10 = VAR15;

      FUN4( VAR4->VAR10, VAR3->VAR10, VAR9 );
    }

    return VAR6;
  }