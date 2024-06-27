FUN1(VAR1 *VAR2, int VAR3, int remove, VAR4 *VAR5)
 {
        int VAR6;
 

       if (VAR5->VAR7 == NULL)


                return;
 
        do
	{
		char *VAR8 = &VAR5->VAR7[VAR5->VAR9];
		size_t VAR10;
		int VAR11 = FUN2(&VAR6, VAR8);
		if (VAR6 == VAR3)
		{
			
			VAR5->VAR9 += VAR11;
		}
		else if (VAR3 == 32) {
			
			break;
		}
		else if (VAR6 == 32) {
			
		}
		else
		{
			
			VAR5->VAR9 = -1;
			break;
		}
		if (remove)
		{
			VAR10 = strlen(VAR8+VAR11);
			memmove(VAR8, VAR8+VAR11, VAR10+1);
			VAR5->VAR12 = 1;
		}
	}
	while (VAR6 != VAR3);
}