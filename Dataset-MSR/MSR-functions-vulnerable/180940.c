FUN1(const char *VAR1, size_t VAR2)
 {
 	int64_t VAR3;
 	int VAR4;

        








 	VAR3 = 0;
 	while (VAR2-- > 0) {
 		if (*VAR1 >= '' && *VAR1 <= '')
			VAR4 = *VAR1 - '';
		else
			break;
		VAR1++;
		VAR3 <<= 3;
		VAR3 |= VAR4;
	}
	return (VAR3);
}