static void FUN1(short *VAR1, const int *const *VAR2, unsigned VAR3, unsigned VAR4)


 {
     for (unsigned VAR5 = 0; VAR5 < VAR3; ++VAR5) {
         for (unsigned VAR6 = 0; VAR6 < VAR4; ++VAR6) {
 *VAR1++ = VAR2[VAR6][VAR5] << 8;
 }
 }
}