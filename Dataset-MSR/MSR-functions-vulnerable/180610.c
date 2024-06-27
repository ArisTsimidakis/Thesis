static void FUN1(struct VAR1 *VAR2, const int VAR3,
			       int VAR4, int VAR5)
{
	struct VAR6 *VAR7 = FUN2(VAR2);
	int VAR8 = 0;
	int VAR9 = VAR7->VAR10 - FUN3(VAR7);
 	int VAR11 = VAR3 -
 				 (VAR7->VAR12 - VAR7->VAR13);
 






 	VAR7->VAR14 += VAR11;
 	if (VAR9 < 0) {
 		u64 VAR15 = (VAR16)VAR7->VAR10 * VAR7->VAR14 +
			       VAR7->VAR17 - 1;
		VAR8 = FUN4(VAR15, VAR7->VAR17) - VAR7->VAR18;
	} else if ((VAR5 & VAR19) &&
		   !(VAR5 & VAR20)) {
		VAR8 = FUN5(int, VAR9,
			       FUN6(int, VAR7->VAR14 - VAR7->VAR18,
				     VAR11) + 1);
	} else {
		VAR8 = FUN7(VAR9, VAR11);
	}
	VAR8 = FUN8(VAR8, (VAR4 ? 1 : 0));
	VAR7->VAR21 = FUN3(VAR7) + VAR8;
}