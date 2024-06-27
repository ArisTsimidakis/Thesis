static int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = FUN2(VAR2->VAR5);
	struct f2fs_summary VAR6;
	struct node_info VAR7;
	pgoff_t VAR8;
	blkcnt_t VAR9 = 1;

	if (FUN3(FUN4(VAR2->VAR5, VAR10)))
		return -VAR11;

	VAR2->VAR12 = FUN5(VAR2->VAR13, VAR2->VAR14);
	if (VAR2->VAR12 == VAR15)
		goto VAR16;

	if (FUN3(!FUN6(VAR4, VAR2->VAR5, &VAR9)))
		return -VAR17;

VAR16:
	FUN7(VAR4, VAR2->VAR18, &VAR7);
	FUN8(&VAR6, VAR2->VAR18, VAR2->VAR14, VAR7.VAR19);

	FUN9(VAR4, NULL, VAR2->VAR12, &VAR2->VAR12,
						&VAR6, VAR20);
	FUN10(VAR2);

	
	VAR8 = FUN11(FUN12(VAR2->VAR13), VAR2->VAR5) +
							VAR2->VAR14;
	if (FUN13(VAR2->VAR5) < ((VAR21)(VAR8 + 1) << VAR22))
		FUN14(VAR2->VAR5,
				((VAR21)(VAR8 + 1) << VAR22));
	return 0;
}