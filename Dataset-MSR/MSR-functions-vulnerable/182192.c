static void FUN1(void)
{
    char *VAR1 = strstr(VAR2, VAR3) + strlen(VAR3);
    int VAR4;
    
    if (sscanf(VAR1, "", &VAR4) != 1) {
        
        strcpy(VAR5, VAR2);

        
         *(FUN2(VAR5) - 1) = '';
 
         FUN3();


         strcat(VAR5, VAR2);


         strcpy(VAR2, VAR5);
         VAR6 = FUN4(VAR2);
     }
}