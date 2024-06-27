ZEND_API int FUN1(VAR1 *VAR2, const char *VAR3, uint VAR4) 
{
	VAR1 *VAR5;

	FUN2(VAR5);
	FUN3(VAR5);

	return FUN4(FUN5(VAR2), VAR3, VAR4, (void *) &VAR5, sizeof(VAR1 *), NULL);
}