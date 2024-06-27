asmlinkage long FUN1(struct timeval VAR1 *VAR2,
				 struct timezone VAR1 *VAR3)
{
	if (FUN2(VAR2 != NULL)) {
		struct timeval VAR4;
		FUN3(&VAR4);
		if (FUN4(VAR2, &VAR4, sizeof(VAR4)))
			return -VAR5;
	}
	if (FUN5(VAR3 != NULL)) {
		if (FUN4(VAR3, &VAR6, sizeof(VAR6)))
			return -VAR5;
	}
	return 0;
}