int FUN1(const VAR1 * VAR2, size_t VAR3, int *VAR4)
{
	int    VAR5 = 0;
	size_t VAR6;

	if (VAR3 > sizeof(int) || VAR3 == 0)
		return VAR7;
	if (VAR2[0] & 0x80)
		VAR5 = -1;
	for (VAR6 = 0; VAR6 < VAR3; VAR6++) {
		VAR5 <<= 8;
		VAR5 |= *VAR2++;
	}
	*VAR4 = VAR5;
	return 0;
}