int FUN1( const VAR1 *VAR2, VAR3 *VAR4,
                           const unsigned char *VAR5, size_t VAR6 )
{
    int VAR7;
    size_t VAR8;

    if( VAR6 < 1 )
        return( VAR9 );

    if( VAR5[0] == 0x00 )
    {
        if( VAR6 == 1 )
            return( FUN2( VAR4 ) );
        else
            return( VAR9 );
    }

    VAR8 = FUN3( &VAR2->VAR10 );

    if( VAR5[0] != 0x04 )
        return( VAR11 );

    if( VAR6 != 2 * VAR8 + 1 )
        return( VAR9 );

    FUN4( FUN5( &VAR4->VAR12, VAR5 + 1, VAR8 ) );
    FUN4( FUN5( &VAR4->VAR13, VAR5 + 1 + VAR8, VAR8 ) );
    FUN4( FUN6( &VAR4->VAR14, 1 ) );

VAR15:
    return( VAR7 );
}