VAR1 FUN1(struct VAR2 *VAR3,
				  struct VAR4 *VAR5)
{
	u16 VAR6 = FUN2(FUN3(VAR3));
	struct VAR7 *VAR8;
	unsigned short VAR9;
	u32 VAR10 = 0;
	int VAR11;

	
	for (VAR9 = 0; VAR9 < FUN4(VAR3)->VAR12; VAR9++)
		VAR6 += FUN2(FUN4(VAR3)->VAR13[VAR9].VAR14);

	if (FUN5(VAR5, VAR6 + 3)) {
		VAR5->VAR15.VAR16++;
		return VAR17;
	}

	
	VAR8 = &VAR5->VAR18[VAR5->VAR19];
	VAR8->VAR3 = VAR3;
	VAR8->VAR20 = FUN6(unsigned int, VAR3->VAR21, VAR22);
	VAR8->VAR23 = 1;

	
	VAR8->VAR10 = VAR10;

	VAR11 = FUN7(VAR5, VAR8);
	if (VAR11 < 0)
		goto VAR24;
	else if (!VAR11)
		FUN8(VAR5, VAR8);

	FUN9(VAR5, VAR8);

	return VAR25;

VAR24:
	FUN10(VAR8->VAR3);
	VAR8->VAR3 = NULL;

	return VAR25;
}