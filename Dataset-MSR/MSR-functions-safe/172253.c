static VAR1 FUN1(VAR2 *VAR3, jclass VAR4, jint VAR5){

 VAR6 FUN2(VAR3);
    wifi_interface_handle VAR7 = FUN3(VAR8, VAR4, VAR5);
 

 if (VAR7 == NULL) {
        FUN4("");
 return false;
 }

    wifi_firmware_memory_dump_handler VAR9;
    VAR9.VAR10 = VAR10;
 int VAR11 = VAR12.FUN5(VAR7, VAR9);
 return VAR11 == VAR13;

}