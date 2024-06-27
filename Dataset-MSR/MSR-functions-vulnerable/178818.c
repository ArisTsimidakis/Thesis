FUN1(kadm5_principal_ent_t VAR1, long VAR2,
                int VAR3, VAR4 *VAR5, char **VAR6)
{
    int VAR7;
     char *VAR8 = *VAR6;
 
     

    if (!(VAR2 & VAR9) ||


         !(VAR1->VAR10 & VAR11))
         return;
 
    
    for (VAR7 = 0; (unsigned char) VAR8[VAR7] == VAR7 + 1; VAR7++);
    if (VAR8[VAR7] != '' || VAR7 != 255)
        return;

    
    *VAR6 = NULL;
}