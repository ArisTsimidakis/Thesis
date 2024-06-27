int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
 		    bool VAR5)
 {
 	struct snd_ctl_elem_id VAR6;


 	unsigned int VAR7;
 	struct VAR3 *VAR8;
 	int VAR9;

	if (!VAR4)
		return -VAR10;
	if (FUN2(!VAR2 || !VAR4->VAR11)) {
		VAR9 = -VAR10;
		goto VAR12;
	}
	VAR6 = VAR4->VAR6;
	FUN3(&VAR2->VAR13);
	VAR8 = FUN4(VAR2, &VAR6);
	if (!VAR8) {
		if (VAR5)
			goto VAR14;
		FUN5(&VAR2->VAR13);
		VAR9 = -VAR10;
		goto VAR12;
	}
	VAR9 = FUN6(VAR2, VAR8);
	if (VAR9 < 0) {
		FUN5(&VAR2->VAR13);
		goto VAR12;
	}
VAR14:
	if (FUN7(VAR2, VAR4->VAR15) < 0) {
		FUN5(&VAR2->VAR13);
		VAR9 = -VAR16;
		goto VAR12;
	}
	FUN8(&VAR4->VAR17, &VAR2->VAR18);
 	VAR2->VAR19 += VAR4->VAR15;
 	VAR4->VAR6.VAR20 = VAR2->VAR21 + 1;
 	VAR2->VAR21 += VAR4->VAR15;


 	FUN5(&VAR2->VAR13);

	for (VAR7 = 0; VAR7 < VAR4->VAR15; VAR7++, VAR6.VAR22++, VAR6.VAR20++)


 		FUN9(VAR2, VAR23, &VAR6);
 	return 0;
 
VAR12:
	FUN10(VAR4);
	return VAR9;
}