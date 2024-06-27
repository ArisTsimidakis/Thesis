FUN1(unsigned long VAR1)
{
	void *VAR2 = malloc(VAR1);

	if (VAR2 == NULL) {
		if (FUN2(VAR3, &VAR4))
			FUN3("");
		else
			FUN4(VAR5, "", strerror(VAR6));
		FUN5(VAR7);
	}

#ifdef VAR8
	VAR9 += VAR1 - sizeof(long);
	if (VAR9 > VAR10)
		VAR10 = VAR9;
#endif

	return VAR2;
}