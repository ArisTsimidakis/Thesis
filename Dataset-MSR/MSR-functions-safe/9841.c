FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, void *VAR5, unsigned int VAR6,
                             const struct VAR7 *VAR8, struct VAR9 *VAR10, const char *VAR11)
{
	struct VAR12 *VAR13;
	struct VAR14 *VAR15 = VAR5;
	char *VAR16;

	if (!VAR15->VAR17)
		return 0;

	VAR16 = VAR15->VAR17;

	while (*VAR16 != '' && *VAR16 != '')  
		VAR16++;

	if (!*VAR16)
		return 0;

	VAR16++;  

	VAR13 = FUN2();
	VAR16 = VAR13->VAR18 = FUN3(VAR16);
	if (!VAR16)
		return 0;
	while (*VAR16 != '' && *VAR16 != '')  
		VAR16++;

	VAR10->VAR19.VAR18 = *VAR13;
	VAR10->VAR19.VAR18.VAR20 = VAR16 - VAR13->VAR18;
	VAR10->VAR21 = VAR22;
	VAR10->VAR23 = VAR24;

	return 1;
}