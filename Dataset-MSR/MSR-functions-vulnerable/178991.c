static int FUN1(struct VAR1 *VAR2)
{
	struct perf_sample_data VAR3;
	struct VAR4 *VAR5;
	int VAR6, VAR7;
	u64 VAR8;
	int VAR9;

	FUN2(&VAR3, 0);

	VAR5 = &FUN3(VAR4);

	
	FUN4(VAR10, VAR11);

	FUN5();
	VAR9 = FUN6();
	VAR8 = FUN7();
	if (!VAR8) {
		FUN8(0);
		return VAR9;
	}

	VAR7 = 0;
VAR12:
	FUN9(VAR8);
	if (++VAR7 > 100) {
		FUN10(1, "");
		FUN11();
		FUN12();
		goto VAR13;
	}

	FUN13(VAR14);

	FUN14();

	
	if (FUN15(62, (unsigned long *)&VAR8)) {
		VAR9++;
		VAR15.FUN16(VAR2);
	}

	FUN17(VAR6, (unsigned long *)&VAR8, VAR16) {
		struct VAR17 *VAR18 = VAR5->VAR19[VAR6];

		VAR9++;

		if (!FUN18(VAR6, VAR5->VAR20))
			continue;

		if (!FUN19(VAR18))
			continue;
 
 		VAR3.VAR21 = VAR18->VAR22.VAR23;
 

		if (FUN20(VAR18, 1, &VAR3, VAR2))


 			FUN21(VAR18, 0);
 	}
 
	
	VAR8 = FUN7();
	if (VAR8)
		goto VAR12;

VAR13:
	FUN8(0);
	return VAR9;
}