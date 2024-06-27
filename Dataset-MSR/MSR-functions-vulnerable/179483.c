FUN1(VAR1 *VAR2, spnego_gss_ctx_id_t VAR3,
		  OM_uint32 VAR4, gss_OID VAR5,
		  VAR6 *VAR7, VAR6 *VAR8,
		  VAR1 *VAR9, VAR10 *VAR11)
{
 	OM_uint32 VAR12;
 	size_t VAR13;
 

	FUN2(&VAR12, &VAR3->VAR14);
 	FUN3(&VAR12, &VAR3->VAR15,
 			       VAR16);
 
	
	for (VAR13 = 0; VAR13 < VAR3->VAR17->VAR18; VAR13++) {
		if (FUN4(VAR5, &VAR3->VAR17->VAR19[VAR13]))
			break;
	}
	if (VAR13 == VAR3->VAR17->VAR18)
		return VAR20;
	VAR3->VAR14 = &VAR3->VAR17->VAR19[VAR13];

	
	if (VAR4 != VAR21)
		return VAR20;

	VAR3->VAR22 = 0;
	VAR3->VAR23 = 1;
	*VAR9 = VAR21;
	*VAR11 = VAR24;
	return VAR25;
}