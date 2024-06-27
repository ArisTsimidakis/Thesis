FUN1 (void)
{
   char VAR1[64];
   size_t VAR2;
   VAR3 *VAR4;
   int VAR5;
   bson_error_t VAR6;

   for (VAR5 = 1; VAR5 <= 38; VAR5++) {
      FUN2 (VAR1, sizeof VAR1, "", VAR5);
      VAR4 = FUN3 (VAR1);
      FUN4 (FUN5 (VAR4, VAR7, &VAR2));
      FUN6 (VAR4);
   }

   VAR4 = FUN3 ("");
   FUN4 (FUN5 (VAR4, VAR7, &VAR2));
   FUN6 (VAR4);

   VAR4 = FUN3 ("");
   FUN4 (FUN5 (VAR4,
                               VAR7 | VAR8 |
                                  VAR9 |
                                  VAR10,
                               &VAR2));
   FUN6 (VAR4);

#VAR11 FUN7(VAR12, VAR13, VAR14, VAR15, VAR16)     \
   VAR4 = FUN3 (VAR12);                                       \
   FUN4 (!FUN5 (VAR4, VAR13, &VAR2));              \
   FUN8 (VAR2, ==, (VAR17) VAR14);                \
   FUN4 (!FUN9 (VAR4, VAR13, &VAR6));    \
   FUN10 (VAR6, VAR18, VAR15, VAR16); \
   FUN6 (VAR4)

   FUN7 ("",
                  VAR7,
                  9,
                  VAR7,
                  "");
   FUN7 ("",
                  VAR7,
                  14,
                  VAR7,
                  "");
   FUN7 ("",
                  VAR9 | VAR10,
                  4,
                  VAR9,
                  ""$\""$VAR19\"");
   FUN7 ("",
                  VAR9 | VAR10,
                  4,
                  VAR10,
                  "".\""VAR20.VAR21\"");
   FUN7 ("",
                  VAR7,
                  9,
                  VAR7,
                  "");
   
   FUN7 ("",
                  VAR8,
                  9,
                  VAR7,
                  "");
   FUN7 ("",
                  VAR7,
                  9,
                  VAR7,
                  "");
   FUN7 ("",
                  VAR22,
                  4,
                  VAR22,
                  "");
   FUN7 (
      "", VAR7, 6, VAR7, "");
   FUN7 (
      "", VAR7, 6, VAR7, "");
   FUN7 (
      "", VAR7, 6, VAR7, "");
   FUN7 (
      "", VAR7, 6, VAR7, "");
   FUN7 (
      "", VAR7, 6, VAR7, "");
   FUN7 (
      "", VAR7, 6, VAR7, "");
   FUN7 (
      "", VAR7, 6, VAR7, "");
   FUN7 (
      "", VAR7, 6, VAR7, "");
   FUN7 (
      "", VAR7, 6, VAR7, "");
   FUN7 (
      "", VAR7, 6, VAR7, "");
   FUN7 ("",
                  VAR7,
                  10,
                  VAR7,
                  "");
   FUN7 ("",
                  VAR7,
                  10,
                  VAR7,
                  "");
   FUN7 (
      "", VAR7, 9, VAR7, "");
   FUN7 (
      "", VAR7, 6, VAR7, "");
   FUN7 ("",
                  VAR7,
                   12,
                   VAR7,
                   "");










 
    
    VAR4 = FUN11 ("",
                 "",
                 "",
                 FUN12 (""),
                 "",
                 FUN13 (1),
                 "");
   FUN4 (FUN9 (VAR4, VAR7, &VAR6));
   FUN4 (
      FUN9 (VAR4, VAR9, &VAR6));
   FUN6 (VAR4);

   
   VAR4 = FUN11 ("", "", "", FUN13 (1), "");
   FUN4 (FUN9 (VAR4, VAR7, &VAR6));
   FUN4 (
      !FUN9 (VAR4, VAR9, &VAR6));
   FUN10 (VAR6,
                          VAR18,
                          VAR9,
                          ""$\""$VAR23\"");
   FUN6 (VAR4);

   
   VAR4 = FUN11 ("",
                 "",
                 "",
                 FUN12 (""),
                 "",
                 FUN12 (""),
                 "");
   FUN4 (FUN9 (VAR4, VAR7, &VAR6));
   FUN4 (
      !FUN9 (VAR4, VAR9, &VAR6));
   FUN10 (VAR6,
                          VAR18,
                          VAR9,
                          ""$\""$VAR24\"");
   FUN6 (VAR4);

   
   VAR4 = FUN11 ("",
                 "",
                 "",
                 FUN12 (""),
                 "",
                 FUN13 (2),
                 "",
                 FUN13 (1),
                 "");
   FUN4 (FUN9 (VAR4, VAR7, &VAR6));
   FUN4 (
      !FUN9 (VAR4, VAR9, &VAR6));
   FUN10 (VAR6,
                          VAR18,
                          VAR9,
                          ""VAR25\"");
   FUN6 (VAR4);

#undef VAR26
}