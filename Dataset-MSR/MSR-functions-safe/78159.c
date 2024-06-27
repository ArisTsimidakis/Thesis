static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
	int       VAR5, VAR6, VAR7;
	sc_apdu_t VAR8;
	u8        VAR9[VAR10];

	
	FUN2(VAR2, &VAR8, VAR11, 0xca, 0x01, 0x84);
	VAR8.VAR12      = 256;
	VAR8.VAR13 = sizeof(VAR9);
	VAR8.VAR14    = VAR9;
	VAR5 = FUN3(VAR2, &VAR8);
	FUN4(VAR2->VAR15, VAR16, VAR5, "");
	if (VAR8.VAR17 == 0x90 && VAR8.VAR18 == 0x00) {
		
		VAR7 = VAR19;
		VAR6 = 0x02;
		VAR9[0] = VAR4->VAR20[VAR4->VAR21-2]; 
		VAR9[1] = VAR4->VAR20[VAR4->VAR21-1];
	} else {
		
		VAR7 = VAR22;
		VAR6 = 0x00;
	}
	
	FUN2(VAR2, &VAR8, VAR7, 0xe4, VAR6, 0x00);
	if (VAR7 == VAR19) {
		VAR8.VAR23      = 2;
		VAR8.VAR24 = 2;
		VAR8.VAR25    = VAR9;
	}
	
	VAR5 = FUN3(VAR2, &VAR8);
	FUN4(VAR2->VAR15, VAR16, VAR5, "");
	return FUN5(VAR2, VAR8.VAR17, VAR8.VAR18);
}