static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6) {
	if (!(VAR6->VAR7[0].VAR8 & (VAR9 | VAR10))) {return -1;}
	int VAR11 = 0;
	int VAR12 = 0;
	int VAR13 = VAR6->VAR7[0].VAR14[0];

	VAR4[VAR11++] = 0x0f;
	if (!strcmp (VAR6->VAR15, "")) {
		VAR4[VAR11++] = 0x90;
	} else if (!strcmp (VAR6->VAR15, "")) {
		VAR4[VAR11++] = 0x91;
	} else if (!strcmp (VAR6->VAR15, "") ||
			  !strcmp (VAR6->VAR15, "") ||
			  !strcmp (VAR6->VAR15, "")) {
		VAR4[VAR11++] = 0x92;
	} else if (!strcmp (VAR6->VAR15, "") ||
			   !strcmp (VAR6->VAR15, "") ||
			   !strcmp (VAR6->VAR15, "")) {
		VAR4[VAR11++] = 0x93;
	} else if (!strcmp (VAR6->VAR15, "") ||
			   !strcmp (VAR6->VAR15, "")) {
		VAR4[VAR11++] = 0x94;
	} else if (!strcmp (VAR6->VAR15, "") ||
			   !strcmp (VAR6->VAR15, "")) {
		VAR4[VAR11++] = 0x95;
	} else if (!strcmp (VAR6->VAR15, "") ||
			   !strcmp (VAR6->VAR15, "")) {
		VAR4[VAR11++] = 0x96;
	} else if (!strcmp (VAR6->VAR15, "") ||
			   !strcmp (VAR6->VAR15, "")) {
		VAR4[VAR11++] = 0x97;
	} else if (!strcmp (VAR6->VAR15, "")) {
		VAR4[VAR11++] = 0x98;
	} else if (!strcmp (VAR6->VAR15, "")) {
		VAR4[VAR11++] = 0x99;
	} else if (!strcmp (VAR6->VAR15, "") ||
			   !strcmp (VAR6->VAR15, "")) {
		VAR4[VAR11++] = 0x9a;
	} else if (!strcmp (VAR6->VAR15, "") ||
			   !strcmp (VAR6->VAR15, "")) {
		VAR4[VAR11++] = 0x9b;
	} else if (!strcmp (VAR6->VAR15, "") ||
			   !strcmp (VAR6->VAR15, "")) {
		VAR4[VAR11++] = 0x9c;
	} else if (!strcmp (VAR6->VAR15, "") ||
			   !strcmp (VAR6->VAR15, "")) {
		VAR4[VAR11++] = 0x9d;
	} else if (!strcmp (VAR6->VAR15, "") ||
			   !strcmp (VAR6->VAR15, "")) {
		VAR4[VAR11++] = 0x9e;
	} else if (!strcmp (VAR6->VAR15, "") ||
			   !strcmp (VAR6->VAR15, "")) {
		VAR4[VAR11++] = 0x9f;
	} else {
		return -1;
	}
	if (!(VAR6->VAR7[0].VAR8 & VAR16)) {
		VAR12 = 3;
		VAR13 = VAR6->VAR7[0].VAR13;
	}
	VAR4[VAR11++] = VAR12 << 6 | VAR13;
	return VAR11;
}