FUN1(VAR1 *VAR2,
	     gss_buffer_t VAR3,
	     VAR4 *VAR5,
	     VAR6 *VAR7,
	     VAR6 *VAR8,
	     VAR1 *VAR9,
	     VAR10 *VAR11)
{
	OM_uint32 VAR12, VAR13;
	gss_OID VAR14;
	spnego_gss_ctx_id_t VAR15;
	unsigned int VAR16;
	unsigned char *VAR17, *VAR18;

	VAR15 = (VAR19)*VAR5;
	VAR12 = VAR20;
	*VAR9 = VAR21;
	*VAR2 = 0;
	VAR14 = VAR22;
	*VAR11 = VAR23;
	*VAR7 = *VAR8 = VAR24;
 
 	VAR17 = VAR18 = VAR3->VAR25;
 #define FUN2 (VAR3->VAR26 - (VAR17 - VAR18))

	if (VAR27 > VAR28)


 		return VAR20;
 
 	
	if (*VAR17 == VAR29) {
		VAR12 = FUN3(VAR30,
					    &VAR16, &VAR17, 0, VAR27);
		if (VAR12) {
			*VAR2 = VAR12;
			return VAR20;
		}
	}
	if (*VAR17 != (VAR31 | 0x01)) {
		return VAR20;
	}
	VAR12 = FUN4(VAR2, VAR17, VAR27,
			       VAR9, &VAR14,
			       VAR7, VAR8);
	if (VAR12 != VAR32)
		goto VAR33;

	if (*VAR7 == VAR24 &&
	    *VAR8 == VAR24) {

		VAR12 = VAR20;
		goto VAR33;
	}
	if (VAR14 != VAR22) {
		VAR12 = VAR20;
		goto VAR33;
	}
	VAR15->VAR34 = 0;
	*VAR9 = VAR35;
	*VAR11 = VAR36;
VAR33:
	if (VAR14 != VAR22) {
		FUN5(&VAR13, &VAR14);
	}
	return VAR12;
#undef VAR27
}