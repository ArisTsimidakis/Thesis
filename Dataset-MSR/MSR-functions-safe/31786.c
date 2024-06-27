static int FUN1(struct VAR1 *VAR2)
{
	if ((VAR2->VAR3 & VAR4) ||
	    FUN2(&VAR2->VAR5, &VAR2->VAR6) ||
	    FUN2(&VAR2->signal->VAR7, &VAR2->VAR6)) {
		FUN3(VAR2, VAR8);
		return 1;
	}
	
	return 0;
}