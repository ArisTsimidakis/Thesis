static void FUN1(VAR1 *VAR2,

                         const VAR3 *VAR4,

                         vpx_codec_pts_t VAR5,

                         unsigned int VAR6,

                         vpx_enc_frame_flags_t VAR7,

                         unsigned int VAR8,

                         VAR9 *VAR10) {
















   vpx_codec_iter_t VAR11 = NULL;
   const VAR12 *VAR13 = NULL;
   const vpx_codec_err_t VAR14 = FUN2(VAR2, VAR4, VAR5, VAR6, VAR7,
                                               VAR8);
 if (VAR14 != VAR15)

     FUN3(VAR2, "");
 
   while ((VAR13 = FUN4(VAR2, &VAR11)) != NULL) {


     if (VAR13->VAR16 == VAR17) {
       const int VAR18 = (VAR13->VAR19.VAR20.VAR7 & VAR21) != 0;
 
 if (!FUN5(VAR10, VAR13->VAR19.VAR20.VAR22,
                                                VAR13->VAR19.VAR20.VAR23,
                                                VAR13->VAR19.VAR20.VAR5))
        FUN3(VAR2, "");
      printf(VAR18 ? "" : "");

       FUN6(VAR24);
     }
   }
















































































































































 }