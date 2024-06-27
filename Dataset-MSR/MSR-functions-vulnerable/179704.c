void *FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    size_t VAR6;
     VAR7 *VAR8;
 
     VAR6 = FUN2(VAR3);

    VAR8 = &VAR2->VAR9[VAR6 % FUN3(VAR2)];


 
     VAR5 = FUN4(VAR2, VAR8, VAR3, VAR6);
     if(!VAR5)
        return NULL;

    return &VAR5->VAR10;
}