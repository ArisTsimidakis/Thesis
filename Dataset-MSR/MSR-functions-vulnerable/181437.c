VAR1 FUN1(VAR2 *VAR3, TPMI_ALG_HASH VAR4,


         VAR5 *VAR6, char *VAR7, VAR5 *VAR8, VAR5 *VAR9, UINT16 VAR10,
         VAR11  *VAR12 )
 {

    TPM2B_DIGEST VAR13;
     TPM2B_DIGEST VAR14, VAR15, VAR16;
     VAR17 *VAR18 = &VAR15.VAR19.VAR20[0];
     VAR17 *VAR21 = &VAR16.VAR19.VAR20[0];
     VAR22 *VAR23[8];
     UINT32 VAR24, VAR25;

    TPM_RC VAR26;


     int VAR27, VAR28;
     UINT16 VAR29 = VAR10 / 8;
 
    VAR12->VAR19 .VAR30 = 0;

    VAR16.VAR19.VAR30 = 4;

    VAR15.VAR19.VAR30 = 4;
    VAR24 = FUN2( VAR10 );
    *(VAR31 *)VAR18 = VAR24;

    for(VAR27 = 0; VAR7[VAR27] != 0 ;VAR27++ );

    VAR14.VAR19.VAR30 = VAR27+1;
    for( VAR27 = 0; VAR27 < VAR14.VAR19.VAR30; VAR27++ )
    {
        VAR14.VAR19.VAR20[VAR27] = VAR7[VAR27];
    }

    VAR12->VAR19.VAR30 = 0;
 
     VAR27 = 1;
 






























     while( VAR12->VAR19.VAR30 < VAR29 )
     {


         
 
         VAR25 = FUN2( VAR27 );
        *(VAR31 *)VAR21 = VAR25;

        VAR28 = 0;
        VAR23[VAR28++] = (VAR22 *)&(VAR16.VAR32);
        VAR23[VAR28++] = (VAR22 *)&(VAR14.VAR32);
         VAR23[VAR28++] = (VAR22 *)VAR8;
         VAR23[VAR28++] = (VAR22 *)VAR9;
         VAR23[VAR28++] = (VAR22 *)&(VAR15.VAR32);

        VAR23[VAR28++] = (VAR22 *)0;

        VAR26 = FUN3(VAR3, VAR4, VAR6, (VAR5 **)&( VAR23[0] ), &VAR13 );

        if( VAR26 != VAR33 )

        {

            return( VAR26 );






































         }
 




         bool VAR34 = FUN4(VAR12, &(VAR13.VAR32));
         if (!VAR34) {

            return VAR35;




         }
     }
 
     
     VAR12->VAR19.VAR30 = VAR29;
 

    return VAR33;








 }