FUN1(char *VAR1, size_t VAR2, int *VAR3)




 {

	static struct range	 VAR4[VAR5];
 	int			 VAR6 = 0;
 	char			*VAR7, *VAR8;






 
 	
 	if ((VAR7 = strchr(VAR1, '')) == NULL)

		return (NULL);


 
 	*VAR7++ = '';
 	
 	if (strcmp(VAR1, "") != 0)

		return (NULL);


 
 	while ((VAR8 = strchr(VAR7, '')) != NULL) {
 		*VAR8++ = '';
 
 		

		if (FUN2(VAR7, VAR2, &VAR4[VAR6]) == 0)


 			continue;
 
 		VAR6++;

		if (VAR6 == VAR5)

			return (NULL);




 
 		VAR7 = VAR8;
 	}
 

	if (FUN2(VAR7, VAR2, &VAR4[VAR6]) != 0)


 		VAR6++;
 

	*VAR3 = VAR6;

	return (VAR6 ? VAR4 : NULL);






 }