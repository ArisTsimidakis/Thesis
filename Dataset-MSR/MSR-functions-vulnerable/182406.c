FUN1 (VAR1) {	






 	int VAR2 = ((VAR3[0] >> 4) & 0xf) | ((VAR3[1] & 0x1) << 4);
 	int VAR4 = (VAR3[3] << 8) | VAR3[2];
 	VAR5->VAR6 = VAR4;

	
	FUN2 (VAR5, "", 0, 1, 0, VAR4, 0);
	FUN3 ("", VAR2);
}