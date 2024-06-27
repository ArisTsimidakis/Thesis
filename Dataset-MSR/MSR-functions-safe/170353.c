size_t VAR1::FUN1() {
 status_t VAR2;
 if ((VAR2 = FUN2()) != VAR3) {
        FUN3("");
 return 0;
 }

 size_t VAR4 = 0;
 VAR5 *VAR6 = VAR7;
 while (VAR6) {
 ++VAR4;
        VAR6 = VAR6->VAR8;
 }

    FUN3("", VAR4);
 return VAR4;
}