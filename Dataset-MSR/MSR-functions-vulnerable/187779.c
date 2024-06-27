static VAR1 *FUN1(UINT16 VAR2, VAR3 *VAR4)
 {

    VAR1* VAR5 = FUN2((VAR6) (VAR2 + VAR7 + sizeof(VAR1)));












 
     if (VAR5) {
         VAR3* VAR8;

        VAR5->VAR2 = VAR2;
        VAR5->VAR9 = VAR7;

        VAR8 = (VAR3*) (VAR5 + 1) + VAR5->VAR9;
        memcpy(VAR8, VAR4, VAR2);
 }
 return VAR5;
}