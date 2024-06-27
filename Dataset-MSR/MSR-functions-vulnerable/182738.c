static char *FUN1(const char *VAR1, size_t VAR2)
{
    int   VAR3, VAR4, VAR5, VAR6;
    char *VAR7, VAR8[5] = {0};

    VAR4 = VAR5 = VAR3 = VAR6 = 0;

     
     if (VAR1[0] == '')
     {

        VAR7 = malloc(strlen(VAR1) + 1);


         strncpy(VAR7, VAR1, strlen(VAR1) + 1);
         return VAR7;
     }
    else if (VAR1[0] == '')
    {
        VAR4 = 1;
        ++VAR3;
    }
    
    
    if (VAR4 && (VAR2 > 5) && 
        (VAR1[VAR3] == '') && (VAR1[VAR3+1] == '') &&
        (VAR1[VAR3+2] == '') && (VAR1[VAR3+3] == ''))
    {
        VAR5 = 1;
        VAR3 += 4;
    }
    else
       return NULL;
 
     

    VAR7 = malloc(VAR2);


     for ( ; VAR3<VAR2; ++VAR3)
     {
         VAR8[0] = VAR1[VAR3++];
        VAR8[1] = VAR1[VAR3++];
        VAR8[2] = VAR1[VAR3++];
        VAR8[3] = VAR1[VAR3];
        VAR7[VAR6++] = FUN2(VAR8, NULL, 16);
    }

    return VAR7;
}