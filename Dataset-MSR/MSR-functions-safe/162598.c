static void FUN1(const VAR1* VAR2,
                         VAR3* VAR4) {
  static_assert(VAR5 ==
                    VAR6::VAR7<decltype(VAR4->VAR8)>(),
                "");
  static_assert(
      sizeof(VAR4->VAR9[0]) == sizeof(VAR2[0].VAR10),
      "");
  for (size_t VAR11 = 0; VAR11 < VAR5; VAR11++) {
    if (!VAR2[VAR11].VAR12)
      continue;
    VAR4->VAR8[VAR11] = 1;
    for (size_t VAR13 = 0; VAR13 < VAR14::FUN2(VAR2[VAR11].VAR10); VAR13++)
      VAR4->VAR9[VAR11][VAR13] = VAR2[VAR11].VAR10[VAR13];
  }
}