FUN1(struct VAR1 *VAR1, u32 VAR2) {
	struct VAR3 *VAR4;
	size_t VAR5;

	VAR5 = sizeof(*VAR4) +
		   VAR2 * sizeof(VAR4->VAR6[0]) +
		   VAR2 * sizeof(*VAR4->VAR7);

	VAR4 = FUN2(VAR5, VAR8);
	if (VAR4) {
		VAR4->VAR1 = VAR1;
		VAR4->VAR7 = (void *)(&VAR4->VAR6[0]) +
			     VAR2 * sizeof(VAR4->VAR6[0]);
	}
	return VAR4;
}