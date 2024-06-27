int FUN1( VAR1 *VAR2,

                     const VAR3 *VAR4,

                     VAR5 *VAR6, VAR3 *VAR7,




                      int (*VAR8)(void *, unsigned char *, VAR9),
                      void *VAR10 )
 {

    int VAR11;


     size_t VAR12 = ( VAR2->VAR13 + 7 ) / 8;
 
 #if FUN2(VAR14)
    if( FUN3( VAR2 ) == VAR15 )
    {
        
        size_t VAR16;

        do {
            FUN4( FUN5( VAR6, VAR12, VAR8, VAR10 ) );
        } while( FUN6( VAR6 ) == 0);

        
        VAR16 = FUN6( VAR6 ) - 1; 
        if( VAR16 > VAR2->VAR13 )
            FUN4( FUN7( VAR6, VAR16 - VAR2->VAR13 ) );
        else
            FUN4( FUN8( VAR6, VAR2->VAR13, 1 ) );

        
        FUN4( FUN8( VAR6, 0, 0 ) );
         FUN4( FUN8( VAR6, 1, 0 ) );
         FUN4( FUN8( VAR6, 2, 0 ) );
     }

    else
 #endif 


 #if FUN2(VAR17)
     if( FUN3( VAR2 ) == VAR18 )
     {
        
        int VAR19 = 0;

        
        do
        {
            FUN4( FUN5( VAR6, VAR12, VAR8, VAR10 ) );
            FUN4( FUN7( VAR6, 8 * VAR12 - VAR2->VAR13 ) );

            
            if( ++VAR19 > 30 )
                return( VAR20 );
        }
         while( FUN9( VAR6, 1 ) < 0 ||
                FUN10( VAR6, &VAR2->VAR21 ) >= 0 );
     }

    else
 #endif 

        return( VAR22 );
 
 VAR23:

    if( VAR11 != 0 )

        return( VAR11 );




 

    return( FUN11( VAR2, VAR7, VAR6, VAR4, VAR8, VAR10 ) );
































 }