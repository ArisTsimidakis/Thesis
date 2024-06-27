FUN1(VAR1 *VAR2,
                 register const VAR3 *VAR4, int VAR5, int32_t VAR6)
{
	const struct VAR7 *VAR8;
	unsigned long VAR9;

	if (VAR5 < (int)sizeof(struct VAR7))
		return;

	VAR8 = (const struct VAR7 *) VAR4;

	

	FUN2((VAR2, ""));

	if (FUN3(VAR6)) {
		FUN4(VAR2, VAR4, VAR5, VAR6);
		return;
	}

	FUN2((VAR2, "", FUN5(VAR10, "", VAR6)));

	VAR4 += sizeof(struct VAR7);

	

	if (VAR8->VAR11 == VAR12)
		switch (VAR6) {
		case 504:		
		{
			unsigned long VAR13;
			FUN2((VAR2, ""));
			FUN6(VAR4[0], 4);
			VAR9 = FUN7(VAR4);
			VAR4 += sizeof(VAR14);
			for (VAR13 = 0; VAR13 < VAR9; VAR13++)
				FUN8();
			if (VAR13 == 0)
				FUN2((VAR2, ""));
		}
			break;
		case 505:		
		{
			unsigned long VAR13;
			FUN6(VAR4[0], 4);
			VAR13 = FUN7(VAR4);
			VAR4 += sizeof(VAR14);

			

			for (VAR9 = 0; VAR9 < VAR13; VAR9++) {
				FUN9(VAR15);
			}
			if (VAR13 == 0)
				FUN2((VAR2, ""));
		}
			break;
		case 508:		
		case 514:		
		case 517:		
		case 518:		
		case 519:		
		{
			unsigned long VAR13;
			FUN6(VAR4[0], 4);
			VAR13 = FUN7(VAR4);
			VAR4 += sizeof(VAR14);
			for (VAR9 = 0; VAR9 < VAR13; VAR9++) {
				FUN8();
			}
			if (VAR13 == 0)
				FUN2((VAR2, ""));
		}
			break;
		case 510:		
			FUN2((VAR2, ""));
			FUN8();
			FUN2((VAR2, ""));
			FUN8();
			break;
		default:
			;
		}
	else {
		
		FUN2((VAR2, ""));
		FUN8();
	}

	return;

VAR16:
	FUN2((VAR2, ""));
}