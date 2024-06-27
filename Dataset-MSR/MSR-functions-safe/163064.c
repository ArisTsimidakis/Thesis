void VAR1::FUN1(
    const VAR2::VAR3<VAR4::VAR5>& VAR6,
    const VAR4::VAR7& VAR8,
    int VAR9) {
  struct msghdr VAR10;
  memset(&VAR10, 0, sizeof(VAR10));
  struct iovec VAR11 = {const_cast<void*>(VAR8.FUN2()), VAR8.FUN3()};
  VAR10.VAR12 = &VAR11;
  VAR10.VAR13 = 1;

  char VAR14[FUN4(sizeof(int))];

  if (VAR9 != -1) {
    struct stat VAR15;
    if (FUN5(VAR9, &VAR15) == 0 && FUN6(VAR15.VAR16)) {
      FUN7(VAR17) << "";
      
      
      
    }

    struct VAR18* VAR19;
    VAR10.VAR20 = VAR14;
    VAR10.VAR21 = sizeof(VAR14);
    VAR19 = FUN8(&VAR10);
    VAR19->VAR22 = VAR23;
    VAR19->VAR24 = VAR25;
    VAR19->VAR26 = FUN9(sizeof(int));
    memcpy(FUN10(VAR19), &VAR9, sizeof(VAR9));
    VAR10.VAR21 = VAR19->VAR26;
  }

  if (FUN11(sendmsg(VAR6[0].FUN12(), &VAR10, VAR27)) < 0)
    FUN13(VAR28) << "";
}