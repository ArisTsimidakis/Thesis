FUN1 (VAR1,
                        VAR2,
                        VAR3,
                        VAR4,
                        VAR5,
                        VAR6,
                        VAR7,
                        VAR8,
                        VAR9,
                        VAR10,
                        VAR11)

VAR12 *		VAR1;
VAR13 *		VAR2;
gss_cred_id_t		VAR3;
gss_buffer_t		VAR4;
gss_channel_bindings_t	VAR5;
VAR14 *		VAR6;
VAR15 *		VAR7;
gss_buffer_t		VAR8;
VAR12 *		VAR9;
VAR12 *		VAR10;
VAR16 *		VAR11;

{
    OM_uint32		VAR17, VAR18, VAR19;
    OM_uint32		VAR20 = 0;
    gss_union_ctx_id_t	VAR21 = NULL;
    gss_cred_id_t	VAR22 = VAR23;
    gss_cred_id_t	VAR24 = VAR23;
    gss_name_t		VAR25 = VAR26;
    gss_name_t		VAR27 = VAR26;
    gss_OID_desc	VAR28;
    gss_OID		VAR29 = &VAR28;
    gss_OID		VAR30 = VAR31;
    gss_OID		VAR32 = VAR31;
    gss_OID		VAR33;
    gss_mechanism	VAR34 = NULL;
    gss_union_cred_t	VAR35;
    int			VAR36;

    VAR17 = FUN2(VAR1,
				  VAR2,
				  VAR3,
				  VAR4,
				  VAR5,
				  VAR6,
				  VAR7,
				  VAR8,
				  VAR9,
				  VAR10,
				  VAR11);
    if (VAR17 != VAR37)
	return (VAR17);

    

    if(*VAR2 == VAR38) {

	if (VAR4 == VAR39)
	    return (VAR40);

	
	VAR17 = FUN3(VAR29, VAR4);
	if (VAR17)
	    return VAR17;

	
	if (VAR3 != VAR23) {
	    VAR35 = (VAR41)VAR3;
	    for (VAR36 = 0; VAR36 < VAR35->VAR42; VAR36++) {
		VAR33 = FUN4(&VAR35->VAR43[VAR36]);
		if (VAR33 && FUN5(VAR29, VAR33)) {
		    VAR32 = &VAR35->VAR43[VAR36];
		    break;
		}
	    }
	}

	if (VAR32 == VAR31) {
	    VAR17 = FUN6(VAR1, VAR29,
					     &VAR32);
	    if (VAR17)
		return VAR17;
	}

     } else {
 	VAR21 = (VAR44)*VAR2;
 	VAR32 = VAR21->VAR7;




     }
 
     
    if (*VAR2 == VAR38) {
	VAR17 = VAR45;
	VAR21 = (VAR44)
	    malloc(sizeof(VAR46));
	if (!VAR21)
	    return (VAR45);

	VAR21->VAR47 = VAR21;
	VAR21->VAR48 = VAR38;
	VAR17 = FUN7(&VAR19, VAR32,
				      &VAR21->VAR7);
	if (VAR17 != VAR37) {
 	    free(VAR21);
 	    return (VAR17);
 	}



	

	*VAR2 = (VAR13)VAR21;
     }
 
     
    if (VAR3 != VAR23) {
	VAR22 =
	    FUN8((VAR41)VAR3,
				      VAR32);
	if (VAR22 == VAR23) {
	    
	    VAR17 = VAR49;
	    goto VAR50;
	}
    } else if (!FUN9(VAR32)) {
	VAR17 = VAR49;
	goto VAR50;
    }

    

    VAR34 = FUN10(VAR32);
    if (VAR34 && VAR34->VAR51) {

	    VAR17 = VAR34->FUN1(VAR1,
						  &VAR21->VAR48,
						  VAR22,
						  VAR4,
						  VAR5,
						  VAR6 ? &VAR25 : NULL,
						  &VAR30,
						  VAR8,
						  &VAR20,
						  VAR10,
 					VAR11 ? &VAR24 : NULL);
 
 	    

	    if (VAR17 == VAR52)




 		return VAR52;


 
 	    
 	    if (VAR17 != VAR37) {
		FUN11(VAR1, VAR34);
		goto VAR50;
	    }

	    
	    if (VAR6 != NULL) {
		if (VAR25 != VAR26) {
		    
		    VAR18 = FUN12(
			    &VAR19, VAR34,
			    VAR25, &VAR27);
		    if (VAR18 != VAR37) {
			VAR17 = VAR18;
			*VAR1 = VAR19;
			FUN11(VAR1, VAR34);
			if (VAR8->VAR53)
			    (void) FUN13(&VAR19,
						      VAR8);
			goto VAR50;
		    }
		    *VAR6 = VAR27;
		} else
		    *VAR6 = VAR26;
	    }

#VAR54 FUN14(VAR55, VAR56) \
        (((VAR55)->VAR53 >= (VAR56)->VAR53) && \
        (memcmp((VAR55)->VAR57, (VAR56)->VAR57, (VAR56)->VAR53) == 0))

	    
	    if ((VAR20 & VAR58) &&
		VAR24 != VAR23) {
		VAR33 = FUN4(VAR32);
		if (VAR30 != VAR31 &&
		    VAR33 != VAR31 &&
		    !FUN14(VAR30, VAR33)) {
		    *VAR11 = VAR24; 
		} else {
		    gss_union_cred_t VAR59 = NULL;

		    VAR59 = malloc(sizeof (VAR60));
		    if (VAR59 == NULL) {
			VAR17 = VAR45;
			goto VAR50;
		    }
		    (void) memset(VAR59, 0, sizeof (VAR60));

		    VAR59->VAR42 = 1;

		    VAR17 = FUN7(&VAR19,
						  VAR32,
						  &VAR59->VAR43);

		    if (VAR17 != VAR37) {
			free(VAR59);
			goto VAR50;
		    }

		    VAR59->VAR61 = malloc(sizeof(VAR16));
		    if (VAR59->VAR61 != NULL) {
			VAR59->VAR61[0] = VAR24;
		    } else {
			free(VAR59);
			VAR17 = VAR45;
			goto VAR50;
		    }

		    VAR59->VAR47 = VAR59;
		    *VAR11 = (VAR16)VAR59;
		}
	    }

	    if (VAR7 != NULL)
 		*VAR7 = FUN4(VAR30);
 	    if (VAR9 != NULL)
 		*VAR9 = VAR20;

	    return	(VAR17);




     } else {
 
 	VAR17 = VAR62;
     }
 
 VAR50:

    if (VAR21) {
















 	if (VAR21->VAR7) {
 	    if (VAR21->VAR7->VAR57)
 		free(VAR21->VAR7->VAR57);
	    free(VAR21->VAR7);
	}
	if (VAR21->VAR48 && VAR34 &&
	    VAR34->VAR63) {
	    VAR34->FUN15(&VAR19,
					 &VAR21->VAR48,
 					 VAR39);
 	}
 	free(VAR21);

	*VAR2 = VAR38;
     }
 
     if (VAR6)
	*VAR6 = VAR26;

    if (VAR27 != VAR26)
	(void) FUN13(&VAR19,
				  (VAR64)VAR27);

    return (VAR17);
}