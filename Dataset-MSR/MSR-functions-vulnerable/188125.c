VAR1 FUN1(VAR2 *VAR3)
{
 VAR4 *VAR5;
    VAR5 = &VAR3->VAR6;

    FUN2(VAR5,VAR7);
 
    FUN3(VAR5,10);

 
    VAR3->VAR8 = (VAR9)FUN3(VAR5,3);
 if((VAR3->VAR8 < VAR10) || (VAR3->VAR8 > VAR11))
 {
        FUN4(VAR3, VAR12);
 return VAR13;
 }

 
    FUN3(VAR5,16);

 if(VAR3->VAR8 == VAR14 || VAR3->VAR8 == VAR15)
 {
        VAR3->VAR16 = FUN5(VAR5);
        VAR3->VAR17          = FUN3(VAR5,3);
 }
 if(VAR3->VAR8 == VAR15)
 {
        VAR3->VAR18 = FUN5(VAR5);
        VAR3->VAR19          = FUN3(VAR5,3);
 }

 
     if(VAR3->VAR20 == 0)
     {










         VAR3->VAR21[0][0] = VAR3->VAR21[0][1] = VAR3->VAR17;
         VAR3->VAR21[1][0] = VAR3->VAR21[1][1] = VAR3->VAR19;
     }

 
 
 
 
 
 
 
 
 
 
 while (FUN6(VAR5,1) == 1 &&
           VAR5->VAR22 < VAR5->VAR23)
 {
        FUN3(VAR5,9);
 }
    FUN5(VAR5);
    FUN7(VAR3);

 return (VAR1)VAR24;
}