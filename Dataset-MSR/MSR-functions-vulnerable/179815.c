FUN1(VAR1 *VAR2)


 {
     iakerb_ctx_id_t VAR3;
     krb5_error_code VAR4;

    *VAR2 = NULL;

    VAR3 = FUN2(sizeof(*VAR3), &VAR4);
    if (VAR3 == NULL)
        goto VAR5;
    VAR3->VAR6 = VAR7;
     VAR3->VAR8 = VAR9;
     VAR3->VAR10 = VAR11;
     VAR3->VAR12 = 0;




 
     VAR4 = FUN3(&VAR3->VAR13);
     if (VAR4 != 0)
        goto VAR5;

    *VAR2 = VAR3;

VAR5:
    if (VAR4 != 0)
        FUN4(VAR3);

    return VAR4;
}