status_t VAR1::FUN1(
 uint32_t VAR2, const VAR3 &VAR4, VAR3 *VAR5, uint32_t VAR6) {
 switch (VAR2) {
 case VAR7:
 {
            FUN2(VAR8, VAR4, VAR5);
            VAR9::node_id VAR10 = VAR4.FUN3();
            VAR11::VAR12<VAR13> VAR14;
 status_t VAR15 = VAR16; 
 do {
 int VAR17 = VAR4.FUN3();
 if (VAR17 < 0) { 
 break;
 }
                omx_message VAR18;
                VAR18.VAR10 = VAR10;
                VAR18.VAR19 = VAR17 ? ::FUN4(VAR4.FUN5()) : -1;
                VAR18.VAR20 = (FUN6(VAR18.VAR20))VAR4.FUN3();
                VAR15 = VAR4.read(&VAR18.VAR21, sizeof(VAR18.VAR21));
                FUN7("", VAR18.VAR20, sizeof(VAR18));
                VAR14.FUN8(VAR18);
 } while (VAR15 == VAR22);

 if (VAR15 == VAR22) {
                FUN9(VAR14);
 }

 return VAR15;
 }

 default:
 return VAR23::FUN1(VAR2, VAR4, VAR5, VAR6);
 }
}