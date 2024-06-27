FUN1 (const unsigned char *VAR1, int VAR2,
		    unsigned char *VAR3, int VAR4) {
    int VAR5 = 0, VAR6 = 0;
    unsigned char VAR7, VAR8, VAR9, VAR10;

    while (VAR5 < VAR2 && VAR6 < VAR4) {
	VAR8 = VAR7 = 0;

	VAR10 = VAR1[VAR5++];
	if (VAR10 >= '' && VAR10 <= '')
	    VAR8 = VAR10 - '';
	else if (VAR10 >= '' && VAR10 <= '')
	    VAR8 = 10 + (VAR10 - '');

	VAR10 = VAR1[VAR5++];
	if (VAR10 >= '' && VAR10 <= '')
	    VAR7 = VAR10 - '';
	else if (VAR10 >= '' && VAR10 <= '')
	    VAR7 = 10 + (VAR10 - '');

	VAR9 = VAR8 << 4;
	VAR9 += VAR7;
	VAR3[VAR6++] = VAR9;
    }

    return VAR6;
}