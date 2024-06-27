status_t VAR1::FUN1(VAR2::VAR3<VAR2::VAR4>* VAR5) const {
 const int32_t VAR6 = FUN2();
 int32_t VAR7;
 status_t VAR8 = FUN3(&VAR7);
    VAR5->FUN4();

 if (VAR8 != VAR9 || VAR7 < 0) {
 return VAR8;
 }

    FUN5(VAR6);
    VAR5->FUN4(new (VAR2::VAR10) VAR2::FUN6());
 return FUN1(VAR5->FUN7());
}