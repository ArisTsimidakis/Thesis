int FUN1(const char *VAR1, int VAR2,
	     VAR3 *VAR4,
	     int VAR5, const char **VAR6)
{
	const char *VAR7;
	VAR3 *VAR8;
	u8 VAR9[4];
	int VAR10 = 0;
	int VAR11;
	int VAR12 = 0;

	if (VAR2 < 0)
		VAR2 = strlen(VAR1);
	VAR7 = VAR1;
	VAR8 = VAR9;
	VAR11 = 0;
	while(1) {
		int VAR13;
		VAR13 = FUN2(VAR2 > 0 ? *VAR7 : '', VAR5);
		if (!(VAR13 & (VAR14 | VAR15 | VAR16 | VAR17))) {
			goto VAR18;
		}
		if (VAR13 & (VAR15 | VAR16 | VAR17)) {
			if (VAR12 == 0)
				goto VAR18;
			*VAR8++ = VAR12 & 0xff;
			VAR12 = 0;
			VAR11++;
			if (VAR13 & (VAR16 | VAR17)) {
				if (VAR11 != 4)
					goto VAR18;
				break;
			}
			goto VAR19;
		}
		VAR12 = (VAR12 * 10) + VAR13;
		if ((VAR12 & 0xffff) > 255) {
			goto VAR18;
		}
VAR19:
		if (VAR11 >= 4)
			goto VAR18;
		VAR7++;
		VAR2--;
	}
	VAR10 = 1;
	memcpy(VAR4, VAR9, sizeof(VAR9));
VAR18:
	if (VAR6)
		*VAR6 = VAR7;
	return VAR10;
}