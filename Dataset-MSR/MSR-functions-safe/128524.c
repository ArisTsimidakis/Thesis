VAR1::~FUN1() {
  FUN2(!VAR2);
  VAR3::VAR4::FUN3()->FUN4()->FUN5(this);
  if (VAR5) {
    if (VAR6 != 1.0)
      VAR5->FUN6()->FUN7(VAR7::FUN8());
    VAR5->FUN9(nullptr);
    VAR5->FUN10(this);
  }
  if (VAR8)
    VAR8->FUN5(this);
  if (VAR9)
    FUN11(false );
  if (VAR10) {
    VAR3::VAR11::FUN12(VAR10->FUN13())->FUN5(this);
    VAR10->FUN13()->FUN5(this);
    if (VAR10->FUN14())
      VAR10->FUN15();
    VAR10->FUN16();
  }
}