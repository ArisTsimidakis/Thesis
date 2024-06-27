void VAR1::FUN1() {
 ivd_ctl_getversioninfo_ip_t VAR2;
 ivd_ctl_getversioninfo_op_t VAR3;
    UWORD8 VAR4[512];
    IV_API_CALL_STATUS_T VAR5;

    VAR2.VAR6 = VAR7;
    VAR2.VAR8 = VAR9;
    VAR2.VAR10 = sizeof(VAR11);
    VAR3.VAR10 = sizeof(VAR12);
    VAR2.VAR13 = VAR4;
    VAR2.VAR14 = sizeof(VAR4);

    VAR5 = FUN2(VAR15, (void *)&VAR2, (void *)&VAR3);

 if (VAR5 != VAR16) {
        FUN3("",
                VAR3.VAR17);
 } else {
        FUN4("",
 (char *)VAR2.VAR13);
 }
 return;
}