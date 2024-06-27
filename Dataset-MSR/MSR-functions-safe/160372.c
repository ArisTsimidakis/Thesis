VAR1::FUN1(Address VAR2,
                                       size_t VAR3,
                                       VAR4& VAR5,
                                       VAR4& VAR6) {
  for (size_t VAR7 = sizeof(VAR8); VAR7 < VAR3; VAR7++) {
    if (VAR2[VAR7] == VAR9)
      VAR5++;
    else if (VAR2[VAR7] == VAR10)
      VAR6++;
    else
      FUN2();
  }
}