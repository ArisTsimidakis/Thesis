void FUN1(struct VAR1 *VAR2, const char *VAR3,
		const char *VAR4, ...)
{
	struct va_format VAR5;
	va_list VAR6;

	FUN2(VAR6, VAR4);

	VAR5.VAR4 = VAR4;
	VAR5.VAR7 = &VAR6;

	FUN3("", VAR3, VAR2->VAR8, &VAR5);

	FUN4(VAR6);
}