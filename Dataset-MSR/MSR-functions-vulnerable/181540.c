static int FUN1(struct VAR1 *VAR2, long *VAR3,
				size_t VAR4)
{
	struct VAR5 *VAR6 = VAR2->VAR7.VAR6;
	int VAR8 = 0;
	long VAR9 = *VAR3;
	FUN2(VAR10);

	FUN3("", VAR11, VAR2,
		 *VAR3, VAR4);

	
	FUN4(VAR2);

	
	for (;;) {
		FUN5(&VAR2->VAR10, &VAR10,
					  VAR12);
		if (!*VAR3)
			goto VAR13;
		if (VAR6->VAR14 || VAR2->VAR15 >= VAR16 ||
		    VAR2->VAR7.VAR17)
			goto VAR18;
		if (FUN6(VAR19))
			goto VAR20;
		if (VAR4 <= FUN7(VAR2))
			break;

		
 		FUN8(VAR6);
 		VAR9 = FUN9(VAR9);

		FUN10(VAR6 != VAR2->VAR7.VAR6);




 		FUN11(VAR6);
 
 		*VAR3 = VAR9;
	}

VAR21:
	FUN12(&VAR2->VAR10, &VAR10);

	
	FUN13(VAR2);

	return VAR8;

VAR18:
	VAR8 = -VAR22;
	goto VAR21;

VAR20:
	VAR8 = FUN14(*VAR3);
	goto VAR21;

VAR13:
	VAR8 = -VAR23;
	goto VAR21;
}