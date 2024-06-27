FUN1(struct VAR1 *VAR2,
				u64 VAR3)
{
	struct VAR4 *VAR5;
	struct VAR6 *VAR7;
	u64 VAR8 = FUN2(VAR3);
 	u16 VAR9 = FUN3(VAR3);
 	unsigned long VAR10;
 






 	FUN4(&VAR2->VAR11, VAR10);
 	FUN5(VAR5, &VAR2->VAR12, VAR13) {
 		if (VAR8 == VAR5->VAR8) {
			VAR7 = VAR5->VAR14[VAR9];
			if (VAR7 &&
			    (!FUN6(&VAR7->VAR15) ||
			     !FUN7(VAR7)))
				VAR7 = NULL;
			FUN8(&VAR2->VAR11, VAR10);
			return VAR7;
		}
	}
	FUN8(&VAR2->VAR11, VAR10);
	return NULL;
}