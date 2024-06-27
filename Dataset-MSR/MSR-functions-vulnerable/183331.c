static int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4)
{
	__u32 VAR5 *VAR6 = (__u32 VAR5 *)(unsigned long)VAR4->VAR7;
	struct VAR8 *VAR9 = FUN2(VAR2);
	int VAR10 = sizeof(*VAR9) / sizeof(VAR11);
	__uint128_t VAR12;
	void *VAR13 = &VAR12;
	u64 VAR14;
	int VAR15 = 0;

	
	VAR14 = FUN3(VAR4->VAR16);
	if (VAR14 >= VAR10 ||
	    (VAR14 + (FUN4(VAR4->VAR16) / sizeof(VAR11))) >= VAR10)
		return -VAR17;

	if (FUN5(VAR4))
		return -VAR18;

	if (FUN4(VAR4->VAR16) > sizeof(VAR12))
		return -VAR18;

	if (FUN6(VAR13, VAR6, FUN4(VAR4->VAR16))) {
		VAR15 = -VAR19;
		goto VAR20;
 	}
 
 	if (VAR14 == FUN7(VAR9.VAR21)) {

		u32 VAR22 = (*(VAR23 *)VAR13) & VAR24;


 		switch (VAR22) {
 		case VAR25:






 		case VAR26:
 		case VAR27:
 		case VAR28:
 		case VAR29:
 		case VAR30:






 		case VAR31:
 		case VAR32:
 		case VAR33:




 			break;
 		default:
 			VAR15 = -VAR18;
			goto VAR20;
		}
	}

	memcpy((VAR23 *)VAR9 + VAR14, VAR13, FUN4(VAR4->VAR16));
VAR20:
	return VAR15;
}