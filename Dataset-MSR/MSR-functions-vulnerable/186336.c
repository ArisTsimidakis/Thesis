void VAR1::FUN1(

    const VAR2& VAR3,


     const VAR4::VAR5::VAR6& VAR7) {

  GURL VAR8 = VAR3.FUN2();

  if (!VAR8.FUN3())


     return;
 
   auto VAR9 = VAR10.FUN4(VAR8);
  if (VAR9 == VAR10.FUN5()) {
    OriginRequestSummary VAR11;
    VAR11.VAR8 = VAR8;
    VAR11.VAR12 = VAR10.FUN6();
    VAR9 = VAR10.FUN7({VAR8, VAR11}).VAR13;
  }

  VAR9->VAR14.VAR15 |= VAR7->VAR15;
  VAR9->VAR14.VAR16 |= VAR7->VAR17;
}