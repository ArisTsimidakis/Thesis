FUN1(void)
{
	VAR1 *VAR2;
	char VAR3[26];
	element VAR4;
	VAR5 *VAR6;
	char *VAR7;

	VAR7 = FUN2("",
					"",
#if VAR8
					VAR9->VAR10,
#else
 					NULL,
 #endif
 					VAR9->VAR11);

	VAR2 = fopen(VAR7, "");


 	FUN3(VAR7);
 
 	FUN4();
	FUN5(&VAR12.VAR13, VAR3);

	fprintf(VAR2, "", VAR3, VAR12.VAR14);

	FUN6(VAR15, VAR2);

	fprintf(VAR2, "", VAR15->VAR16);

	fprintf(VAR2, "");
	FUN7(VAR17->VAR6, VAR6, VAR4) {
		FUN5(&VAR6->VAR18.VAR13, VAR3);
		fprintf(VAR2, "", VAR6->VAR19, VAR3, VAR6->VAR18.VAR14,
				VAR6->VAR20 == VAR21 ? "" :
				VAR6->VAR20 == VAR22 ? "" :
				VAR6->VAR20 == VAR23 ? "" :
				VAR6->VAR20 == VAR24 ? "" :
				VAR6->VAR20 == VAR25 ? "" :
				VAR6->VAR20 == VAR26 ? "" : "");
	}
	fclose(VAR2);
}