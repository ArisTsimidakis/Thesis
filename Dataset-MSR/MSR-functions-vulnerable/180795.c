static inline int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, VAR5 *VAR6)
{
	struct VAR7 *VAR8 = (struct VAR7 *)VAR6;
	u16 VAR9, VAR10, VAR11;
	struct VAR12 *VAR13;

	VAR9   = FUN2(VAR8->VAR9);
	VAR10  = FUN2(VAR8->VAR10);
	VAR11 = FUN2(VAR8->VAR11);

	FUN3("",
			VAR9, VAR10, VAR11);

	VAR13 = FUN4(&VAR2->VAR14, VAR9);
	if (!VAR13)
		return 0;

	switch (VAR11) {
	case VAR15:
 		break;
 
 	case VAR16:

		if (++FUN5(VAR13)->VAR17 < VAR18) {

			char VAR19[128];

			

			FUN6(VAR2, FUN7(VAR2), VAR20,

						FUN8(VAR13, VAR19), VAR19);

			goto VAR21;














































 		}
 
 	default:
		VAR13->VAR22 = VAR23;
		VAR13->VAR24 = VAR25;
		FUN9(VAR13, VAR26 * 5);
		{
			struct l2cap_disconn_req VAR19;
			VAR19.VAR27 = FUN10(FUN5(VAR13)->VAR27);
			VAR19.VAR9 = FUN10(FUN5(VAR13)->VAR9);
			FUN6(VAR2, FUN7(VAR2),
					VAR28, sizeof(VAR19), &VAR19);
		}
		goto VAR21;
	}

	if (VAR10 & 0x01)
		goto VAR21;

	FUN5(VAR13)->VAR29 |= VAR30;

	if (FUN5(VAR13)->VAR29 & VAR31) {
		VAR13->VAR22 = VAR32;
		FUN11(VAR13);
	}

VAR21:
	FUN12(VAR13);
	return 0;
}