int FUN1( VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5,

                const VAR3 *VAR6, const unsigned char *VAR7, size_t VAR8,

                int (*VAR9)(void *, unsigned char *, VAR10), void *VAR11 )
















 {
     int VAR12, VAR13, VAR14, VAR15;
     mbedtls_ecp_point VAR16;
    mbedtls_mpi VAR17, VAR18, VAR19;

    
    if( VAR2->VAR20.VAR21 == NULL )
        return( VAR22 );

    
    if( FUN2( VAR6, 1 ) < 0 || FUN3( VAR6, &VAR2->VAR20 ) >= 0 )
        return( VAR23 );

    FUN4( &VAR16 );
    FUN5( &VAR17 ); FUN5( &VAR18 ); FUN5( &VAR19 );

    VAR14 = 0;
    do
    {
        
         VAR13 = 0;
         do
         {

            FUN6( FUN7( VAR2, &VAR17, &VAR16, VAR9, VAR11 ) );








             FUN6( FUN8( VAR4, &VAR16.VAR24, &VAR2->VAR20 ) );
 
             if( VAR13++ > 10 )
            {
                VAR12 = VAR25;
                goto VAR26;
            }
        }
        while( FUN2( VAR4, 0 ) == 0 );

        
        FUN6( FUN9( VAR2, &VAR18, VAR7, VAR8 ) );

         
         VAR15 = 0;
         do
         {
             size_t VAR27 = ( VAR2->VAR28 + 7 ) / 8;

            FUN6( FUN10( &VAR19, VAR27, VAR9, VAR11 ) );




             FUN6( FUN11( &VAR19, 8 * VAR27 - VAR2->VAR28 ) );
 

            
             if( ++VAR15 > 30 )
                 return( VAR25 );
         }
        while( FUN2( &VAR19, 1 ) < 0 ||
               FUN3( &VAR19, &VAR2->VAR20 ) >= 0 );

        
        FUN6( FUN12( VAR5, VAR4, VAR6 ) );
        FUN6( FUN13( &VAR18, &VAR18, VAR5 ) );
        FUN6( FUN12( &VAR18, &VAR18, &VAR19 ) );
        FUN6( FUN12( &VAR17, &VAR17, &VAR19 ) );
        FUN6( FUN14( VAR5, &VAR17, &VAR2->VAR20 ) );
        FUN6( FUN12( VAR5, VAR5, &VAR18 ) );
        FUN6( FUN8( VAR5, VAR5, &VAR2->VAR20 ) );

        if( VAR14++ > 10 )
        {
            VAR12 = VAR25;
            goto VAR26;
        }
    }
    while( FUN2( VAR5, 0 ) == 0 );

VAR26:
    FUN15( &VAR16 );
    FUN16( &VAR17 ); FUN16( &VAR18 ); FUN16( &VAR19 );
 
     return( VAR12 );
 }