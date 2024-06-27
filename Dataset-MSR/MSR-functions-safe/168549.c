static int FUN1(struct VAR1 *VAR2,
	struct VAR3 *VAR4, uint8_t VAR5)
{
	int VAR6, VAR7;
	for (VAR6=0; VAR6<VAR8; VAR6++) {
		if (VAR4->VAR9[VAR6].VAR10 == VAR11)
			continue;
		if (VAR4->VAR9[VAR6].VAR10 == 0)
			continue;
		if (VAR2->VAR12[VAR6].VAR13 == NULL)
			continue;
		for (VAR7=0; VAR7<VAR2->VAR12[VAR6].VAR14; VAR7++) {
			if (VAR2->VAR12[VAR6].VAR13[VAR7] == VAR5) {
				return VAR6;
			}
		}
	}
	return -1;
}