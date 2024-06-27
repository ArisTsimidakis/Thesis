FUN1(krb5_context VAR1,
		     krb5_principal VAR2,
		     krb5_pk_init_ctx VAR3,
		     struct VAR4 *VAR5)
{
    hx509_certs VAR6 = FUN2(VAR5);
    VAR7 *VAR8 = NULL;
    int VAR9;

    if (VAR3->VAR10->VAR5)
	FUN3(&VAR3->VAR10->VAR5);
    if (VAR3->VAR10->VAR11) {
	FUN4(VAR3->VAR10->VAR11);
	VAR3->VAR10->VAR11 = NULL;
    }

    VAR3->VAR10->VAR5 = VAR6;
    VAR3->VAR12 = 0;

    VAR9 = FUN5(VAR1->VAR13, &VAR8);
    if (VAR9) {
	FUN6(VAR1, VAR1->VAR13, VAR9,
		      "");
	return VAR9;
    }

    FUN7(VAR8, VAR14);
    FUN7(VAR8, VAR15);

    if (VAR2 && FUN8("", FUN9(VAR1, VAR2), 9) == 0) {
	VAR3->VAR10->VAR16 |= VAR17;
    }

    VAR9 = FUN10(VAR1, VAR3->VAR10, VAR8, &VAR3->VAR10->VAR11);
    FUN11(VAR1->VAR13, VAR8);

    if (VAR9 == 0 && FUN12(VAR1, 2)) {
	hx509_name VAR18;
	char *VAR19, *VAR20;
	heim_integer VAR21;

	VAR9 = FUN13(VAR3->VAR10->VAR11, &VAR18);
	if (VAR9)
	    goto VAR22;

	VAR9 = FUN14(VAR18, &VAR19);
	FUN15(&VAR18);
	if (VAR9)
	    goto VAR22;

	VAR9 = FUN16(VAR3->VAR10->VAR11, &VAR21);
	if (VAR9) {
	    free(VAR19);
	    goto VAR22;
	}

	VAR9 = FUN17(&VAR21, &VAR20);
	FUN18(&VAR21);
	if (VAR9) {
	    free(VAR18);
	    goto VAR22;
	}

	FUN19(VAR1, 2, "", VAR19, VAR20);
	free(VAR19);
	free(VAR20);
    }
 VAR22:

    return VAR9;
}