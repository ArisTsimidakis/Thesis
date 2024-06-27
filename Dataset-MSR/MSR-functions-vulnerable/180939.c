FUN1(const char *VAR1, size_t VAR2)
{
 	uint64_t VAR3;
 	int VAR4;
 






 	VAR3 = 0;
 	VAR4 = *VAR1 - '';
 	while (VAR4 >= 0 && VAR4 < 10  && VAR2-- > 0) {
		VAR3 = (VAR3 * 10) + VAR4;
		VAR4 = *++VAR1 - '';
	}
	return (VAR3);
}