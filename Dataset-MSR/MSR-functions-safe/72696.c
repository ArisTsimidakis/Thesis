static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
	if (FUN2(VAR2, &VAR4->VAR5) ||
	  FUN2(VAR2, &VAR4->VAR6) ||
	  FUN2(VAR2, &VAR4->VAR7) ||
	  FUN2(VAR2, &VAR4->VAR8) ||
	  FUN2(VAR2, &VAR4->VAR9) ||
	  FUN2(VAR2, &VAR4->VAR10)) {
		return -1;
	}
	return 0;
}