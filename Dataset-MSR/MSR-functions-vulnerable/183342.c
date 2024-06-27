static int FUN1( VAR1 *VAR2 )
{
    int VAR3;
    const VAR4 *VAR5 =
        VAR2->VAR6->VAR5;
    unsigned char *VAR7 = NULL, *VAR8 = NULL;

    FUN2( 2, ( "" ) );

#if FUN3(VAR9)
    if( VAR5->VAR10 == VAR11 )
    {
        FUN2( 2, ( "" ) );
        VAR2->VAR12++;
        return( 0 );
    }
    ((void) VAR7);
    ((void) VAR8);
#endif

#if FUN3(VAR13) || \
    FUN3(VAR14)
    if( VAR5->VAR10 == VAR15 ||
        VAR5->VAR10 == VAR16 )
    {
        if( ( VAR3 = FUN4( VAR2 ) ) != 0 )
        {
            FUN5( 1, "", VAR3 );
            FUN6( VAR2, VAR17,
                                            VAR18 );
            return( VAR3 );
        }

        FUN2( 2, ( "" ) );
        VAR2->VAR12++;
        return( 0 );
    }
    ((void) VAR7);
    ((void) VAR8);
#endif 

    if( ( VAR3 = FUN7( VAR2 ) ) != 0 )
    {
        FUN5( 1, "", VAR3 );
        return( VAR3 );
    }

    if( VAR2->VAR19 != VAR20 )
    {
        FUN2( 1, ( "" ) );
        FUN6( VAR2, VAR17,
                                        VAR21 );
        return( VAR22 );
    }

    
    if( VAR2->VAR23[0] != VAR24 )
    {
        if( VAR5->VAR10 == VAR25 ||
            VAR5->VAR10 == VAR26 )
        {
            
            VAR2->VAR27 = 1;
            goto VAR28;
        }

        FUN2( 1, ( ""
                                    "" ) );
        FUN6( VAR2, VAR17,
                                        VAR21 );

        return( VAR22 );
    }

    VAR7   = VAR2->VAR23 + FUN8( VAR2 );
    VAR8 = VAR2->VAR23 + VAR2->VAR29;
    FUN9( 3,   "", VAR7, VAR8 - VAR7 );

#if FUN3(VAR30)
    if( VAR5->VAR10 == VAR25 ||
        VAR5->VAR10 == VAR26 ||
        VAR5->VAR10 == VAR31 ||
        VAR5->VAR10 == VAR32 )
    {
        if( FUN10( VAR2, &VAR7, VAR8 ) != 0 )
        {
            FUN2( 1, ( "" ) );
            FUN6( VAR2, VAR17,
                                            VAR33 );
            return( VAR34 );
        }
    } 
#endif 

#if FUN3(VAR35) ||                       \
    FUN3(VAR36)
    if( VAR5->VAR10 == VAR25 ||
        VAR5->VAR10 == VAR26 )
        ; 
    else
#endif 
#if FUN3(VAR37) ||                       \
    FUN3(VAR38)
    if( VAR5->VAR10 == VAR39 ||
        VAR5->VAR10 == VAR31 )
    {
        if( FUN11( VAR2, &VAR7, VAR8 ) != 0 )
        {
            FUN2( 1, ( "" ) );
            FUN6( VAR2, VAR17,
                                            VAR33 );
            return( VAR34 );
        }
    }
    else
#endif 
#if FUN3(VAR40) ||                     \
    FUN3(VAR41) ||                     \
    FUN3(VAR42)
    if( VAR5->VAR10 == VAR43 ||
        VAR5->VAR10 == VAR32 ||
        VAR5->VAR10 == VAR44 )
    {
        if( FUN12( VAR2, &VAR7, VAR8 ) != 0 )
        {
            FUN2( 1, ( "" ) );
            FUN6( VAR2, VAR17,
                                            VAR33 );
            return( VAR34 );
        }
    }
    else
#endif 
#if FUN3(VAR45)
    if( VAR5->VAR10 == VAR46 )
    {
        VAR3 = FUN13( &VAR2->VAR47->VAR48,
                                              VAR7, VAR8 - VAR7 );
        if( VAR3 != 0 )
        {
            FUN5( 1, "", VAR3 );
            FUN6( VAR2, VAR17,
                                            VAR33 );
            return( VAR34 );
        }
    }
    else
#endif 
    {
        FUN2( 1, ( "" ) );
        return( VAR49 );
    }

#if FUN3(VAR50)
    if( FUN14( VAR5 ) )
    {
        size_t VAR51, VAR52;
        unsigned char VAR53[64];
        mbedtls_md_type_t VAR54 = VAR55;
        mbedtls_pk_type_t VAR56 = VAR57;
        unsigned char *VAR58 = VAR2->VAR23 + FUN8( VAR2 );
        size_t VAR59 = VAR7 - VAR58;

        
#if FUN3(VAR60)
        if( VAR2->VAR61 == VAR62 )
        {
            if( FUN15( VAR2, &VAR7, VAR8,
                                               &VAR54, &VAR56 ) != 0 )
            {
                FUN2( 1, ( "" ) );
                FUN6( VAR2, VAR17,
                                                VAR33 );
                return( VAR34 );
            }

            if( VAR56 != FUN16( VAR5 ) )
            {
                FUN2( 1, ( "" ) );
                FUN6( VAR2, VAR17,
                                                VAR33 );
                return( VAR34 );
            }
        }
        else
#endif 
#if FUN3(VAR63) || FUN3(VAR64) || \
    FUN3(VAR65)
        if( VAR2->VAR61 < VAR62 )
        {
            VAR56 = FUN16( VAR5 );

            
            if( VAR56 == VAR66 && VAR54 == VAR55 )
                VAR54 = VAR67;
        }
        else
#endif
        {
            FUN2( 1, ( "" ) );
            return( VAR49 );
        }

        

        if( VAR7 > VAR8 - 2 )
        {
            FUN2( 1, ( "" ) );
            FUN6( VAR2, VAR17,
                                            VAR68 );
            return( VAR34 );
        }
         VAR51 = ( VAR7[0] << 8 ) | VAR7[1];
         VAR7 += 2;
 

        if( VAR8 != VAR7 + VAR51 )


         {
             FUN2( 1, ( "" ) );
             FUN6( VAR2, VAR17,
                                            VAR68 );
            return( VAR34 );
        }

        FUN9( 3, "", VAR7, VAR51 );

        
#if FUN3(VAR63) || FUN3(VAR64) || \
    FUN3(VAR65)
        if( VAR54 == VAR55 )
        {
            VAR52 = 36;
            VAR3 = FUN17( VAR2, VAR53, VAR58,
                                                           VAR59 );
            if( VAR3 != 0 )
                return( VAR3 );
        }
        else
#endif 
#if FUN3(VAR64) || FUN3(VAR65) || \
    FUN3(VAR60)
        if( VAR54 != VAR55 )
        {
            
            VAR52 = 0;
            VAR3 = FUN18( VAR2, VAR53, VAR58,
                                                          VAR59, VAR54 );
            if( VAR3 != 0 )
                return( VAR3 );
        }
        else
#endif 
        {
            FUN2( 1, ( "" ) );
            return( VAR49 );
        }

        FUN9( 3, "", VAR53, VAR52 != 0 ? VAR52 :
            (unsigned int) ( FUN19( FUN20( VAR54 ) ) ) );

        if( VAR2->VAR69->VAR70 == NULL )
        {
            FUN2( 2, ( "" ) );
            FUN6( VAR2, VAR17,
                                            VAR18 );
            return( VAR22 );
        }

        
        if( ! FUN21( &VAR2->VAR69->VAR70->VAR71, VAR56 ) )
        {
            FUN2( 1, ( "" ) );
            FUN6( VAR2, VAR17,
                                            VAR18 );
            return( VAR72 );
        }

        if( ( VAR3 = FUN22( &VAR2->VAR69->VAR70->VAR71,
                               VAR54, VAR53, VAR52, VAR7, VAR51 ) ) != 0 )
        {
            FUN6( VAR2, VAR17,
                                            VAR73 );
            FUN5( 1, "", VAR3 );
            return( VAR3 );
        }
    }
#endif 

VAR28:
    VAR2->VAR12++;

    FUN2( 2, ( "" ) );

    return( 0 );
}