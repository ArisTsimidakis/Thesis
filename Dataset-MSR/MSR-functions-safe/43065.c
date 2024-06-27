FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4;

	VAR4 = FUN2(sizeof(struct VAR3), VAR5);
	if (!VAR4) {
		FUN3("");
		return NULL;
	}

	return &VAR4->VAR6;
}