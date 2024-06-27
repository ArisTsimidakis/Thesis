static int FUN1( unsigned char **VAR1,
                           const unsigned char *VAR2,
                           VAR3 *VAR4,
                           VAR3 *VAR5 )
{
    int VAR6;
    size_t VAR7;

    if( ( VAR6 = FUN2( VAR1, VAR2, &VAR7,
            VAR8 | VAR9 ) ) != 0 )
        return( VAR10 + VAR6 );

    VAR2 = *VAR1 + VAR7;

    if( ( VAR6 = FUN3( VAR1, VAR2, VAR4 ) ) != 0 )
        return( VAR6 );

    if( ( VAR6 = FUN3( VAR1, VAR2, VAR5 ) ) != 0 )
        return( VAR6 );

    if( *VAR1 != VAR2 )
        return( VAR10 +
                VAR11 );

    return( 0 );
}