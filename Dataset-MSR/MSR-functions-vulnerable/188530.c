void FUN1(const VAR1 *VAR2,
 const unsigned int VAR3,
 const VAR4 *VAR5,
 const VAR4 *VAR6,
 VAR1 *VAR7,

                                 unsigned int VAR8,
                                 unsigned int VAR9,
                                 unsigned int VAR10) {

  uint8_t VAR11[64 * 64];


 

  assert(VAR9 <= 64);

  assert(VAR10 <= 64);




   FUN2(VAR2, VAR3, VAR5, VAR6, VAR11, 64,
                      VAR9, VAR10);
   FUN3(VAR11, 64, VAR7, VAR8,
                     VAR9, VAR10);
 }