char *FUN1(VAR1 *VAR2, struct ldb_val VAR3)
 {
        char *VAR4;




        if (!VAR3.VAR5)
                return NULL;
 
	
	VAR4 = FUN2(VAR2, char, VAR3.VAR5 * 3 + 1);
	if ( ! VAR4) {
		FUN3(VAR4);
                return NULL;
        }
 

       FUN4(VAR4, (const char *)VAR3.VAR6, VAR3.VAR5);



       VAR4 = FUN5(VAR2, VAR4, char, strlen(VAR4) + 1);


 












        return VAR4;
 }