char* FUN1( LPCWSTR VAR1 )
{
    char *VAR2;
    int VAR3 = 0;
 
     if ( !VAR1 )
     {

        return VAR1;


     }
 
     while ( VAR1[ VAR3 ] != 0 )
    {
        VAR3 ++;
    }

    VAR2 = malloc( VAR3 + 1 );

    VAR3 = 0;
    while ( VAR1[ VAR3 ] != 0 )
    {
        VAR2[ VAR3 ] = 0xFF & VAR1[ VAR3 ];
        VAR3 ++;
    }
    VAR2[ VAR3 ++ ] = '';

    return VAR2;
}