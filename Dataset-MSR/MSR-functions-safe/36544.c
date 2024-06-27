static char *FUN1(VAR1 *VAR2, unsigned int VAR3)
{
	VAR1 *VAR4;

	if (FUN2(VAR2))
		return NULL;
	if (!FUN3(VAR2))
		return NULL;
	if (VAR3 > FUN4(VAR2))
		return NULL;
	VAR4 = FUN5(VAR2, VAR3);
	if (!FUN6(VAR4))
		return NULL;

	return (char *)FUN7(VAR4);
}