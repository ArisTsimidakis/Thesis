status_t VAR1::FUN1(int VAR2, const VAR3<VAR4>& VAR5) {
 String8 VAR6;
 if (FUN2(FUN3("")) == false) {
        VAR6.FUN4(""
 "",
                FUN5(),
                FUN6());
        write(VAR2, VAR6.FUN7(), VAR6.FUN8());
 } else {
 bool VAR7 = FUN9(VAR8);
 
 if (!VAR7) {
            VAR6.FUN10("");
            write(VAR2, VAR6.FUN7(), VAR6.FUN8());
 }

 bool VAR9 = false;
 if (!VAR10) {
            VAR6 = VAR11::FUN11("");
            write(VAR2, VAR6.FUN7(), VAR6.FUN8());
 return VAR12;
 }

        VAR6 = VAR11::FUN11("",
                VAR10->VAR13.VAR14);
        VAR6.FUN4("",
                VAR10->VAR13.VAR15);
        VAR6.FUN4("",
                VAR10->VAR13.VAR16);
        VAR6.FUN4("",
                VAR10->VAR13.VAR17);
        VAR6.FUN4("", VAR18);
        write(VAR2, VAR6.FUN7(), VAR6.FUN8());
 for (int VAR19 = 0; VAR19 < VAR18; VAR19++) {
            VAR6 = VAR11::FUN11("", VAR19);
            camera_info VAR20;

 status_t VAR21 = VAR10->FUN12(VAR19, &VAR20);
 if (VAR21 != VAR22) {
                VAR6.FUN4("");
                write(VAR2, VAR6.FUN7(), VAR6.FUN8());
 } else {
                VAR6.FUN4("",
                        VAR20.VAR23 == VAR24 ? "" : "");
                VAR6.FUN4("", VAR20.VAR25);
 int VAR26;
 if (VAR10->VAR13.VAR15 <
                        VAR27) {
                    VAR26 = VAR28;
 } else {
                    VAR26 = VAR20.VAR29;
 }
                VAR6.FUN4("", VAR26);
 if (VAR26 >= VAR30) {
                    VAR6.FUN4("");
                    write(VAR2, VAR6.FUN7(), VAR6.FUN8());
                    FUN13(VAR20.VAR31,
                            VAR2, 2, 4);
 } else {
                    write(VAR2, VAR6.FUN7(), VAR6.FUN8());
 }
 }

            VAR32<VAR33> VAR34 = VAR35[VAR19].FUN14();
 if (VAR34 == 0) {
                VAR6 = VAR11::FUN11("");
                write(VAR2, VAR6.FUN7(), VAR6.FUN8());
 continue;
 }

             VAR9 = true;
             VAR6 = VAR11::FUN11("");
             write(VAR2, VAR6.FUN7(), VAR6.FUN8());

            VAR34->FUN1(VAR2, VAR5);


         }
         if (!VAR9) {
             VAR6 = VAR11::FUN11("");
            write(VAR2, VAR6.FUN7(), VAR6.FUN8());
 }

 if (VAR7) VAR8.FUN15();

 
        write(VAR2, "", 1);
        VAR36::VAR37::FUN1(VAR2, VAR5);

 
 int VAR38 = VAR5.FUN8();
 for (int VAR19 = 0; VAR19 + 1 < VAR38; VAR19++) {
 VAR4 FUN16("");
 if (VAR5[VAR19] == VAR39) {
 VAR11 FUN17(VAR5[VAR19+1]);
 int VAR40 = FUN18(VAR41.FUN7());
                VAR6 = VAR11::FUN11("", VAR40);
                FUN19(VAR40);
                write(VAR2, VAR6.FUN7(), VAR6.FUN8());
 }
 }

 }
 return VAR12;
}