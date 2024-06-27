int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    uch VAR6[8];


 

    fread(VAR6, 1, 8, VAR2);
 if (FUN2(VAR6, 0, 8))
 return 1; 


 
     
 

    VAR7 = FUN3(VAR8, NULL, NULL, NULL);




     if (!VAR7)
         return 4;   
 
    VAR9 = FUN4(VAR7);
 if (!VAR9) {
        FUN5(&VAR7, NULL, NULL);
 return 4; 
 }


 


 

 if (FUN6(FUN7(VAR7))) {
        FUN5(&VAR7, &VAR9, NULL);
 return 2;
 }


    FUN8(VAR7, VAR2);
    FUN9(VAR7, 8); 

    FUN10(VAR7, VAR9); 


 

    FUN11(VAR7, VAR9, &VAR10, &VAR11, &VAR12, &VAR13,
      NULL, NULL, NULL);
 *VAR4 = VAR10;
 *VAR5 = VAR11;


 

 return 0;
}