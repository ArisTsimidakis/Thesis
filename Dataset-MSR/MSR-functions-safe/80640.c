VAR1 *FUN1(VAR2 *VAR3, u32 VAR4, VAR5 *VAR6)
{
	u32 VAR7;
	VAR1 *VAR8;
	if (VAR3 == NULL) return NULL;
	VAR7=0;
	while ((VAR8 = (VAR1 *)FUN2(VAR3->VAR9, &VAR7))) {
		if (VAR8->VAR10 == VAR4) {
			if ((VAR4 != VAR11) || !VAR6) return VAR8;
			if (!memcmp(VAR8->VAR6, *VAR6, 16)) return VAR8;
		}
	}
	return NULL;
}