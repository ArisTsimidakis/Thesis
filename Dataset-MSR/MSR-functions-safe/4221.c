FUN1( CFF_Index  VAR1 )
  {
    FT_Error   VAR2  = VAR3;
    FT_Stream  VAR4 = VAR1->VAR4;
    FT_Memory  VAR5 = VAR4->VAR5;


    if ( VAR1->VAR6 > 0 && VAR1->VAR7 == NULL )
    {
      FT_Byte    VAR8 = VAR1->VAR9;
      FT_ULong   VAR10;
      VAR11*   VAR12;
      VAR11*   VAR13;
      VAR14*  VAR15;


      VAR10 = (VAR14)( VAR1->VAR6 + 1 ) * VAR8;

      if ( FUN2( VAR1->VAR7, VAR1->VAR6 + 1 ) ||
           FUN3( VAR1->VAR16 + 3 )             ||
           FUN4( VAR10 )                  )
        goto VAR17;

      VAR15   = VAR1->VAR7;
      VAR12      = (VAR11*)VAR4->VAR18;
      VAR13  = VAR12 + VAR10;

      switch ( VAR8 )
      {
      case 1:
        for ( ; VAR12 < VAR13; VAR12++, VAR15++ )
          VAR15[0] = VAR12[0];
        break;

      case 2:
        for ( ; VAR12 < VAR13; VAR12 += 2, VAR15++ )
          VAR15[0] = FUN5( VAR12 );
        break;

      case 3:
        for ( ; VAR12 < VAR13; VAR12 += 3, VAR15++ )
          VAR15[0] = FUN6( VAR12 );
        break;

      default:
        for ( ; VAR12 < VAR13; VAR12 += 4, VAR15++ )
          VAR15[0] = FUN7( VAR12 );
      }

      FUN8();
    }

  VAR17:
    if ( VAR2 )
      FUN9( VAR1->VAR7 );

    return VAR2;
  }