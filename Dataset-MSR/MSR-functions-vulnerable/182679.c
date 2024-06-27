int FUN1( VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5,
                const VAR3 *VAR6, const unsigned char *VAR7, size_t VAR8,
                int (*VAR9)(void *, unsigned char *, VAR10), void *VAR11 )
{
    FUN2( VAR2   != NULL );
    FUN2( VAR4     != NULL );
    FUN2( VAR5     != NULL );
    FUN2( VAR6     != NULL );
     FUN2( VAR9 != NULL );
     FUN2( VAR7   != NULL || VAR8 == 0 );
 


     return( FUN3( VAR2, VAR4, VAR5, VAR6, VAR7, VAR8,

                                    VAR9, VAR11, NULL ) );


 }