static int FUN1(VAR1 *VAR2, int VAR3)
 {
 	unsigned char *VAR4;
 

	assert(VAR2->VAR5);


 	assert(VAR3 >= 0);

	if (!(VAR4 = FUN2(VAR2->VAR5, VAR3, sizeof(unsigned char)))) {




 		return -1;
 	}
 	VAR2->VAR5 = VAR4;
	VAR2->VAR6 = VAR3;
	return 0;
}