static int FUN1(int argc, char **argv) {
 if (argc != 1) {
    printf("");
 return 1;
 }

 if (strcmp(argv[0], "") && strcmp(argv[0], "")) {
    printf("", argv[0]);
 return 2;
 }

 uint8_t VAR1[] = { 0x24, 0xFC, 0x01, 0x00 };
 if (argv[0][0] == '')
    VAR1[FUN2(VAR1) - 1] = 0x01;

 return !FUN3(VAR2, VAR1, FUN2(VAR1));
}