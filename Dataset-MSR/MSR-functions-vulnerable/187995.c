static void FUN1 (int VAR1, short VAR2, void *VAR3) {
 int VAR4, VAR5;
 struct sockaddr_un VAR6;
 socklen_t VAR7 = sizeof (VAR6);

     int VAR8;
     unsigned int VAR9[6];
     const char *VAR10[1] = {""};

    char *VAR11[1];
     RIL_Dial VAR12;
     int VAR13[1] = {1};
     int VAR14;
     char **VAR15;
     RIL_SOCKET_ID VAR16 = VAR17;


     int VAR18 = 0;
 
     FUN2("", FUN3(VAR16));

    VAR4 = FUN4 (VAR1, (VAR19 *) &VAR6, &VAR7);

 if (VAR4 < 0) {
        FUN5 ("", VAR20);
 return;
 }

 if (recv(VAR4, &VAR14, sizeof(int), 0) != sizeof(int)) {
        FUN5 ("");
        close(VAR4);
 return;
 }

 if (VAR14 < 0) {
        FUN5 ("");
        close(VAR4);
 return;
 }

    VAR15 = (char **) calloc(VAR14, sizeof(char*));
 if (VAR15 == NULL) {
        FUN5("");
        close(VAR4);
 return;
 }

 for (int VAR21 = 0; VAR21 < VAR14; VAR21++) {
 int VAR22;
 if (recv(VAR4, &VAR22, sizeof(int), 0) != sizeof(int)) {
            FUN5 ("");
            FUN6(VAR21, VAR15);
            close(VAR4);
 return;
 }
 if (VAR22 == VAR23 || VAR22 < 0) {
            FUN5("");
            FUN6(VAR21, VAR15);
            close(VAR4);
 return;
 }

 
        VAR15[VAR21] = (char *) calloc(VAR22 + 1, sizeof(char));
 if (VAR15[VAR21] == NULL) {
            FUN5("");
            FUN6(VAR21, VAR15);
            close(VAR4);
 return;
 }
 if (recv(VAR4, VAR15[VAR21], sizeof(char) * VAR22, 0)
 != (int)sizeof(char) * VAR22) {
            FUN5 ("", VAR21);
            FUN6(VAR21, VAR15);
            close(VAR4);
 return;
 }
 char * VAR24 = VAR15[VAR21];
        VAR24[VAR22] = 0;
 if ((VAR21+1) == VAR14) {
 
            VAR18 = FUN7(VAR15[VAR21]);
 switch (VAR18) {
 case 0:
                    VAR16 = VAR17;
 break;
 #if (VAR25 >= 2)
 case 1:
                    VAR16 = VAR26;
 break;
 #endif
 #if (VAR25 >= 3)
 case 2:
                    VAR16 = VAR27;
 break;
 #endif
 #if (VAR25 >= 4)
 case 3:
                    VAR16 = VAR28;
 break;
 #endif
 default:
                    VAR16 = VAR17;
 break;
 }
 }
 }

 switch (FUN7(VAR15[0])) {
 case 0:
            FUN2 ("");
            FUN8(VAR29, NULL, 0, VAR16);
 break;
 case 1:
            FUN2 ("");
            VAR8 = 0;
            FUN8(VAR30, &VAR8, sizeof(int), VAR16);
 
 if (VAR16 == VAR17 && VAR31.VAR32 > 0) {
                close(VAR31.VAR32);
                VAR31.VAR32 = -1;
 }
 #if (VAR25 == 2)
 else if (VAR16 == VAR26 && VAR33.VAR32 > 0) {
                close(VAR33.VAR32);
                VAR33.VAR32 = -1;
 }
 #endif
 break;
 case 2:
            FUN2 ("");
            FUN9(VAR34, NULL, 0, VAR16);
 break;
 case 3:
            FUN2 ("");
            VAR9[0] = 65536; 
            VAR9[1] = 16; 
            VAR9[2] = 1; 
            VAR9[3] = 32; 
            VAR9[4] = 0; 
            VAR9[5] = 8; 
            FUN8(VAR35, VAR9,
 6 * sizeof(int), VAR16);
 break;
 case 4:
            FUN2 ("");
            VAR9[0] = 65536;
            VAR9[1] = 16;
            VAR9[2] = 0; 
            VAR9[3] = 32;
            VAR9[4] = 0;
            VAR9[5] = 8;
            FUN8(VAR35, VAR9,
 6 * sizeof(int), VAR16);
 break;
 case 5:
            FUN2("");
            VAR8 = 1;
            FUN8(VAR30, &VAR8, sizeof(int), VAR16);
            sleep(2);

             
             FUN8(VAR36, NULL, 0, VAR16);
             break;

        case 6:

            FUN2("", VAR15[1]);

            VAR11[0] = VAR15[1];

            FUN8(VAR37, &VAR11,

                              sizeof(VAR11), VAR16);

            break;
         case 7:
             FUN2("");
             FUN8(VAR38, &VAR10,
 sizeof(VAR10), VAR16);
 break;

         case 8:
             FUN2("");
             VAR12.VAR39 = 0;












             VAR12.VAR40 = VAR15[1];
             FUN8(VAR41, &VAR12, sizeof(VAR12), VAR16);
             break;
 case 9:
            FUN2("");
            FUN8(VAR42, NULL, 0, VAR16);
 break;
 case 10:
            FUN2("");
            FUN8(VAR43, &VAR13,
 sizeof(VAR13), VAR16);
 break;
 default:
            FUN5 ("");
 break;
 }
    FUN6(VAR14, VAR15);
    close(VAR4);
}