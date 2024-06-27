int VAR1::FUN1() {
  const VAR2 *VAR3;

  if (VAR4 == 0) {
    VAR5 = VAR6->FUN2() & 0xff;
    VAR4 = 8;
    ++VAR7;
    VAR3 = &VAR8[(VAR5 >> 1) & 0x7f];
  } else if (VAR4 == 8) {
    VAR3 = &VAR8[(VAR5 >> 1) & 0x7f];
  } else {
    VAR3 = &VAR8[(VAR5 << (7 - VAR4)) & 0x7f];
    if (VAR3->VAR9 < 0 || VAR3->VAR9 > (int)VAR4) {
      VAR5 = (VAR5 << 8) | (VAR6->FUN2() & 0xff);
      VAR4 += 8;
      ++VAR7;
      VAR3 = &VAR8[(VAR5 >> (VAR4 - 7)) & 0x7f];
    }
  }
  if (VAR3->VAR9 < 0) {
    FUN3(VAR10, VAR6->FUN4(), "");
    return VAR11;
  }
  VAR4 -= VAR3->VAR9;
  return VAR3->VAR12;
}