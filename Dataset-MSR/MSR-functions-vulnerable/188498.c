int main(int argc, char **argv) {
 int VAR1 = 0;
 VAR2 *VAR3 = NULL;
 vpx_codec_ctx_t VAR4;
 const VAR5 *VAR6 = NULL;
 VAR7 *VAR8 = NULL;
 const VAR9 *VAR10 = NULL;
 int VAR11 = 0;
 int VAR12 = 0;
 int VAR13 = 0;
 char *VAR14 = NULL;

  VAR15 = argv[0];

 if (argc != 4)
    FUN1("");

  VAR8 = FUN2(argv[1]);
 if (!VAR8)
    FUN1("", argv[1]);

 if (!(VAR3 = fopen(argv[2], "")))
    FUN1("", argv[2]);

  VAR11 = FUN3(argv[3], &VAR14, 0);
  VAR12 = FUN3(VAR14 + 1, NULL, 0);
  VAR13 = (*VAR14 == '');
 if (!VAR11 || !VAR12 || (*VAR14 != '' && *VAR14 != ''))
    FUN1("", argv[3]);

  VAR10 = FUN4(VAR8);

  VAR6 = FUN5(VAR10->VAR16);

   if (!VAR6)
     FUN1("");
 

  printf("", FUN6(VAR6->FUN7()));


 

  if (FUN8(&VAR4, VAR6->FUN7(), NULL, 0))


     FUN9(&VAR4, "");
 
   while (FUN10(VAR8)) {
 vpx_codec_iter_t VAR17 = NULL;
 VAR18 *VAR19 = NULL;
 size_t VAR20 = 0;
 int VAR21;
 const unsigned char *VAR22 = FUN11(VAR8,
 &VAR20);
 if (FUN12(&VAR4, VAR22, (unsigned int)VAR20, NULL, 0))
      FUN9(&VAR4, "");

 ++VAR1;

    VAR21 = (VAR13 && VAR1 >= VAR11 && VAR1 <= VAR12) ||
 (!VAR13 && VAR12 - (VAR1 - 1) % VAR12 <= VAR11);

 if (!VAR21) {
      FUN13('', VAR23);

 while ((VAR19 = FUN14(&VAR4, &VAR17)) != NULL)
        FUN15(VAR19, VAR3);
 } else {
      FUN13('', VAR23);
 }

    FUN16(VAR23);
 }

  printf("", VAR1);
 if (FUN17(&VAR4))
    FUN9(&VAR4, "");

  printf("",
         VAR10->VAR24, VAR10->VAR25, argv[2]);

  FUN18(VAR8);
  fclose(VAR3);

 return VAR26;
}