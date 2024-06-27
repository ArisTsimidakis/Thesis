int main(int argc, char *argv[])
{
    char VAR1[1024];
    int VAR2, VAR3, VAR4;
    if (argc < 2) {
        fprintf(VAR5,
                ""
                ""
                "", argv[0], argv[0], argv[0]);
        return 1;
    }
    VAR2 = FUN1(argv[1]);
    if (VAR2 < 0) {
        FUN2("");
        FUN3(VAR6);
    }
    while ((VAR3 = read(0, VAR1, sizeof (VAR1))) != 0) {
        if (VAR3 < 0) {
            if (VAR7 == VAR8)
                continue;
            FUN2("");
            FUN3(VAR6);
        }
        VAR4 = write(VAR2, VAR1, VAR3);
        if (VAR4 < 0) {
            FUN2("");
             FUN3(VAR6);
         }
     }


     return 0;
 }