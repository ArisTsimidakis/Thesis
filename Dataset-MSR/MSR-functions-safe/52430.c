int FUN1(struct VAR1 *VAR1, u_int8_t VAR2)
{
#ifdef VAR3
	char VAR4[VAR5];
	struct VAR6 *VAR7;
	kuid_t VAR8;
	kgid_t VAR9;
#endif

	if (VAR2 >= FUN2(VAR10))
		return -VAR11;


#ifdef VAR3
	VAR8 = FUN3(VAR1->VAR12, 0);
	VAR9 = FUN4(VAR1->VAR12, 0);

	FUN5(VAR4, VAR10[VAR2], sizeof(VAR4));
	FUN6(VAR4, VAR13, sizeof(VAR4));
	VAR7 = FUN7(VAR4, 0440, VAR1->VAR14, &VAR15,
				(void *)(unsigned long)VAR2);
	if (!VAR7)
		goto VAR16;
	if (FUN8(VAR8) && FUN9(VAR9))
		FUN10(VAR7, VAR8, VAR9);

	FUN5(VAR4, VAR10[VAR2], sizeof(VAR4));
	FUN6(VAR4, VAR17, sizeof(VAR4));
	VAR7 = FUN7(VAR4, 0440, VAR1->VAR14, &VAR18,
				(void *)(unsigned long)VAR2);
	if (!VAR7)
		goto VAR19;
	if (FUN8(VAR8) && FUN9(VAR9))
		FUN10(VAR7, VAR8, VAR9);

	FUN5(VAR4, VAR10[VAR2], sizeof(VAR4));
	FUN6(VAR4, VAR20, sizeof(VAR4));
	VAR7 = FUN7(VAR4, 0440, VAR1->VAR14, &VAR21,
				(void *)(unsigned long)VAR2);
	if (!VAR7)
		goto VAR22;
	if (FUN8(VAR8) && FUN9(VAR9))
		FUN10(VAR7, VAR8, VAR9);
#endif

	return 0;

#ifdef VAR3
VAR22:
	FUN5(VAR4, VAR10[VAR2], sizeof(VAR4));
	FUN6(VAR4, VAR17, sizeof(VAR4));
	FUN11(VAR4, VAR1->VAR14);

VAR19:
	FUN5(VAR4, VAR10[VAR2], sizeof(VAR4));
	FUN6(VAR4, VAR13, sizeof(VAR4));
	FUN11(VAR4, VAR1->VAR14);
VAR16:
	return -1;
#endif
}