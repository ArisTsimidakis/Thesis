VAR1 FUN1(HDC VAR2, int VAR3, int VAR4, int VAR5) {
  BITMAPV5HEADER VAR6 = {0};
  FUN2(&VAR6, sizeof(VAR7));

  
  VAR6.VAR8 = sizeof(VAR9);
  VAR6.VAR10 = VAR3;
  VAR6.VAR11 = -VAR4;  
  VAR6.VAR12 = 1;
  VAR6.VAR13 = VAR5;
  VAR6.VAR14 = VAR15;  
  VAR6.VAR16 = 0;
  VAR6.VAR17 = 1;
  VAR6.VAR18 = 1;
  VAR6.VAR19 = 0;
  VAR6.VAR20 = 0;

  if (VAR21::FUN3()) {
    VAR6.VAR22 = VAR23;
    VAR6.VAR24 = VAR25;
  }

  void* VAR26 = NULL;
  HANDLE VAR27 = FUN4(VAR2, reinterpret_cast<VAR28*>(&VAR6),
                                0, &VAR26, NULL, 0);
  FUN5(VAR26);
  return VAR27;
}