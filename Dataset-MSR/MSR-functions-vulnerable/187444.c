static int FUN1(struct VAR1 *VAR2, char VAR3)
{
 char VAR4;


     FUN2("", FUN3(VAR3));
 
     

    if (send(VAR2->VAR5, &VAR3, 1, VAR6) == -1)


     {
         FUN4("", strerror(VAR7));
         FUN5(VAR2->VAR5);
        VAR2->VAR5 = VAR8;
 return -1;
 }

 
 if (FUN6(VAR2, &VAR4, 1) < 0)
 return -1;

    FUN2("", FUN3(VAR3), VAR4);

 if (VAR4 == VAR9)
 return VAR4;
 if (VAR4 != VAR10)
 return -1;

 return 0;
}