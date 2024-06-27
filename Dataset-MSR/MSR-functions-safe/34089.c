static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3)
{
	int VAR4;
	struct VAR1 *VAR1 = VAR3->VAR5;
	struct udf_fileident_bh VAR6;
	struct VAR7 *VAR8, VAR9;
	struct kernel_lb_addr VAR10;

	VAR4 = -VAR11;
	VAR8 = FUN2(VAR2, &VAR3->VAR12, &VAR6, &VAR9);
	if (!VAR8)
		goto VAR13;

	VAR4 = -VAR14;
	VAR10 = FUN3(VAR9.VAR15.VAR16);
	if (FUN4(VAR2->VAR17, &VAR10, 0) != VAR1->VAR18)
		goto VAR19;
	VAR4 = -VAR20;
	if (!FUN5(VAR1))
		goto VAR19;
	VAR4 = FUN6(VAR2, VAR8, &VAR6, &VAR9);
	if (VAR4)
		goto VAR19;
	if (VAR1->VAR21 != 2)
		FUN7(VAR1->VAR17, "",
			 VAR1->VAR21);
	FUN8(VAR1);
	VAR1->VAR22 = 0;
	FUN9(VAR2);
	VAR1->VAR23 = VAR2->VAR23 = VAR2->VAR24 =
						FUN10(VAR2->VAR17);
	FUN11(VAR2);

VAR19:
	if (VAR6.VAR25 != VAR6.VAR26)
		FUN12(VAR6.VAR26);
	FUN12(VAR6.VAR25);

VAR13:
	return VAR4;
}