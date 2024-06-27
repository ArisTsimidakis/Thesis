static int FUN1(VAR1 *VAR2,
								   unsigned int VAR3, const VAR4 *VAR5,
								   size_t VAR6, unsigned long VAR7)
{
	sc_apdu_t VAR8;
	int VAR9;

	FUN2(VAR2->VAR10, VAR11);

	assert(VAR6 <= VAR2->VAR12);

	FUN3(VAR2, &VAR8, VAR13, 0xD6,
		       (VAR3 >> 8) & 0xFF, VAR3 & 0xFF);
	VAR8.VAR14=VAR3 > 0x7fff ? 0x80:0x00;
	VAR8.VAR15 = VAR6;
	VAR8.VAR16 = VAR6;
	VAR8.VAR17 = VAR5;

	VAR9 = FUN4(VAR2, &VAR8,0,0,0,0);
	FUN5(VAR2->VAR10, VAR18, VAR9, "");
	FUN5(VAR2->VAR10, VAR18, FUN6(VAR2, VAR8.VAR19, VAR8.VAR20),
		    "");
	FUN7(VAR2->VAR10, VAR11, VAR6);
}