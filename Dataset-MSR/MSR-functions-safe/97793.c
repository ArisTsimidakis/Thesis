FUN1(xmlXPathParserContextPtr VAR1, int VAR2) {
  xmlXPathObjectPtr VAR3;
  xmlXPathObjectPtr VAR4;
  xmlBufferPtr VAR5;
  const VAR6 *VAR7;
  int VAR8;

  FUN2(2);
  VAR9;
  VAR4 = FUN3(VAR1);
  VAR9;
  VAR3 = FUN3(VAR1);

  VAR5 = FUN4();
  if (VAR5) {
    VAR7 = FUN5(VAR3->VAR10, VAR4->VAR10);
    if (VAR7) {
      VAR8 = (int)(VAR7 - VAR3->VAR10);
      FUN6(VAR5, VAR3->VAR10, VAR8);
    }
    FUN7(VAR1, FUN8(VAR1->VAR11,
	FUN9(VAR5)));
    FUN10(VAR5);
  }
  FUN11(VAR1->VAR11, VAR3);
  FUN11(VAR1->VAR11, VAR4);
}