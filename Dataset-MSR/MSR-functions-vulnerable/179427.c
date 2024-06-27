static void FUN1(void *VAR1, struct VAR2 *VAR3, long VAR4)
{
	struct VAR5 *VAR6 = VAR1;
	struct VAR7 *VAR8;
	struct VAR9 *VAR10;
	struct VAR11 *VAR12;
	struct VAR13 *VAR14;
	struct VAR15 *VAR16;
	unsigned long VAR17;
	int VAR18;
 	int VAR19;
 
 	VAR19 = FUN2(VAR20, VAR3);

	if (VAR19 < 0)


 		return;
 
 	
	VAR8 = FUN3(VAR6->VAR21[VAR19]);
	if (!VAR8)
		return;

	if (FUN4(VAR8))
		return;

	VAR12 = FUN5(VAR19);
	if (!VAR12)
		return;

	FUN6(VAR17);
	VAR18 = FUN7();

	VAR16 = VAR6->VAR22.VAR16;
	VAR14 = FUN8(VAR16,
			VAR12->VAR23->VAR14.VAR24, sizeof(*VAR10),
			VAR17, VAR18);
	if (!VAR14)
		return;

	VAR10 = FUN9(VAR14);
	VAR10->VAR25 = VAR19;
	VAR10->VAR4 = FUN10(VAR20, VAR3);

	FUN11(VAR8, VAR16, VAR14, VAR10,
				    VAR17, VAR18);
}