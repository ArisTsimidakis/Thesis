static VAR1 FUN1(VAR2 *VAR3, char *VAR4, size_t count VAR5)
{
	VAR6 *VAR7 = (VAR6*)VAR3->VAR8;
	size_t VAR9;

	assert(VAR7 != NULL);

        if (!VAR7->VAR10) {
                return -1;
        }

       


        VAR9 = FUN2(VAR7->VAR10, VAR4, VAR11);

       


        VAR3->VAR12 = VAR7->VAR10->VAR12;

       


        return VAR9;
 }