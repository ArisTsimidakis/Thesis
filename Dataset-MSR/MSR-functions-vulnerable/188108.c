void FUN1(void *VAR1,VAR2 *VAR3,
 VAR4 *VAR5)
{

    UWORD32 VAR6;
 VAR7 *VAR8;
    UWORD32 VAR9 = VAR3->VAR10.VAR11;

    VAR8 = (VAR7 *)VAR1;
    VAR5->VAR12.VAR13 = 0;
 if (VAR9 > VAR14)
 {
        VAR9 = VAR14;
 }

    memcpy(VAR8->VAR15, VAR3->VAR10.VAR16, VAR9);

    FUN2(&(VAR8->VAR17), VAR8->VAR15,
        VAR9);

 {
 {
            IMPEG2D_ERROR_CODES_T VAR18;
            VAR18 = FUN3(VAR8);
 if ((VAR19)VAR20 != VAR18)
 {
                VAR5->VAR12.VAR13    = VAR18;

                VAR6     = FUN4(&VAR8->VAR17);

                VAR5->VAR12.VAR21 = VAR6>> 3;
 if(VAR5->VAR12.VAR21 > VAR3->VAR10.VAR11)
 {
                    VAR5->VAR12.VAR21 = VAR3->VAR10.VAR11;
 }
 if(VAR5->VAR12.VAR13 == 0)
                    VAR5->VAR12.VAR13 = VAR18;

 if (VAR22 == VAR18)
 {
                    VAR5->VAR12.VAR21 = 0;
                    VAR8->VAR23 = 0;

                    VAR5->VAR12.VAR24 = VAR8->VAR25;
                    VAR5->VAR12.VAR26 = VAR8->VAR27;
 }
                FUN5(VAR8, VAR28);
 return;
 }
 }
        VAR5->VAR12.VAR24 = VAR8->VAR29;
        VAR5->VAR12.VAR26 = VAR8->VAR30;

        VAR5->VAR12.VAR31            = VAR32;
        VAR5->VAR12.VAR13        = VAR33;

        VAR6     = FUN4(&VAR8->VAR17);
        VAR5->VAR12.VAR21 = VAR6>> 3;
 if(VAR5->VAR12.VAR21 > VAR3->VAR10.VAR11)
 {

             VAR5->VAR12.VAR21 = VAR3->VAR10.VAR11;
         }
         VAR5->VAR12.VAR34 = 0;












         
         VAR8->VAR23 = 1;
 
 }
}