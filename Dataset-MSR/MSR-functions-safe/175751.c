static VAR1 FUN1(const VAR2 *VAR3, size_t VAR4, uint8_t VAR5) {

 if (VAR5 == 0x00 || VAR5 == 0x03) {
 
 return FUN2((const char *)VAR3, VAR4) + 1;
 }

 
 size_t VAR6 = 0;
 while ((VAR6+1 < VAR4) && (VAR3[VAR6] != '' || VAR3[VAR6 + 1] != '')) {
        VAR6 += 2;
 }
    VAR6 += 2;
 return VAR6;
}