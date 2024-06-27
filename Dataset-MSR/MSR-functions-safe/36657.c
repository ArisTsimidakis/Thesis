void FUN1(unsigned char *VAR1, const char *VAR2)
{
	uint32_t VAR3, VAR4[7];
	int VAR5, VAR6, VAR7;
	uint64_t VAR8;

	memset(VAR4, 0, 7 * sizeof(VAR9));
	VAR5 = strlen(VAR2);
	for (VAR6 = 0; VAR6 < VAR5; VAR6++) {
		VAR3 = VAR2[VAR6];
		VAR3 = VAR10[VAR3];
		for (VAR7 = 6; VAR7 >= 0; VAR7--) {
			VAR8 = ((VAR11)VAR4[VAR7]) * 58 + VAR3;
			VAR3 = (VAR8 & 0x3f00000000ull) >> 32;
			VAR4[VAR7] = VAR8 & 0xffffffffull;
		}
	}
	*(VAR1++) = VAR4[0] & 0xff;
	for (VAR6 = 1; VAR6 < 7; VAR6++) {
		*((VAR9 *)VAR1) = FUN2(VAR4[VAR6]);
		VAR1 += sizeof(VAR9);
	}
}