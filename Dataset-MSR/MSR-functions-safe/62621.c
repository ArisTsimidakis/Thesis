FUN1(VAR1 *VAR2, const unsigned char *VAR3, int VAR4)
{
    int VAR5 = 0;

    if (VAR4 <= 0)
	return;
    FUN2((VAR2, "", VAR5));
    for (VAR5 = 0; VAR5 < VAR4; ) {
        FUN3(VAR3[VAR5]);
	FUN2((VAR2, "", VAR3[VAR5] & 0xff));
	VAR5++;
	if (VAR5%8 == 0)
	    FUN2((VAR2, ""));
	if (VAR5 % 16 == 0) {
	    FUN4(VAR2, &VAR3[VAR5 - 16], 8);
	    FUN2((VAR2, ""));
	    FUN4(VAR2, &VAR3[VAR5 - 8], 8);
	    FUN2((VAR2, ""));
	    if (VAR5 < VAR4)
		FUN2((VAR2, "", VAR5));
	}
    }
    if (VAR5 % 16) {
	int VAR6;

	VAR6 = 16 - (VAR5 % 16);
	FUN2((VAR2, ""));
	if (VAR6>8)
	    FUN2((VAR2, ""));
	while (VAR6--)
	    FUN2((VAR2, ""));

	VAR6 = FUN5(8, VAR5 % 16);
	FUN4(VAR2, &VAR3[VAR5 - (VAR5 % 16)], VAR6);
	FUN2((VAR2, ""));
	VAR6 = (VAR5 % 16) - VAR6;
	if (VAR6 > 0)
	    FUN4(VAR2, &VAR3[VAR5 - VAR6], VAR6);
	FUN2((VAR2, ""));
    }
    return;

VAR7:
    FUN2((VAR2, ""));
    FUN2((VAR2, ""));
}