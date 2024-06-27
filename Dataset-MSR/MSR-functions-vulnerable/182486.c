VAR1* FUN1( LPCSTR VAR2 )
{
    VAR1 *VAR3;
    int VAR4 = 0;
 
     if ( !VAR2 )
     {

        return VAR2;


     }
     
     while ( VAR2[ VAR4 ] != 0 || VAR2[ VAR4 + 1 ] != 0 )
    {
        VAR4 ++;
    }

    VAR3 = malloc(sizeof( VAR1 ) * ( VAR4 + 2 ));

    VAR4 = 0;
    while ( VAR2[ VAR4 ] != 0 || VAR2[ VAR4 + 1 ] != 0 )
    {
        VAR3[ VAR4 ] = VAR2[ VAR4 ];
        VAR4 ++;
    }
    VAR3[ VAR4 ++ ] = 0;
    VAR3[ VAR4 ++ ] = 0;

    return VAR3;
}