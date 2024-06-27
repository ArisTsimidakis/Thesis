static void FUN1(struct VAR1 *VAR1)
{
	struct VAR2 *VAR3 = VAR1->VAR4;
	struct VAR5 *VAR6 = VAR1->VAR7;
	struct VAR8 *VAR8 = FUN2(VAR6);
	uint8_t VAR9, VAR10;

	if (!VAR1->VAR11) {
		FUN3(&VAR3->VAR4, "");
		return;
	}

	VAR9 = *VAR6->VAR12;

	if (VAR1->VAR11 == 1) {
		FUN4(VAR8, VAR9);
		return;
	}

	if (VAR9 + 1 > VAR1->VAR11 - 1) {
		FUN3(&VAR3->VAR4, "",
			VAR9, VAR1->VAR11);
		return;
	}

	if (!FUN5(VAR9)) {
		FUN3(&VAR3->VAR4, "");
		return;
	}

	VAR10 = VAR6->VAR12[VAR9 + 1];
	FUN3(&VAR3->VAR4, "", VAR9, VAR10);
	FUN6(VAR6, 1);	
	FUN7(VAR6, VAR9);	
	FUN8(VAR8->VAR13, VAR6, VAR10);
	VAR1->VAR7 = NULL;	
}