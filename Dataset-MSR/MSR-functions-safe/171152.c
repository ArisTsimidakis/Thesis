status_t VAR1::VAR2::FUN1(int VAR3, const VAR4<VAR5>& VAR6)
{
 const size_t VAR7 = 256;
 char VAR8[VAR7];
 String8 VAR9;
    VAR9.FUN2("");
    snprintf(VAR8, 255, "",
            VAR10, VAR11, VAR12, VAR13?"": "");
    VAR9.FUN2(VAR8);
    write(VAR3, VAR9.FUN3(), VAR9.FUN4());
 if (VAR14 != NULL) {
        VAR14->FUN1(VAR3, VAR6);
 }
 if (VAR15 != 0) {
        VAR15->FUN1(VAR3, VAR6);
 }
    write(VAR3, "", 1);
 return VAR16;
}