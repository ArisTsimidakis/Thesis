static int FUN1(struct VAR1 *VAR2, const VAR3 *VAR4,
		        unsigned int VAR5)
{
	struct VAR6 *VAR7 = FUN2(VAR2);
	VAR8 *VAR9 = VAR7->VAR10;
	const VAR11 *VAR12 = (const VAR11 *)VAR4;
	u32 VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;

	VAR16 = FUN3(VAR12[0]);
	VAR17 = FUN3(VAR12[1]);
	VAR18 = FUN3(VAR12[2]);
	VAR19 = FUN3(VAR12[3]);

	for (VAR13 = 0; VAR13 < VAR20; VAR13++) {
		VAR14 = VAR16 + VAR18 - VAR21[VAR13];
		VAR15 = VAR17 + VAR21[VAR13] - VAR19;
		*(VAR9++) = VAR22[FUN4(VAR14, 0)] ^ VAR23[FUN4(VAR14, 1)] ^
				VAR24[FUN4(VAR14, 2)] ^ VAR25[FUN4(VAR14, 3)];
		*(VAR9++) = VAR22[FUN4(VAR15, 0)] ^ VAR23[FUN4(VAR15, 1)] ^
				VAR24[FUN4(VAR15, 2)] ^ VAR25[FUN4(VAR15, 3)];

		if (VAR13 % 2 == 0) {
			VAR14 = VAR16;
			VAR16 = (VAR16 >> 8) ^ (VAR17 << 24);
			VAR17 = (VAR17 >> 8) ^ (VAR14 << 24);
		} else {
			VAR14 = VAR18;
			VAR18 = (VAR18 << 8) ^ (VAR19 >> 24);
			VAR19 = (VAR19 << 8) ^ (VAR14 >> 24);
		}
	}

	return 0;
}