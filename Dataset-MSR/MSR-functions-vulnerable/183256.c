void *FUN1(const char *VAR1, qboolean VAR2)
 {
 	void *VAR3;














 	
 	if(VAR2)
 		FUN2(""%VAR4\"", VAR1);
	
	if(!VAR2 || !(VAR3 = FUN3(VAR1)))
	{
		const char *VAR5;
		char VAR6[VAR7];

		VAR5 = FUN4();

		if(!*VAR5)
			VAR5 = "";

		FUN2(""%VAR4\""%VAR4\"", VAR1, VAR5);
		FUN5(VAR6, sizeof(VAR6), "", VAR5, VAR8, VAR1);

		if(!(VAR3 = FUN3(VAR6)))
		{
			const char *VAR9 = FUN6("");
			
			if(!VAR9 || !*VAR9)
				VAR9 = "";
			
			if(FUN7(VAR5, VAR9))
			{
				FUN2(""%VAR4\""%VAR4\"", VAR1, VAR9);
				FUN5(VAR6, sizeof(VAR6), "", VAR9, VAR8, VAR1);
				VAR3 = FUN3(VAR6);
			}
			
			if(!VAR3)
				FUN2(""%VAR4\"", VAR1);
		}
	}
	
	return VAR3;
}