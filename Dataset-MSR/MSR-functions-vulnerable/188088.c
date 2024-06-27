int FUN1(VAR1 *VAR2, size_t VAR3,
 const VAR4 *VAR5,
 int64_t VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR9;
 int VAR10 = -1;
 (void)VAR3;
 (void)VAR5;

    VAR2->VAR9.VAR11.VAR12 = VAR13;

    VAR10 = FUN2(VAR2);
 if(VAR10 <= 0)
 return VAR10;

    VAR8->VAR14 = FUN3 (VAR8);

 
    VAR2->VAR15[VAR16] = &VAR8->VAR17[VAR8->VAR14];
    VAR2->VAR15[VAR18] = &VAR8->VAR17[VAR8->VAR19];
    VAR2->VAR15[VAR20] = &VAR8->VAR17[VAR8->VAR21];
    VAR2->VAR15[VAR22] = &VAR8->VAR17[VAR8->VAR23];

 if (FUN4(VAR2->VAR9.VAR11.VAR24))
 {
 
        VAR8->VAR17[VAR8->VAR19].VAR25 = 1;

 
         if (VAR8->VAR26[VAR8->VAR14] > 0)
           VAR8->VAR26[VAR8->VAR14]--;


         goto VAR27;
     }
 
    VAR2->VAR9.VAR11.VAR28 = 1;

    VAR10 = FUN5(VAR2);

 if (VAR10 < 0)
 {
 if (VAR8->VAR26[VAR8->VAR14] > 0)
          VAR8->VAR26[VAR8->VAR14]--;

        VAR2->VAR9.VAR11.VAR12 = VAR29;
 goto VAR27;
 }

 if (FUN6 (VAR8))
 {
        VAR2->VAR9.VAR11.VAR12 = VAR29;
 goto VAR27;
 }

    FUN7();

 if (VAR8->VAR30)
 {
        VAR8->VAR31++;
        VAR8->VAR32 = VAR8->VAR33;
 }

 #if VAR34
 
 if (VAR2->VAR35 && VAR2->VAR9.VAR36)
 {
        VAR37* VAR38 = VAR2->VAR9.VAR36;
 int VAR39, VAR40;
        VAR2->VAR9.VAR36 = VAR2->VAR9.VAR33;
        VAR2->VAR9.VAR33 = VAR38;

 
 for (VAR39 = 0; VAR39 < VAR2->VAR9.VAR41; ++VAR39)
 {
 for (VAR40 = 0; VAR40 < VAR2->VAR9.VAR42; ++VAR40)
 {
 const int VAR43 = VAR39*VAR2->VAR9.VAR44 + VAR40;
                VAR2->VAR9.VAR33[VAR43].VAR45.VAR46 =
                        VAR2->VAR9.VAR36[VAR43].VAR45.VAR46;
 }
 }
 }
#endif

    VAR2->VAR47 = 0;
    VAR2->VAR48 = VAR6;

VAR27:
    VAR2->VAR9.VAR11.VAR28 = 0;
    FUN7();
 return VAR10;
}