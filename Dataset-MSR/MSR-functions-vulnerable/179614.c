FUN1(const VAR1 *VAR2, const VAR3 *VAR4,
    uint32_t VAR5, VAR6 **VAR7, VAR8 *VAR9, VAR8 *VAR10)
{
	const VAR11 *VAR12;
	cdf_section_header_t VAR13;
	const VAR14 *VAR15, *VAR16, *VAR17;
	int16_t VAR18;
	int32_t VAR19;
	uint32_t VAR20;
	int64_t VAR21;
	uint64_t VAR22;
	cdf_timestamp_t VAR23;
	size_t VAR24, VAR25, VAR26, VAR27, VAR28;
	VAR6 *VAR29;

	if (VAR5 > VAR30 / 4) {
		VAR31 = VAR32;
		goto VAR33;
	}
	VAR12 = FUN2(const VAR11 *, (const void *)
	    ((const char *)VAR2->VAR34 + VAR5));
	if (FUN3(VAR2, VAR4, VAR12, sizeof(*VAR12), VAR35) == -1)
		goto VAR33;
	VAR13.VAR36 = FUN4(VAR12->VAR36);
#define FUN5 (VAR30 / 8)
	if (VAR13.VAR36 > VAR37) {
		VAR31 = VAR32;
		goto VAR33;
	}
	VAR13.VAR38 = FUN4(VAR12->VAR38);
#define FUN6 (VAR30 / (4 * sizeof(*VAR29)))
	if (VAR13.VAR38 > VAR39)
		goto VAR33;
	FUN7(("", VAR13.VAR36,
	    VAR13.VAR38));
	if (*VAR10) {
		if (*VAR10 > VAR39)
			goto VAR33;
		*VAR10 += VAR13.VAR38;
		VAR29 = FUN2(VAR6 *,
		    realloc(*VAR7, *VAR10 * sizeof(*VAR29)));
	} else {
		*VAR10 = VAR13.VAR38;
		VAR29 = FUN2(VAR6 *,
		    malloc(*VAR10 * sizeof(*VAR29)));
	}
	if (VAR29 == NULL)
		goto VAR33;
	*VAR7 = VAR29;
	VAR29 += *VAR9;
	*VAR9 += VAR13.VAR38;
	VAR15 = FUN2(const VAR14 *, (const void *)
	    ((const char *)(const void *)VAR2->VAR34 +
	    VAR5 + sizeof(VAR13)));
	VAR17 = FUN2(const VAR14 *, (const void *)
	    (((const char *)(const void *)VAR12) + VAR13.VAR36));
	if (FUN3(VAR2, VAR4, VAR17, 0, VAR35) == -1)
		goto VAR33;
	for (VAR24 = 0; VAR24 < VAR13.VAR38; VAR24++) {
		size_t VAR40 = FUN8(VAR15, (VAR24 << 1) + 1);
		VAR16 = (const VAR14 *)(const void *)
		    ((const char *)(const void *)VAR15 + VAR40
		    - 2 * sizeof(VAR41));
		if (VAR16 > VAR17) {
			FUN7(("", VAR16, VAR17));
			goto VAR33;
		}
		VAR29[VAR24].VAR42 = FUN8(VAR15, VAR24 << 1);
		VAR29[VAR24].VAR43 = FUN8(VAR16, 0);
		FUN7(("" VAR44 "",
 		    VAR24, VAR29[VAR24].VAR42, VAR29[VAR24].VAR43, VAR16 - VAR15, VAR5));
 		if (VAR29[VAR24].VAR43 & VAR45) {
 			VAR27 = FUN8(VAR16, 1);








 			VAR25 = 2;
 		} else {
 			VAR27 = 1;
			VAR25 = 1;
		}
		VAR26 = VAR25 * sizeof(VAR41);
		if (VAR29[VAR24].VAR43 & (VAR46|VAR47|VAR48))
			goto VAR49;
		switch (VAR29[VAR24].VAR43 & VAR50) {
		case VAR51:
		case VAR52:
			break;
		case VAR53:
			if (VAR29[VAR24].VAR43 & VAR45)
				goto VAR49;
			(void)memcpy(&VAR18, &VAR16[VAR26], sizeof(VAR18));
			VAR29[VAR24].VAR54 = FUN9(VAR18);
			break;
		case VAR55:
			if (VAR29[VAR24].VAR43 & VAR45)
				goto VAR49;
			(void)memcpy(&VAR19, &VAR16[VAR26], sizeof(VAR19));
			VAR29[VAR24].VAR56 = FUN4((VAR41)VAR19);
			break;
		case VAR57:
		case VAR58:
			if (VAR29[VAR24].VAR43 & VAR45)
				goto VAR49;
			(void)memcpy(&VAR20, &VAR16[VAR26], sizeof(VAR20));
			VAR29[VAR24].VAR59 = FUN4(VAR20);
			break;
		case VAR60:
			if (VAR29[VAR24].VAR43 & VAR45)
				goto VAR49;
			(void)memcpy(&VAR21, &VAR16[VAR26], sizeof(VAR21));
			VAR29[VAR24].VAR61 = FUN10((VAR62)VAR21);
			break;
		case VAR63:
			if (VAR29[VAR24].VAR43 & VAR45)
				goto VAR49;
			(void)memcpy(&VAR22, &VAR16[VAR26], sizeof(VAR22));
			VAR29[VAR24].VAR64 = FUN10((VAR62)VAR22);
			break;
		case VAR65:
			if (VAR29[VAR24].VAR43 & VAR45)
				goto VAR49;
			(void)memcpy(&VAR20, &VAR16[VAR26], sizeof(VAR20));
			VAR20 = FUN4(VAR20);
			memcpy(&VAR29[VAR24].VAR66, &VAR20, sizeof(VAR29[VAR24].VAR66));
			break;
		case VAR67:
			if (VAR29[VAR24].VAR43 & VAR45)
				goto VAR49;
			(void)memcpy(&VAR22, &VAR16[VAR26], sizeof(VAR22));
			VAR22 = FUN10((VAR62)VAR22);
			memcpy(&VAR29[VAR24].VAR68, &VAR22, sizeof(VAR29[VAR24].VAR68));
			break;
		case VAR69:
		case VAR70:
			if (VAR27 > 1) {
				size_t VAR71 = VAR29 - *VAR7;
				if (*VAR10 > VAR39
				    || VAR27 > VAR39)
					goto VAR33;
				*VAR10 += VAR27;
				VAR29 = FUN2(VAR6 *,
				    realloc(*VAR7, *VAR10 * sizeof(*VAR29)));
				if (VAR29 == NULL)
					goto VAR33;
				*VAR7 = VAR29;
				VAR29 = *VAR7 + VAR71;
 			}
 			FUN7(("" VAR44 "",
 			    VAR27));

			for (VAR28 = 0; VAR28 < VAR27; VAR28++, VAR24++) {






 				uint32_t VAR72 = FUN8(VAR16, VAR25);
 				VAR29[VAR24].VAR73.VAR74 = VAR72;
 				VAR29[VAR24].VAR73.VAR75 = (const char *)
				    (const void *)(&VAR16[VAR26 + sizeof(VAR72)]);
				FUN7(("" VAR44
				    "", VAR72,
				    FUN11(VAR72, sizeof(VAR72)),
				    VAR29[VAR24].VAR73.VAR75));
				if (VAR72 & 1)
					VAR72++;
				VAR25 += VAR72 >> 1;
				if (VAR16 + VAR25 >= VAR17)
					goto VAR33;
				VAR26 = VAR25 * sizeof(VAR41);
			}
			VAR24--;
			break;
		case VAR76:
			if (VAR29[VAR24].VAR43 & VAR45)
				goto VAR49;
			(void)memcpy(&VAR23, &VAR16[VAR26], sizeof(VAR23));
			VAR29[VAR24].VAR77 = FUN10((VAR62)VAR23);
			break;
		case VAR78:
			if (VAR29[VAR24].VAR43 & VAR45)
				goto VAR49;
			break;
		default:
		VAR49:
			FUN7(("",
			    VAR29[VAR24].VAR43));
			break;
		}
	}
	return 0;
VAR33:
	free(*VAR7);
	return -1;
}