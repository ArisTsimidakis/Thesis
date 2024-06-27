void VAR1::FUN1(
    VAR2::VAR3* VAR4,
    int VAR5,
    int VAR6,
    const VAR2::VAR7& VAR8,
    float VAR9,
    const VAR10& VAR11,
    const VAR12& VAR13) {
  VAR14::VAR15 FUN2(VAR4, true);
  VAR4->FUN3(1 / VAR9, 1 / VAR9);

  VAR2::VAR16 FUN4(VAR11.VAR17 + VAR11.VAR18 +
                               VAR11.VAR19,
                           VAR11.VAR20 + VAR11.VAR21 +
                               VAR11.VAR22);

  VAR2::VAR23* VAR24 = VAR2::VAR23::FUN5(
      nullptr, VAR2::VAR25::VAR26::VAR27);
  VAR24->FUN6()->FUN7(true);

  class HeaderAndFooterClient final : public VAR2::VAR28 {
   public:
    
    void FUN8(VAR2::VAR7* VAR29) override { VAR30 = VAR29; }
    void FUN9(DetachType VAR31) override {
      VAR30->FUN10()->FUN11();
      VAR30->FUN11();
      VAR30 = nullptr;
    }

   private:
    VAR2::VAR7* VAR30;
  };
  HeaderAndFooterClient VAR32;
  VAR2::VAR7* VAR29 = VAR2::VAR7::FUN12(
      VAR24, &VAR32, nullptr, nullptr);
  VAR2::WebWidgetClient VAR33;
  VAR2::VAR34::FUN5(&VAR33, VAR29);

  VAR35::VAR36 FUN13(VAR35::FUN14(
      VAR37::VAR38::FUN15().FUN16(
          VAR39)));
  
  FUN17(VAR29, VAR40, VAR41);

  auto VAR42 = VAR35::VAR43<VAR35::VAR44>();
  VAR42->FUN18(VAR45, VAR35::VAR46::FUN19().FUN20());
  VAR42->FUN18("", VAR47.VAR48);
  VAR42->FUN18("", VAR47.VAR49);
  VAR42->FUN18("", VAR11.VAR20);
  VAR42->FUN18("", VAR11.VAR21);
  VAR42->FUN21("", VAR5);
  VAR42->FUN21("", VAR6);
   VAR42->FUN22("", VAR13.VAR50);
   VAR35::string16 VAR51 = VAR8.FUN23().FUN24().FUN25();
   VAR42->FUN22("", VAR51.FUN26() ? VAR13.VAR51 : VAR51);




 
   FUN17(VAR29, VAR52, *VAR42);
 
  VAR2::VAR53 FUN27(VAR47);
  VAR54.VAR55 = FUN28(&VAR13);

  VAR29->FUN29(VAR54);
  VAR29->FUN30(0, VAR4);
  VAR29->FUN31();

  VAR24->FUN11();
}