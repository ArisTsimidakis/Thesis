static void FUN1(struct VAR1 *VAR2, int VAR3)
{
	FUN2(&VAR2->VAR4);
	VAR2->VAR5 = 0;
	if (FUN3(&VAR2->VAR6)) {
		if ((long)(VAR2->VAR6.VAR7-VAR8) < VAR3) {
			FUN4(&VAR2->VAR6);
			VAR2->VAR9 = 1;
			FUN5(&VAR2->VAR4);
			return;
		}
		FUN6(&VAR2->VAR10);
	}
	FUN7(VAR2, VAR3);
	FUN5(&VAR2->VAR4);
}