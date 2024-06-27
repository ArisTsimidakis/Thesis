static int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4;
	int VAR5 = -VAR6;

	
	if (VAR7)
		goto VAR8;

	
	VAR5 = -VAR9;
	if (!VAR2->VAR10)
		goto VAR8;
	VAR4 = FUN2(VAR2->VAR10);
	VAR5 = -VAR11;
	if (VAR4) {
		FUN3(VAR4);
		goto VAR8;
	}
	VAR4 = FUN4(NULL, VAR2->VAR10, 0, NULL, 1, 0);
	VAR5 = -VAR12;
	if (!VAR4)
		goto VAR8;
	memcpy((char *)&(VAR4->VAR13), VAR2->VAR14, VAR15);
	VAR16 = VAR7 = VAR4;
	FUN5(VAR4);
	FUN6(VAR4);

	VAR5 = FUN7(VAR4);
	FUN3(VAR4);
VAR8:
	return VAR5;
}