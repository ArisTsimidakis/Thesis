void VAR1::FUN1(VAR2 *VAR3, VAR4 *VAR5) {
  GfxRGB VAR6;

#ifdef VAR7
  if (VAR8 != NULL && VAR9 == VAR10) {
    Guchar VAR11[VAR12];
    double VAR13[VAR12];
    double VAR14, VAR15, VAR16;
    
    FUN2(VAR3,&VAR14,&VAR15,&VAR16);
    VAR13[0] = FUN3(VAR14);
    VAR13[1] = FUN3(VAR15);
    VAR13[2] = FUN3(VAR16);
    VAR8->FUN4(VAR13,VAR11,1);
    *VAR5 = FUN5(VAR11[0]);
    return;
  }
#endif
  FUN6(VAR3, &VAR6);
  *VAR5 = FUN3((VAR17)(0.299 * VAR6.VAR18 +
				0.587 * VAR6.VAR19 +
				0.114 * VAR6.VAR20 + 0.5));
}