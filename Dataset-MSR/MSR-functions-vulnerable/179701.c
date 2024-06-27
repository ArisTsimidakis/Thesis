static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, *VAR5;
    VAR6 *VAR7;
    size_t VAR8, VAR9, VAR10;
 
     FUN2(VAR2->VAR11);
 

    VAR2->VAR12++;

    VAR10 = FUN3(VAR2);




 
     VAR2->VAR11 = FUN4(VAR10 * sizeof(VAR13));
     if(!VAR2->VAR11)
         return -1;
 

    for(VAR8 = 0; VAR8 < FUN3(VAR2); VAR8++)


     {
         VAR2->VAR11[VAR8].VAR14 = VAR2->VAR11[VAR8].VAR15 =
             &VAR2->VAR4;
    }

    VAR4 = VAR2->VAR4.VAR5;
    FUN5(&VAR2->VAR4);

    for(; VAR4 != &VAR2->VAR4; VAR4 = VAR5) {
        VAR5 = VAR4->VAR5;
        VAR7 = FUN6(VAR4);
        VAR9 = VAR7->VAR16 % VAR10;
        FUN7(VAR2, &VAR2->VAR11[VAR9], &VAR7->VAR4);
    }

    return 0;
}