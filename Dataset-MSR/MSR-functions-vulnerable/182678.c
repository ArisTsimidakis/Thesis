static int FUN1( VAR1 *VAR2,
                 VAR3 *VAR4, VAR3 *VAR5,
                 const VAR3 *VAR6, const unsigned char *VAR7, size_t VAR8,
                 int (*VAR9)(void *, unsigned char *, VAR10), void *VAR11,




                 VAR12 *VAR13 )
 {
     int VAR14, VAR15, VAR16;
    int *VAR17 = &VAR16, *VAR18 = &VAR15;
    mbedtls_ecp_point VAR19;
    mbedtls_mpi VAR20, VAR21, VAR22;
    VAR3 *VAR23 = &VAR20, *VAR24 = VAR4;

    
    if( VAR2->VAR25.VAR26 == NULL )
        return( VAR27 );

    
    if( FUN2( VAR6, 1 ) < 0 || FUN3( VAR6, &VAR2->VAR25 ) >= 0 )
        return( VAR28 );

    FUN4( &VAR19 );
    FUN5( &VAR20 ); FUN5( &VAR21 ); FUN5( &VAR22 );

    FUN6( VAR29 );

#if FUN7(VAR30)
    if( VAR13 != NULL && VAR13->VAR29 != NULL )
    {
        
        VAR17 = &VAR13->VAR29->VAR16;
        VAR18 = &VAR13->VAR29->VAR15;
        VAR23 = &VAR13->VAR29->VAR20;
        VAR24 = &VAR13->VAR29->VAR4;

        
        if( VAR13->VAR29->VAR31 == VAR32 )
            goto VAR33;
        if( VAR13->VAR29->VAR31 == VAR34 )
            goto VAR35;
    }
#endif 

    *VAR17 = 0;
    do
    {
        if( *VAR17++ > 10 )
        {
            VAR14 = VAR36;
            goto VAR37;
        }

        
        *VAR18 = 0;
        do
        {
            if( *VAR18++ > 10 )
            {
                VAR14 = VAR36;
                goto VAR37;
            }

            FUN8( FUN9( VAR2, VAR23, VAR9, VAR11 ) );

#if FUN7(VAR30)
            if( VAR13 != NULL && VAR13->VAR29 != NULL )
                VAR13->VAR29->VAR31 = VAR32;

 VAR33:
 #endif
             FUN8( FUN10( VAR2, &VAR19, VAR23, &VAR2->VAR38,

                                                  VAR9, VAR11, VAR39 ) );






             FUN8( FUN11( VAR24, &VAR19.VAR40, &VAR2->VAR25 ) );
         }
         while( FUN2( VAR24, 0 ) == 0 );

#if FUN7(VAR30)
        if( VAR13 != NULL && VAR13->VAR29 != NULL )
            VAR13->VAR29->VAR31 = VAR34;

VAR35:
#endif
        
        FUN12( VAR41 + 4 );

        
        FUN8( FUN13( VAR2, &VAR21, VAR7, VAR8 ) );

        

        FUN8( FUN9( VAR2, &VAR22, VAR9, VAR11 ) );




 
         
        FUN8( FUN14( VAR5, VAR24, VAR6 ) );
        FUN8( FUN15( &VAR21, &VAR21, VAR5 ) );
        FUN8( FUN14( &VAR21, &VAR21, &VAR22 ) );
        FUN8( FUN14( VAR23, VAR23, &VAR22 ) );
        FUN8( FUN16( VAR5, VAR23, &VAR2->VAR25 ) );
        FUN8( FUN14( VAR5, VAR5, &VAR21 ) );
        FUN8( FUN11( VAR5, VAR5, &VAR2->VAR25 ) );
    }
    while( FUN2( VAR5, 0 ) == 0 );

#if FUN7(VAR30)
    if( VAR13 != NULL && VAR13->VAR29 != NULL )
        FUN17( VAR4, VAR24 );
#endif

VAR37:
    FUN18( &VAR19 );
    FUN19( &VAR20 ); FUN19( &VAR21 ); FUN19( &VAR22 );

    FUN20( VAR29 );

    return( VAR14 );
}