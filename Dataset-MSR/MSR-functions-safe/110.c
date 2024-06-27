FUN1(VAR1)
{
	VAR2 ** VAR3;
	zend_bool VAR4 = 1;
	long VAR5;

	VAR6 * VAR7;
	VAR8 *VAR9;

	if (FUN2(FUN3() VAR10, "", &VAR3, &VAR4) == VAR11) {
		return;
	}

	VAR7 = FUN4(VAR3, 0, &csr_resource VAR10);

	if (VAR7 == NULL) {
		VAR12;
	}

	VAR9=FUN5(VAR7);
	FUN6(FUN7(VAR9, VAR13));
	return;
}