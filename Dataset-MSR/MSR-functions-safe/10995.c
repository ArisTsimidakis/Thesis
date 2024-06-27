PHPAPI char *FUN1(VAR1 *VAR2)
{
	if (FUN2(VAR2) == VAR3) {
		char *VAR4 = FUN3(FUN4(VAR2) + 1);
		memcpy(VAR4, FUN5(VAR2), FUN4(VAR2));
		VAR4[FUN4(VAR2)] = '';
		return VAR4;
	}
	return NULL;
}