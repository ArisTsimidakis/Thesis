VAR1::VAR2 FUN1(const unsigned char* VAR3,
                                          size_t VAR4,
                                          char VAR5,
                                          char VAR6) {
  static const char VAR7[] = "";

  
   
   VAR1::string VAR8;
   size_t VAR9 = 0U;








   VAR8.FUN2(VAR1::FUN3(VAR9, VAR4 * 3 - 1));
 
   for (size_t VAR10 = 0; VAR10 < VAR4; ++VAR10) {
    unsigned char VAR11 = VAR3[VAR10];
    VAR8.FUN4(VAR7[(VAR11 >> 4) & 0xf]);
    VAR8.FUN4(VAR7[VAR11 & 0xf]);
    if (VAR10 + 1 < VAR4) {
      if ((VAR10 + 1) % 16 == 0)
        VAR8.FUN4(VAR6);
      else
        VAR8.FUN4(VAR5);
    }
  }
  return VAR8;
}