VAR1 FUN1(VAR2 *VAR3, VAR4 * VAR5)
{
	u32 VAR6, VAR7;
	VAR8 *VAR9 = (VAR8 *)VAR3;
	u32 VAR10 = FUN2(VAR9->VAR11);
	if (!VAR3) return VAR12;
	FUN3(VAR3, "", VAR5);
	fprintf(VAR5, ""%VAR13\"", VAR10);
	for (VAR6 = 0; VAR6 < VAR10; VAR6++) {
		VAR14 *VAR15 = (VAR14 *)FUN4(VAR9->VAR11, VAR6);
		u32 VAR16 = FUN2(VAR15->VAR17);
		fprintf(VAR5, ""%VAR13\""%VAR13\"", VAR15->VAR18, VAR16);
		for (VAR7 = 0; VAR7 < VAR16; VAR7++) {
			VAR19 *VAR20 = (VAR19 *)FUN4(VAR15->VAR17, VAR7);
			VAR21 *VAR22 = (VAR21 *)FUN4(VAR15->VAR23, VAR7);
			fprintf(VAR5, ""%VAR13\""%VAR13\"", *VAR22, *VAR20);
		}
		fprintf(VAR5, "");
	}
	if (!VAR9->VAR24) {
		fprintf(VAR5, ""\""\"");
		fprintf(VAR5, ""\""\"");
		fprintf(VAR5, "");
	}
	FUN5("", VAR3, VAR5);
	return VAR25;
}