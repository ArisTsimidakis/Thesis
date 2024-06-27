FUN1(struct VAR1 *VAR2, unsigned char *VAR3, uint32_t VAR4,
    int VAR5 FUN2((VAR6)), uint32_t VAR7, uint32_t VAR8,
     size_t VAR9, size_t VAR10, int *VAR11)
 {
 	if (VAR7 == 4 && strcmp((char *)&VAR3[VAR9], "") == 0 &&

	    VAR4 == VAR12 && (VAR8 == 16 || VAR8 == 20)) {


 		uint8_t VAR13[20];


 		uint32_t VAR14;
 		*VAR11 |= VAR15;

		if (FUN3(VAR2, "", VAR8 == 16 ? "" :

		    "") == -1)






























 			return 1;
 		(void)memcpy(VAR13, &VAR3[VAR10], VAR8);
 		for (VAR14 = 0; VAR14 < VAR8; VAR14++)
		    if (FUN3(VAR2, "", VAR13[VAR14]) == -1)
			return 1;
		return 1;
	}
	return 0;
}