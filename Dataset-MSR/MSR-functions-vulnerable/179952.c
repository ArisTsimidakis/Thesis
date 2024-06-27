FUN1(struct VAR1 *VAR2, int VAR3, const unsigned char *VAR4,
    size_t VAR5)
{
	union {
		int32_t VAR6;
		char VAR7[sizeof (VAR8)];
	} VAR9;
	int VAR10;
	int VAR11;
	struct stat VAR12;
	off_t VAR13;
 	int VAR14 = 0;
 	Elf32_Ehdr VAR15;
 	Elf64_Ehdr VAR16;

	uint16_t VAR17, VAR18, VAR19;


 
 	if (VAR2->VAR14 & (VAR20|VAR21))
 		return 0;
	
	if (VAR4[VAR22] != VAR23
	    || (VAR4[VAR24] != VAR25 && VAR4[VAR24] != VAR26)
	    || VAR4[VAR27] != VAR28 || VAR4[VAR29] != VAR30)
		return 0;

	
	if((FUN2(VAR3, (VAR31)0, VAR32) == (VAR31)-1) && (VAR33 == VAR34))
		VAR3 = FUN3(VAR2, VAR3, VAR4, VAR5);

	if (FUN4(VAR3, &VAR12) == -1) {
  		FUN5(VAR2);
		return -1;
	}
	if (FUN6(VAR12.VAR35) || VAR12.VAR36 != 0)
		VAR13 = VAR12.VAR36;
	else
		VAR13 = VAR37;

	VAR10 = VAR4[VAR38];

	switch (VAR10) {
	case VAR39:
#undef VAR40
#VAR41 FUN7(VAR42, VAR43)	FUN8(VAR42, VAR43)
#undef VAR44
#define elfhdr VAR15
#VAR45 ""
	case VAR46:
#undef VAR40
#VAR41 FUN7(VAR42, VAR43)	FUN9(VAR42, VAR43)
#undef VAR44
#define elfhdr VAR16
#VAR45 ""
	default:
	    if (FUN10(VAR2, "", VAR10) == -1)
		    return -1;
	    break;
	}
	return 0;
}