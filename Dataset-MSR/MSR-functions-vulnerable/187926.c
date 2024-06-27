static int FUN1(int VAR1, VAR2* VAR3)
{
 off_t VAR4;
 size_t VAR5;
 void* VAR6;

    assert(VAR3 != NULL);

 if (FUN2(VAR1, &VAR4, &VAR5) < 0)
 return -1;

    VAR6 = FUN3(NULL, VAR5, VAR7, VAR8, VAR1, VAR4);
 if (VAR6 == VAR9) {
        FUN4("", (int) VAR5,
            VAR1, (int) VAR4, strerror(VAR10));
 return -1;
 }

    VAR3->VAR11 = VAR6;

     VAR3->VAR5 = VAR5;
     VAR3->VAR12 = 1;
     VAR3->VAR13 = malloc(sizeof(VAR14));










     VAR3->VAR13[0].VAR11 = VAR6;
     VAR3->VAR13[0].VAR5 = VAR5;
 
 return 0;
}