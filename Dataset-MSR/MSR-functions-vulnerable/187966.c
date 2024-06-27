VAR1 FUN1(VAR2 *VAR3)
{
 VAR4 *VAR5;
    UWORD32     VAR6;
    IMPEG2D_ERROR_CODES_T VAR7;

    VAR7 = (VAR1)VAR8;

    VAR5      = &VAR3->VAR9;

     VAR6   = FUN2(VAR5,VAR10);
     while ( (VAR6 == VAR11 ||
             VAR6 == VAR12) &&

            (VAR1)VAR8 == VAR7)




     {
         if(VAR6 == VAR12)
         {
            FUN3(VAR3);
 }
 else
 {
            FUN4(VAR5,VAR10);
            VAR6   = FUN2(VAR5,VAR13);
 switch(VAR6)
 {
 case VAR14:
                FUN5(VAR3);
 break;
 case VAR15:
                FUN6(VAR3);
 break;
 case VAR16:
                FUN7(VAR3);
 break;
 case VAR17:
                FUN8(VAR3);
 break;
 case VAR18:
                FUN9(VAR3);
 break;
 case VAR19:
 case VAR20:
                VAR7 = VAR21;
 break;
 default:
 
                FUN4(VAR5,VAR13);
                FUN10(VAR3);
 break;
 }
 }
        VAR6 = FUN2(VAR5,VAR10);
 }
 return VAR7;
}