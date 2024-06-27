void VAR1::FUN1(
    VAR2::NativeViewId VAR3) {
  HWND VAR4 = reinterpret_cast<VAR5>(VAR3);

  
  
  wchar_t VAR6[VAR7 + 1] = {0};
  if (!FUN2(VAR4) ||
      !FUN3(VAR4, VAR6, FUN4(VAR6)) ||
      FUN5(VAR6, VAR8) != 0) {
    return;
  }

#if FUN6(VAR9)
  FUN7(VAR4,
            reinterpret_cast<VAR5>(VAR10->FUN8()));
#else
  FUN7(VAR4, reinterpret_cast<VAR5>(FUN9()));
#endif
  VAR11.FUN10(VAR4);
}