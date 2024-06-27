int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	__u64 VAR5 = FUN2(VAR4->VAR5);
	__u64 VAR6 = VAR5 + FUN2(VAR4->VAR7) - 1;
	unsigned int VAR8, VAR9;
	struct cp_control VAR10;
	int VAR11 = 0;

	if (VAR5 >= FUN3(VAR2) || VAR4->VAR7 < VAR2->VAR12)
		return -VAR13;

	VAR10.VAR14 = 0;
	if (VAR6 <= FUN4(VAR2))
		goto VAR15;

	if (FUN5(VAR2, VAR16)) {
		FUN6(VAR2->VAR17, VAR18,
			"");
		goto VAR15;
	}

	
	VAR8 = (VAR5 <= FUN4(VAR2)) ? 0 : FUN7(VAR2, VAR5);
	VAR9 = (VAR6 >= FUN3(VAR2)) ? FUN8(VAR2) - 1 :
						FUN7(VAR2, VAR6);
	VAR10.VAR19 = VAR20;
	VAR10.VAR21 = FUN9(VAR22, 1, FUN2(VAR4->VAR23));

	
	for (; VAR8 <= VAR9; VAR8 = VAR10.VAR24 + 1) {
		VAR10.VAR25 = VAR8;

		if (VAR2->VAR26 == 0)
			break;
		else if (VAR2->VAR26 < FUN10(VAR2))
			VAR10.VAR24 = VAR9;
		else
			VAR10.VAR24 = FUN11(unsigned int,
				FUN12(VAR8 +
				FUN13(VAR2),
				VAR2->VAR27) - 1, VAR9);

		FUN14(&VAR2->VAR28);
		VAR11 = FUN15(VAR2, &VAR10);
		FUN16(&VAR2->VAR28);
		if (VAR11)
			break;

		FUN17();
 	}
 	
 	FUN18(VAR2);

	FUN19(VAR2);


 VAR15:
 	VAR4->VAR7 = FUN20(VAR10.VAR14);
 	return VAR11;
}