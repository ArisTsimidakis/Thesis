void FUN1(VAR1 *VAR2)


 {
     VAR3 *VAR4 = &VAR2->VAR5;
     UWORD16 VAR6;
    UWORD16 VAR7;
    UWORD16 VAR8;
    UWORD16 VAR9;
    UWORD32 VAR10;
 const VAR11 *VAR12;
 if(FUN2(VAR4,1) == 1)
 {
        FUN3(VAR4,1);

 }
 else
 {
        VAR6 = FUN4(VAR4);

 if(VAR2->VAR13)
 {
 
 
 
 
 
 
 
 
 
            VAR2->VAR14 = VAR6 - 1;
 
            VAR2->VAR14 = FUN5(VAR2->VAR14, (VAR2->VAR15 - 1));

 
 
 
 
 
            VAR6 = 1;
            VAR2->VAR13 = 0;
 }
 else
 {
 
 
 
 
 
 
 
 
 if(VAR2->VAR16 &&
 ((VAR2->VAR14 + VAR6) > VAR2->VAR15))
 {
                VAR6    = VAR2->VAR15 - VAR2->VAR14;
 }


            FUN6(VAR2, (VAR17)(VAR6 - 1));
 }

 }
    VAR10 = (VAR17)FUN2(VAR4,16);
 
 
 
 {
        VAR9   = VAR2->VAR18[FUN7((VAR17)VAR10,15,10)];
        VAR8      = FUN7(VAR9,15,8);
        VAR7 = VAR8;
        VAR10 = (VAR17)FUN8((VAR17)VAR10 << VAR8);
 }
 
 
 
 {
        WORD32 VAR19 = VAR2->VAR20;

 if((VAR9 & VAR21) &&  VAR2->VAR22)
 {
            VAR2->VAR20 = FUN7((VAR17)VAR10,15,14);
            VAR7 += VAR23;
            VAR10 = (VAR17)FUN8((VAR17)VAR10 << VAR23);
            VAR19     = VAR2->VAR20;

 }


 if ((VAR9 & VAR21) &&
 ((VAR19 == 0) ||
 (VAR19 == 3) ||
 (VAR19 == 4) ||
 (VAR19 >= 7)))
 {
 
            VAR19 = 1;
 }

 }
 
 
 
 {
 if((VAR9 & VAR24) && VAR2->VAR25)
 {
            VAR2->VAR26 = FUN9((VAR17)VAR10,15);
            VAR7 += VAR27;
            VAR10 = (VAR17)FUN8((VAR17)VAR10 << VAR27);
 }
 }
 
 
 
 if(VAR9 & VAR28)
 {
        UWORD16 VAR29;
        VAR29 = FUN7((VAR17)VAR10,15,11);

        VAR2->VAR30 = (VAR2->VAR31) ?
            VAR32[VAR29] : (VAR29 << 1);
        VAR7 += VAR33;
 }
    FUN3(VAR4,VAR7);
 
 
 
    VAR2->VAR34    = (VAR17)(VAR9 & VAR24);

 if(VAR9 & VAR35)
 {
        UWORD16 VAR36       = (VAR2->VAR20);

        VAR2->VAR37    = 0;

         VAR2->VAR38         = VAR39;
         VAR12 = &VAR2->VAR40[VAR36];
         VAR2->VAR41 = VAR12->VAR41;




         VAR12->FUN10(VAR2);
     }
     else if(VAR9 & VAR21)
 {

        UWORD16 VAR42      = !(VAR9 & VAR43);
        UWORD16 VAR36       = (VAR2->VAR20);
        VAR2->VAR37    = 0;

         VAR2->VAR38         = (VAR44)VAR42;
         VAR12 = &VAR2->VAR45[VAR36];
         VAR2->VAR41 = VAR12->VAR41;




         VAR12->FUN10(VAR2);
 
     }
 else if(VAR9 & VAR46)
 {
        VAR2->VAR37    = 1;
        FUN11(VAR2);

 }
 else
 {
        VAR2->VAR37 =0;
        VAR2->VAR38 = VAR47;
        VAR2->VAR20 = 0;
        FUN12(VAR2);
 }

 
 
 
 if((VAR9 & VAR46))
 {
        VAR2->VAR48  = 0x3f;
        VAR2->VAR37    = 1;
 }
 else
 {
        VAR2->VAR37  = 0;
        VAR2->VAR49[VAR50] = 128 << VAR2->VAR51;
        VAR2->VAR49[VAR52] = 128 << VAR2->VAR51;
        VAR2->VAR49[VAR53] = 128 << VAR2->VAR51;
 if((VAR2->VAR34))
 {
            UWORD16 VAR54;
            VAR54  = VAR55[FUN2(VAR4,VAR56)];
            VAR2->VAR48  = VAR54 & 0xFF;
            FUN3(VAR4,(VAR54 >> 8) & 0x0FF);
 }
 else
 {

             VAR2->VAR48  = 0;
         }
     }


 }