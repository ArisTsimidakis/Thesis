char *FUN1(char *VAR1, const VAR2 *VAR3)
{
	if (VAR3->VAR4[0] == 0x00 && VAR3->VAR4[1] == 0x00 &&
	    VAR3->VAR4[2] == 0x00 && VAR3->VAR4[3] == 0x00 &&
	    VAR3->VAR4[4] == 0x00) {
		strcpy(VAR1, "");
	} else {
		sprintf(VAR1, "", VAR3->VAR4[0] & 0xFF,
						VAR3->VAR4[1] & 0xFF,
						VAR3->VAR4[2] & 0xFF,
						VAR3->VAR4[3] & 0xFF,
						VAR3->VAR4[4] & 0xFF);
	}

	return VAR1;
}