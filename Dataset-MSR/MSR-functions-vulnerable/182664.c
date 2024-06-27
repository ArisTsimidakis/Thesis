static int FUN1(int VAR1)
{
	enum bp_state VAR2;

	if (VAR3) {
		VAR2 = FUN2();
		if (VAR2 != VAR4) {
			FUN3(&VAR5);
			FUN4(VAR6,
				   !FUN5(&VAR7));
			FUN6(&VAR5);
			return 0;
 		}
 	}
 






 	VAR2 = FUN7(VAR1, VAR8);
 	if (VAR2 != VAR9)
 		return -VAR10;

	return 0;
}