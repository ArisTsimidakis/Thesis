int FUN1( VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5,

                    const VAR3 *VAR6, const unsigned char *VAR7, size_t VAR8,

                    mbedtls_md_type_t VAR9 )














 {
     int VAR10;
     mbedtls_hmac_drbg_context VAR11;
     unsigned char VAR12[2 * VAR13];
     size_t VAR14 = ( VAR2->VAR15 + 7 ) / 8;
     const VAR16 *VAR17;
     mbedtls_mpi VAR18;






 
     if( ( VAR17 = FUN2( VAR9 ) ) == NULL )
         return( VAR19 );
 
     FUN3( &VAR18 );
     FUN4( &VAR11 );


 
     
     FUN5( FUN6( VAR6, VAR12, VAR14 ) );
     FUN5( FUN7( VAR2, &VAR18, VAR7, VAR8 ) );
     FUN5( FUN6( &VAR18, VAR12 + VAR14, VAR14 ) );
     FUN8( &VAR11, VAR17, VAR12, 2 * VAR14 );
 

    VAR10 = FUN9( VAR2, VAR4, VAR5, VAR6, VAR7, VAR8,

                      VAR20, &VAR11 );


































































 
 VAR21:
     FUN10( &VAR11 );


     FUN11( &VAR18 );
 
     return( VAR10 );
 }