VAR1::string VAR2::FUN1(
    int VAR3,
    int VAR4,
    int VAR5,
    const VAR6& VAR7,
    const VAR8::VAR9& VAR10,
    MediaAccessRequestCallback VAR11) {
  FUN2(VAR12::VAR13);

  VAR14* VAR15 = new FUN3(
      VAR3, VAR4, VAR5, VAR10,
      false,  
      VAR16, VAR7, VAR1::FUN4());

  const VAR1::VAR17& VAR18 = FUN5(VAR15);

  VAR15->VAR19 = VAR1::move(VAR11);
  
  
  
  
  
  VAR12::FUN6(VAR12::VAR13, VAR20,
                          VAR21::FUN7(&VAR2::VAR22,
                                         VAR21::FUN8(this), VAR18));
  return VAR18;
}