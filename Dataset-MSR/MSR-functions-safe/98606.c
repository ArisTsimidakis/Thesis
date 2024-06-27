void FUN1(HDC VAR1, int VAR2, int VAR3, int VAR4, int VAR5,
                       int VAR6, int VAR7, int VAR8, int VAR9, void* VAR10,
                       const VAR11* VAR12) {
  
  
  
  int VAR13;
  int VAR14 = -VAR12->VAR15.VAR16;
  int VAR17 = VAR14 - VAR7 - VAR9;
  if (VAR17 == 0 && VAR6 == 0 && VAR9 != VAR14) {
    VAR13 = FUN2(VAR1,
                       VAR2, VAR5 + VAR3 - 1, VAR4, -VAR5,
                       VAR6, VAR14 - VAR7 + 1, VAR8, -VAR9,
                       VAR10, VAR12, VAR18, VAR19);
  } else {
    VAR13 = FUN2(VAR1,
                       VAR2, VAR3, VAR4, VAR5,
                       VAR6, VAR17, VAR8, VAR9,
                       VAR10, VAR12, VAR18, VAR19);
  }
  FUN3(VAR13 != VAR20);
}