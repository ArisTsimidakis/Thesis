void FUN1(void *VAR1,VAR2 *VAR3,
 VAR4 *VAR5)
{

    UWORD32 VAR6;
 VAR7 *VAR8;

    VAR8 = (VAR7 *)VAR1;
    VAR5->VAR9.VAR10 = 0;

    FUN2(&(VAR8->VAR11),VAR3->VAR12.VAR13,
        VAR3->VAR12.VAR14);

 {
 {
            IMPEG2D_ERROR_CODES_T VAR15;
            VAR15 = FUN3(VAR8);
 if ((VAR16)VAR17 != VAR15)
 {
                VAR5->VAR9.VAR10    = VAR15;

                VAR6     = FUN4(&VAR8->VAR11);

                VAR5->VAR9.VAR18 = VAR6>> 3;
 if(VAR5->VAR9.VAR18 > VAR3->VAR12.VAR14)
 {
                    VAR5->VAR9.VAR18 = VAR3->VAR12.VAR14;
 }

                 if(VAR5->VAR9.VAR10 == 0)
                     VAR5->VAR9.VAR10 = VAR15;
 








 






                 FUN5(VAR8, VAR19);
                 return;
             }
 }
        VAR5->VAR9.VAR20 = VAR8->VAR21;
        VAR5->VAR9.VAR22 = VAR8->VAR23;

        VAR5->VAR9.VAR24            = VAR25;
        VAR5->VAR9.VAR10        = VAR26;

        VAR6     = FUN4(&VAR8->VAR11);
        VAR5->VAR9.VAR18 = VAR6>> 3;
 if(VAR5->VAR9.VAR18 > VAR3->VAR12.VAR14)
 {
            VAR5->VAR9.VAR18 = VAR3->VAR12.VAR14;
 }
        VAR5->VAR9.VAR27 = 0;
 
        VAR8->VAR28 = 1;

 }
}