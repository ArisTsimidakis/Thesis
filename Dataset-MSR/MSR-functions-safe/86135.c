static int FUN1( VAR1 *VAR2,
                                                const unsigned char *VAR3,
                                                size_t VAR4 )
{
    size_t VAR5, VAR6;
    const unsigned char *VAR7;
    const VAR8 *VAR9, **VAR10;

    VAR5 = ( ( VAR3[0] << 8 ) | ( VAR3[1] ) );
    if( VAR5 + 2 != VAR4 ||
        VAR5 % 2 != 0 )
    {
        FUN2( 1, ( "" ) );
        FUN3( VAR2, VAR11,
                                        VAR12 );
        return( VAR13 );
    }

    
    if( VAR2->VAR14->VAR10 != NULL )
    {
        FUN2( 1, ( "" ) );
        FUN3( VAR2, VAR11,
                                        VAR12 );
        return( VAR13 );
    }

    
    VAR6 = VAR5 / 2 + 1;
    if( VAR6 > VAR15 )
        VAR6 = VAR15;

    if( ( VAR10 = FUN4( VAR6, sizeof( *VAR10 ) ) ) == NULL )
    {
        FUN3( VAR2, VAR11,
                                        VAR16 );
        return( VAR17 );
    }

    VAR2->VAR14->VAR10 = VAR10;

    VAR7 = VAR3 + 2;
    while( VAR5 > 0 && VAR6 > 1 )
    {
        VAR9 = FUN5( ( VAR7[0] << 8 ) | VAR7[1] );

        if( VAR9 != NULL )
        {
            *VAR10++ = VAR9;
            VAR6--;
        }

        VAR5 -= 2;
        VAR7 += 2;
    }

    return( 0 );
}