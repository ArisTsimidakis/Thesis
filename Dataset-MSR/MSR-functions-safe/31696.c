FUN1(VAR1, compat_sigset_t VAR2 *, VAR3, VAR4, VAR5)
{
#ifdef VAR6
	sigset_t VAR7;
	compat_sigset_t VAR8;

	
	if (VAR5 != sizeof(VAR9))
		return -VAR10;

	if (FUN2(&VAR8, VAR3, sizeof(VAR11)))
		return -VAR12;
	FUN3(&VAR7, &VAR8);
	return FUN4(&VAR7);
#else
	
	return FUN5((sigset_t VAR2 *)VAR3, VAR5);
#endif
}