FUN1(VAR1 *VAR2, const char **VAR3, int *VAR4)


 {
     const char *VAR5;
 

    if (*VAR4 <= 0 || !VAR3 || !*VAR3)

	return NULL;

    if (*VAR3 > (const char *) VAR2->VAR6)

	return NULL;




     VAR5 = *VAR3;

    while (*VAR3 <= (const char *) VAR2->VAR6 && *VAR4 >= 0 && **VAR3) {
































 	(*VAR3)++;
 	(*VAR4)--;
     }


     (*VAR3)++;
     (*VAR4)--;

    if (*VAR4 < 0 || *VAR3 > (const char *) VAR2->VAR6)

	return NULL;
     return VAR5;
 }