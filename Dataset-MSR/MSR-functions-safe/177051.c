VAR1::CropSettingsMode VAR2::FUN1(
 const VAR3& VAR4) {
 if (!VAR4.VAR5) {
 return VAR6;
 }

 const VAR7& VAR8 = VAR4.VAR9;
 if (VAR10 == VAR8.VAR11 &&
        VAR12 == VAR8.VAR13 &&
        VAR14 == VAR8.VAR15 &&
        VAR16 == VAR8.VAR17) {
 return VAR18;
 }

    VAR10 = VAR8.VAR11;
    VAR12 = VAR8.VAR13;
    VAR14 = VAR8.VAR15;
    VAR16 = VAR8.VAR17;
 return VAR19;
}