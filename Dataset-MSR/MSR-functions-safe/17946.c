FUN1(VAR1 *VAR2, VAR1 *VAR3,
    u_int8_t VAR4[8], u_int8_t VAR5[16])
{
	u_int8_t VAR6[2048], VAR7[2048], VAR8[VAR9];
	struct VAR10 *VAR11 = NULL;
	size_t VAR12, VAR13;
	int VAR14;

	VAR12 = FUN2(VAR2);
	VAR13 = FUN2(VAR3);
	if (VAR12 < (512 / 8) || (VAR15)VAR12 > sizeof(VAR6) ||
	    VAR13 < (512 / 8) || (VAR15)VAR13 > sizeof(VAR7))
		return VAR16;
	if (FUN3(VAR2, VAR6) <= 0 ||
	    FUN3(VAR3, VAR7) <= 0) {
		VAR14 = VAR17;
		goto VAR18;
	}
	if ((VAR11 = FUN4(VAR19)) == NULL) {
		VAR14 = VAR20;
		goto VAR18;
	}
	if (FUN5(VAR11, VAR6, VAR12) != 0 ||
	    FUN5(VAR11, VAR7, VAR13) != 0 ||
	    FUN5(VAR11, VAR4, 8) != 0 ||
	    FUN6(VAR11, VAR8, sizeof(VAR8)) != 0) {
		VAR14 = VAR17;
		goto VAR18;
	}
	memcpy(VAR5, VAR8, FUN7(VAR19));
	VAR14 = 0;
 VAR18:
	FUN8(VAR11);
	FUN9(VAR6, sizeof(VAR6));
	FUN9(VAR7, sizeof(VAR7));
	FUN9(VAR8, sizeof(VAR8));
	return VAR14;
}