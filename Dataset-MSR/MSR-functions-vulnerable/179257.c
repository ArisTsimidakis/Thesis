static int FUN1(struct VAR1 *VAR2)
 {

	int VAR3 = VAR2->VAR4.VAR5;


 
 	if (VAR2->VAR4.VAR6 != VAR7)
 		return -VAR8;

	
	if (FUN2(VAR2))
		return -VAR9;

	switch (VAR3) {
	case VAR10:
	case VAR11:
		return -VAR8;

	default:
		break;
	}

	if (VAR3 >= VAR12)
		return -VAR8;

	if (!VAR2->VAR13) {
		int VAR14;

		VAR14 = FUN3(VAR2);
		if (VAR14)
			return VAR14;

		FUN4(&VAR15[VAR3]);
		VAR2->VAR16 = VAR17;
	}

	return 0;
}