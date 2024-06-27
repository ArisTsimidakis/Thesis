static VAR1 *FUN1(struct VAR2 *VAR3, VAR1 *VAR4,
 		unsigned int *VAR5)
 {

	if (*VAR5 >= 60 && VAR4[39] == 0x2a && VAR4[40] == 0xf5 &&


 			VAR4[41] == 0x00 && VAR4[59] == 0x26 &&
 			VAR4[60] == 0xf9 && VAR4[61] == 0x00) {
 		FUN2(VAR3, "");
		VAR4[60] = 0xfa;
		VAR4[40] = 0xfa;
	}
	return VAR4;
}