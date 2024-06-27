FUN1(krb5_context VAR1, VAR2 *VAR3, VAR4 *VAR5,
           VAR6 *VAR7, VAR8 *VAR9,
           krb5_kdcpreauth_callbacks VAR10, krb5_kdcpreauth_rock VAR11,
           krb5_kdcpreauth_moddata VAR12,
           krb5_kdcpreauth_verify_respond_fn VAR13, void *VAR14)
{
    VAR15 *VAR16 = NULL;
    VAR17 *VAR18 = NULL;
    struct VAR19 *VAR20;
    krb5_error_code VAR21;
     krb5_data VAR22, VAR23;
     char *VAR24;
 

    VAR7->VAR25 |= VAR26;


     
     VAR16 = VAR10->FUN2(VAR1, VAR11);
     if (VAR16 == NULL) {
        VAR21 = VAR27;
        FUN3("", VAR21, "");
        goto VAR28;
    }

    
    VAR22 = FUN4(VAR9->VAR29, VAR9->VAR30);
    VAR21 = FUN5(&VAR22, &VAR18);
    if (VAR21 != 0) {
        FUN3("", VAR21, "");
        goto VAR28;
    }

    
    VAR21 = FUN6(VAR1, VAR16, VAR18, &VAR23);
    if (VAR21 != 0) {
        FUN3("", VAR21, "");
        goto VAR28;
    }

    
    VAR21 = FUN7(VAR1, VAR16, &VAR23);
    if (VAR21 != 0)
        VAR21 = FUN8(VAR1, &VAR23);
    FUN9(VAR1, &VAR23);
    if (VAR21 != 0) {
        FUN3("", VAR21, "");
         goto VAR28;
     }
 

    




     VAR20 = FUN10(sizeof(struct VAR19), &VAR21);
     if (VAR20 == NULL)
         goto VAR28;
     VAR20->VAR14 = VAR14;
     VAR20->VAR13 = VAR13;


 
     
     VAR21 = VAR10->FUN11(VAR1, VAR11, "", &VAR24);
    if (VAR21 == 0 && VAR24 == NULL)
        VAR21 = VAR31;
    if (VAR21 != 0) {
        free(VAR20);
        goto VAR28;
    }

    
    FUN12((VAR32 *)VAR12, VAR10->FUN13(VAR1, VAR11),
                     VAR5->VAR33, VAR24, VAR18, VAR34, VAR20);
    VAR10->FUN14(VAR1, VAR11, VAR24);

    FUN15(VAR1, VAR18);
    return;

VAR28:
    FUN15(VAR1, VAR18);
    (*VAR13)(VAR14, VAR21, NULL, NULL, NULL);
}