FUN1(krb5_context VAR1,
	       const char *VAR2,
	       const VAR3 *VAR4,
	       struct VAR5 *VAR6,
	       struct VAR7 *VAR8)
{
    krb5_error_code VAR9 = 0;

    if (VAR6->VAR10) {
	VAR9 = FUN2(VAR1->VAR11, VAR8->VAR12,
				   &VAR13, 0);
	if (VAR9) {
	    FUN3(VAR1, VAR9,
				   FUN4("", ""));
	    return VAR9;
	}
    }
    if (VAR6->VAR14) {
	hx509_octet_string_list VAR15;
	size_t VAR16;
	int VAR17 = 0;

	VAR9 = FUN5(VAR1->VAR11,
						       VAR8->VAR12,
						       &VAR18,
						       &VAR15);
	if (VAR9) {
	    FUN3(VAR1, VAR9,
				   FUN4(""
				      ""
				      "", ""));

	    return VAR9;
	}

	
	for (VAR16 = 0; VAR17 == 0 && VAR16 < VAR15.VAR19; VAR16++) {
	    KRB5PrincipalName VAR20;

	    VAR9 = FUN6(VAR15.VAR21[VAR16].VAR22,
					   VAR15.VAR21[VAR16].VAR23,
					   &VAR20,
					   NULL);
	    if (VAR9) {
		FUN3(VAR1, VAR9,
				       FUN4(""
					  ""
					  "", ""));

		break;
	    }

	    if (VAR20.VAR24.VAR25.VAR19 == 2 &&
		strcmp(VAR20.VAR24.VAR25.VAR21[0], VAR26) == 0
		&& strcmp(VAR20.VAR24.VAR25.VAR21[1], VAR2) == 0
		&& strcmp(VAR20.VAR2, VAR2) == 0)
		VAR17 = 1;

	    FUN7(&VAR20);
	}
	FUN8(&VAR15);
	if (VAR17 == 0) {
	    VAR9 = VAR27;
	    
	    FUN3(VAR1, VAR9,
				   FUN4(""
				      "", ""));
	}
    }
    if (VAR9)
	return VAR9;

    if (VAR4) {
	VAR9 = FUN9(VAR1->VAR11, VAR8->VAR12,
				    VAR6->VAR28,
				    VAR29,
				    VAR4->VAR30,
				    VAR4->VAR31->VAR32, VAR4->VAR31->VAR33);

	if (VAR9)
	    FUN3(VAR1, VAR9,
				   FUN4(""
				      "", ""));
    }
    return VAR9;
}