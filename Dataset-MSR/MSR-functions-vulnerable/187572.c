VAR1<VAR2> VAR3::FUN1(int64_t VAR4, int VAR5)
{
    FUN2("", VAR4, VAR5);
 VAR6::VAR7 FUN3(VAR8);
 VAR6::VAR7 FUN4(VAR9);
    VAR10.FUN5();
 if (VAR11 == NULL) {
        FUN6("");
 return NULL;
 }
 VAR12 *VAR13 = VAR11->FUN1(VAR4, VAR5);
 if (VAR13 == NULL) {
        FUN6("");
 return NULL;
 }
 size_t VAR14 = sizeof(VAR12) + VAR13->VAR15;
    VAR1<VAR16> VAR17 = new FUN7(VAR14, 0, "");
 if (VAR17 == NULL) {
        FUN6("");
 delete VAR13;
 return NULL;
 }
    VAR10 = new FUN8(VAR17, 0, VAR14);
 if (VAR10 == NULL) {
        FUN6("", VAR14);
 delete VAR13;
 return NULL;
 }
 VAR12 *VAR18 = static_cast<VAR12 *>(VAR10->FUN9());
    VAR18->VAR19 = VAR13->VAR19;
    VAR18->VAR20 = VAR13->VAR20;
    VAR18->VAR21 = VAR13->VAR21;
    VAR18->VAR22 = VAR13->VAR22;
    VAR18->VAR15 = VAR13->VAR15;
    VAR18->VAR23 = VAR13->VAR23;

     FUN2("", VAR18->VAR23);
     VAR18->VAR24 = (VAR25 *)VAR18 + sizeof(VAR12);
     memcpy(VAR18->VAR24, VAR13->VAR24, VAR13->VAR15);


     delete VAR13;  
     return VAR10;
 }