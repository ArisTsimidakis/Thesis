int FUN1(struct VAR1 *VAR2)
{
	dev_t VAR3 = VAR2->VAR4->VAR5->VAR6;
	struct VAR7 *VAR8;
	int VAR9 = 0;

	if (FUN2(VAR2)->VAR10) {
		VAR8 = FUN2(VAR2)->VAR10;
		goto VAR11;
	}

	VAR8 = FUN3(sizeof(struct VAR7), VAR12);
	if (!VAR8)
		return -VAR13;
	FUN4(&VAR8->VAR14, 0);
	FUN4(&VAR8->VAR15, 0);
 	FUN5(&VAR8->VAR16);
 	FUN6(&VAR8->VAR17);
 	FUN2(VAR2)->VAR10 = VAR8;






 VAR11:
 	VAR8->VAR18 = FUN7(VAR19, VAR2,
 				"", FUN8(VAR3), FUN9(VAR3));
	if (FUN10(VAR8->VAR18)) {
		VAR9 = FUN11(VAR8->VAR18);
		FUN12(VAR8);
		FUN2(VAR2)->VAR10 = NULL;
		return VAR9;
	}

	return VAR9;
}