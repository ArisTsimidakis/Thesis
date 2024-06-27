VAR1 FUN1(VAR2 *VAR3,
                       UWORD8 VAR4,
                       UWORD16 VAR5)
{

     VAR6 *VAR7 = VAR3->VAR7;
     WORD32 VAR8;
 

    VAR3->VAR9 = 1;
     VAR3->VAR10 = 0xffff;
     VAR3->VAR11 = 0;
     {
 VAR12 * VAR13 = VAR3->VAR14;
 if(VAR13->VAR15 & VAR16)
 {
            FUN2(VAR3);
 return VAR17;
 }
 }

    FUN3(&VAR3->VAR18);
    VAR8 = FUN4(VAR3);
 if(VAR8 != VAR19)
 return VAR8;
    VAR3->VAR20 = 0;
 
 
 
 
 {
 VAR21 *VAR22 = &VAR3->VAR23;
 VAR21 *VAR24 = &VAR3->VAR25;
 if((0 == VAR4) && VAR7->VAR26)
            VAR3->VAR27 = VAR7->VAR5;

 if(VAR4 || VAR7->VAR28)
            VAR3->VAR27 = 0;

 if(VAR3->VAR29->VAR30)
 {
            VAR8 = FUN5(VAR3, VAR5);
 if(VAR8 != VAR19)
 return VAR8;
 }

        VAR22->VAR31 = VAR24->VAR31;
        VAR22->VAR5 = VAR24->VAR5;
        VAR22->VAR28 = VAR7->VAR28;
 if(VAR7->VAR26)
 {
            VAR22->VAR32 = VAR24->VAR32;
            VAR22->VAR33 = VAR24->VAR33;
            VAR22->VAR34 =
                            VAR24->VAR34;
            VAR22->VAR35[0] =
                            VAR24->VAR35[0];
            VAR22->VAR35[1] =
                            VAR24->VAR35[1];
            VAR22->VAR36 = VAR24->VAR36;
 }
 }

    FUN6(&VAR3->VAR18);

 return VAR19;
}