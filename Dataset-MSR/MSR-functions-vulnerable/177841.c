_PUBLIC_ char *FUN1(struct VAR1 *VAR2,
					VAR3 *VAR4, const char *VAR5, size_t VAR6)
{
	size_t VAR7=0;
	char *VAR8;

	if (!VAR5) {
		return NULL;
	}

	
	VAR8 = FUN2(VAR4, char, 2*(VAR6+1));
	if (VAR8 == NULL) {
                return NULL;
        }
 

       while (VAR6-- && *VAR5) {


                size_t VAR9;
                codepoint_t VAR10 = FUN3(VAR2, VAR5, VAR6,
                                                          VAR11, &VAR9);
                VAR5 += VAR9;


 
                VAR10 = FUN4(VAR10);
		if (VAR9 == -1) {
			FUN5(VAR8);
			return NULL;
		}
		VAR7 += VAR9;
	}

	VAR8[VAR7] = 0;

	
	VAR8 = FUN6(VAR4, VAR8, char, VAR7+1);

	FUN7(VAR8, VAR8);

	return VAR8;
}