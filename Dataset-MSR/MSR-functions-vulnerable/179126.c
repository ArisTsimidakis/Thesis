int FUN1( VAR1 *VAR2 )
{
    int VAR3;
    size_t VAR4, VAR5;

    FUN2( 2, ( "" ) );

    if( VAR2->VAR6 == VAR7 &&
        VAR2->VAR8 == VAR9 )
    {
        VAR2->VAR10 = VAR11;
        FUN2( 2, ( "" ) );
        VAR2->VAR12++;
        return( 0 );
    }

    if( ( VAR3 = FUN3( VAR2 ) ) != 0 )
    {
        FUN4( 1, "", VAR3 );
        return( VAR3 );
    }

    VAR2->VAR12++;

    
    if( VAR2->VAR6  == VAR7 &&
        VAR2->VAR13 == VAR14 )
    {
        if( VAR2->VAR15  == 2                        &&
            VAR2->VAR16 == VAR17            &&
            VAR2->VAR18[0]  == VAR19  &&
            VAR2->VAR18[1]  == VAR20 )
        {
            FUN2( 1, ( "" ) );

            VAR2->VAR10 = VAR21;
            if( VAR2->VAR8 == VAR22 )
                return( 0 );
            else
                return( VAR23 );
        }
    }

    if( VAR2->VAR6  == VAR7 &&
        VAR2->VAR13 != VAR14 )
    {
        if( VAR2->VAR24   == 7                    &&
            VAR2->VAR16 == VAR25    &&
            VAR2->VAR18[0]  == VAR26   &&
            memcmp( VAR2->VAR18 + 4, "", 3 ) == 0 )
        {
            FUN2( 1, ( "" ) );

            VAR2->VAR10 = VAR21;
            if( VAR2->VAR8 == VAR27 )
                return( VAR23 );
            else
                return( 0 );
        }
    }

    if( VAR2->VAR16 != VAR25 )
    {
        FUN2( 1, ( "" ) );
        return( VAR28 );
    }

    if( VAR2->VAR18[0] != VAR26 || VAR2->VAR24 < 10 )
    {
        FUN2( 1, ( "" ) );
        return( VAR29 );
    }

    
    VAR5 = ( VAR2->VAR18[5] << 8 ) | VAR2->VAR18[6];

    if( VAR2->VAR18[4] != 0 || VAR2->VAR24 != 7 + VAR5 )
    {
        FUN2( 1, ( "" ) );
        return( VAR29 );
    }

    if( ( VAR2->VAR30->VAR31 = (VAR32 *) malloc(
                    sizeof( VAR32 ) ) ) == NULL )
    {
        FUN2( 1, ( "",
                       sizeof( VAR32 ) ) );
        return( VAR33 );
    }

    memset( VAR2->VAR30->VAR31, 0, sizeof( VAR32 ) );

    VAR4 = 7;

    while( VAR4 < VAR2->VAR24 )
    {
        if( VAR2->VAR18[VAR4] != 0 )
        {
            FUN2( 1, ( "" ) );
            return( VAR29 );
        }

        VAR5 = ( (unsigned int) VAR2->VAR18[VAR4 + 1] << 8 )
            | (unsigned int) VAR2->VAR18[VAR4 + 2];
        VAR4 += 3;

        if( VAR5 < 128 || VAR4 + VAR5 > VAR2->VAR24 )
        {
            FUN2( 1, ( "" ) );
             return( VAR29 );
         }
 

        VAR3 = FUN5( VAR2->VAR30->VAR31, VAR2->VAR18 + VAR4,

                             VAR5 );




         if( VAR3 != 0 )
         {
             FUN4( 1, "", VAR3 );
            return( VAR3 );
        }

        VAR4 += VAR5;
    }

    FUN6( 3, "", VAR2->VAR30->VAR31 );

    if( VAR2->VAR8 != VAR9 )
    {
        if( VAR2->VAR34 == NULL )
        {
            FUN2( 1, ( "" ) );
            return( VAR35 );
        }

        VAR3 = FUN7( VAR2->VAR30->VAR31,
                                VAR2->VAR34, VAR2->VAR36,
                                VAR2->VAR37,  &VAR2->VAR10,
                                VAR2->VAR38, VAR2->VAR39 );

        if( VAR3 != 0 )
            FUN4( 1, "", VAR3 );

        if( VAR2->VAR8 != VAR27 )
            VAR3 = 0;
    }

    FUN2( 2, ( "" ) );

    return( VAR3 );
}