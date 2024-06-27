VAR1 *FUN1(VAR1 *VAR2, const char *VAR3)
{
	for (; VAR2 != NULL; VAR2 = VAR2->VAR4)
		if (FUN2(VAR2->VAR5, VAR3) == 0) return VAR2;

	return NULL;
}