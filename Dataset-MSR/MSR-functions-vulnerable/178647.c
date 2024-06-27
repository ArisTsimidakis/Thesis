PHPAPI VAR1 *FUN1(int VAR2, char *VAR3, size_t length STREAMS_DC VAR4)
{
	VAR1 *VAR5;
	VAR6 *VAR7;
 
        if ((VAR5 = FUN2(VAR2)) != NULL) {
                VAR7 = (VAR6*)VAR5->VAR8;

               


                if (VAR2 == VAR9 || VAR2 == VAR10) {
                        
                        VAR7->VAR11 = VAR3;
			VAR7->VAR12 = VAR13;
		} else {
			if (VAR13) {
				assert(VAR3 != NULL);
				FUN3(VAR5, VAR3, VAR13);
			}
		}
	}
	return VAR5;
}