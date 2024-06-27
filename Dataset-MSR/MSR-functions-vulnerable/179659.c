static int FUN1(struct VAR1 *VAR2, struct socket *VAR3,
		  struct VAR4 *VAR5, size_t VAR6, int VAR7)
{
	struct VAR3 *VAR8 = VAR3->VAR8;
	struct VAR9 *VAR10;
	int VAR11 = 0;

	if (VAR8->VAR12 & VAR13) {
		VAR11 = -VAR14;
		goto VAR15;
	}

	VAR10 = FUN2(VAR8, VAR7 & ~VAR16,
				VAR7 & VAR16, &VAR11);
 	if (VAR11 < 0)
 		goto VAR15;
 

	VAR5->VAR17 = 0;


 	if (VAR10) {
 		VAR6 = FUN3(VAR18, VAR6, VAR10->VAR19);
 		VAR11 = FUN4(VAR10, 0, VAR5->VAR20, VAR6);
		if (VAR11 == 0) {
			FUN5(VAR10);
			return VAR6;
		}
	}

	FUN6(VAR10);
VAR15:
	return VAR11;
}