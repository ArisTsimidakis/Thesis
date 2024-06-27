static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5 )
{
    TPM_RC VAR6;
    TPM2B_ENCRYPTED_SECRET VAR7;
    char VAR8[] = "";
    UINT16 VAR9;
    int VAR10;

    VAR7.VAR11.VAR12 = 0;

    if( VAR5->VAR13.VAR11.VAR12 == 0 )
    {
        
        VAR5->VAR13.VAR11.VAR12 = FUN2( VAR14 );
        for( VAR10 = 0; VAR10 < VAR5->VAR13.VAR11.VAR12; VAR10++ )
            VAR5->VAR13.VAR11.VAR15[VAR10] = 0;
    }

    VAR5->VAR16.VAR11.VAR12 = VAR5->VAR13.VAR11.VAR12;
    VAR6 = FUN3( VAR3, VAR5->VAR17, VAR5->VAR18, 0,
            &( VAR5->VAR13 ), &( VAR5->VAR19 ), VAR5->VAR20,
            &( VAR5->VAR21 ), VAR5->VAR22, &( VAR5->VAR23 ),
            &( VAR5->VAR16 ), 0 );

    if( VAR6 == VAR24 )
    {
        if( VAR5->VAR17 == VAR25 )
            VAR5->VAR26.VAR11.VAR12 = 0;
        if( VAR5->VAR18 == VAR25 )
            VAR5->VAR27.VAR11.VAR12 = 0;

        if( VAR5->VAR17 == VAR25 && VAR5->VAR18 == VAR25 )
        {
            VAR5->VAR28.VAR29.VAR12 = 0;
        }
        else
        {
            
            
            bool VAR30 = FUN4( (VAR31 *)&VAR7, &( VAR5->VAR27.VAR29 ) );
            if (!VAR30)
            {
               return VAR32;
            }

            VAR30 = FUN4( (VAR31 *)&VAR7, &( VAR5->VAR26.VAR29 ) );
            if (!VAR30)
            {
                return VAR32;
            }

            VAR9 = FUN2( VAR5->VAR22 );

            if( VAR7.VAR11.VAR12 == 0 )
            {
                VAR5->VAR28.VAR11.VAR12 = 0;
             }
             else
             {

                VAR6 = FUN5(VAR3, VAR5->VAR22, &(VAR7.VAR29), VAR8, &( VAR5->VAR16.VAR29 ),


                         &( VAR5->VAR13.VAR29 ), VAR9 * 8, (VAR31 *)&( VAR5->VAR28 ) );
             }
 
            if( VAR6 != VAR24 )
            {
                return( VAR33 );
            }
        }

        VAR5->VAR34.VAR29.VAR12 = 0;
        VAR5->VAR35.VAR29.VAR12 = 0;
        VAR5->VAR36 = 0;
    }

    return VAR6;
}