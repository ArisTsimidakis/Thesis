static int FUN1(VAR1 *VAR2, int *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
     char VAR7[VAR8];
     int VAR9 = 0;
 

    VAR5->VAR10 = -1;


 
     for (;;) {
         if ((VAR9 = FUN2(VAR5, VAR7, sizeof(VAR7))) < 0)
            return VAR9;

        FUN3(VAR2, VAR11, "", VAR7);

        VAR9 = FUN4(VAR2, VAR7, VAR5->VAR12, VAR3);
        if (VAR9 < 0)
            return VAR9;
        if (VAR9 == 0)
            break;
        VAR5->VAR12++;
    }

    if (VAR5->VAR13 == -1 && VAR5->VAR14 && VAR5->VAR15 == 2000000000)
        VAR2->VAR16 = 1; 

    
    FUN5(VAR5->VAR17, &VAR5->VAR18);
    FUN6(&VAR5->VAR17);

    return VAR9;
}