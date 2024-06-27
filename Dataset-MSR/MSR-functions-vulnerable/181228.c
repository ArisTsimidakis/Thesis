char *FUN1(time_t VAR1)
{
	struct VAR2 *VAR2;
	char *VAR3;
         int VAR4;
 
 	VAR2 = FUN2(&VAR1);






 	VAR3 = FUN3(FUN4(VAR2));
 
 	VAR4 = strlen(VAR3);
	if (VAR4 > 0) VAR3[VAR4-1] = '';
        return VAR3;
}