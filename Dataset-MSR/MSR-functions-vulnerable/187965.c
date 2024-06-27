VAR1 FUN1(VAR2 *VAR3)
{
    UWORD32 VAR4;
 VAR5 *VAR6  = &VAR3->VAR7;

 VAR8 *VAR9       = &VAR3->VAR10;
    VAR11   *VAR12;

    WORD16 VAR13;
    UWORD32 VAR14 = VAR3->VAR15;
    UWORD32 VAR16 = 0;
 if(VAR3->VAR17 != VAR18)
 {
        VAR14 <<= 1;
 if(VAR3->VAR17 == VAR19)
 {
            VAR16 = VAR3->VAR15;
 }
 }

 do
 {

        UWORD32 VAR20, VAR21;
        UWORD32 VAR22;
        WORD16 VAR23;

        UWORD32 VAR24     = VAR16 + (VAR3->VAR25 << 4);
        UWORD32 VAR26     = (VAR3->VAR27 << 4) * VAR14;
        VAR11 *VAR28        = VAR6->VAR29 + VAR24 + VAR26;
        UWORD32 VAR30           = VAR14;

         
         
         

        while(FUN2(VAR9,VAR31) == VAR32)




             FUN3(VAR9,VAR31);
 
         
 
 
        FUN3(VAR9,1);

 if(FUN4(VAR9, 1) != 0x01)
 {
 
 }

 
 for(VAR4 = 0; VAR4 < VAR33; ++VAR4)
 {

            VAR20    = VAR34[VAR4];
            VAR21    = VAR35[VAR4] ;
            VAR22     = (VAR21 * VAR30) + VAR20;
            VAR12     = VAR28 + VAR22;

            VAR13 = FUN5(VAR9);
            VAR23 = VAR3->VAR36[VAR37] + VAR13;
            VAR3->VAR36[VAR37] = VAR23;
            VAR23 = FUN6(VAR23);

            VAR3->FUN7(VAR12, VAR23, VAR30);
 }



 

        VAR24                >>= 1;
        VAR26                >>= 2;
        VAR30                      >>= 1;
        VAR12                     = VAR6->VAR38 + VAR24 + VAR26;
        VAR13                     = FUN8(VAR9);
        VAR23                      = VAR3->VAR36[VAR39] + VAR13;
        VAR3->VAR36[VAR39] = VAR23;
        VAR23 = FUN6(VAR23);
        VAR3->FUN7(VAR12, VAR23, VAR30);


 

        VAR12                     = VAR6->VAR40 + VAR24 + VAR26;
        VAR13                     = FUN8(VAR9);
        VAR23                      = VAR3->VAR36[VAR41] + VAR13;
        VAR3->VAR36[VAR41] = VAR23;
        VAR23 = FUN6(VAR23);
        VAR3->FUN7(VAR12, VAR23, VAR30);

 


        VAR3->VAR42--;
        VAR3->VAR25++;

 if(VAR3->VAR10.VAR43 > VAR3->VAR10.VAR44)
 {
 return VAR45;
 }
 else if (VAR3->VAR25 == VAR3->VAR46)
 {
            VAR3->VAR25 = 0;
            VAR3->VAR27++;

 }

 
        FUN3(VAR9,1);
 }
 while(VAR3->VAR42 != 0 && FUN2(&VAR3->VAR10,23) != 0x0);
 return (VAR1)VAR47;
}