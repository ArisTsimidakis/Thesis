int FUN1(effect_handle_t VAR1, uint32_t VAR2, uint32_t VAR3,
 void *VAR4, VAR5 *VAR6, void *VAR7)
{

 VAR8 * VAR9 = (VAR8 *)VAR1;
 int VAR10;
 int VAR11 = 0;

    pthread_mutex_lock(&VAR12);

 if (!FUN2(VAR9)) {
        VAR11 = -VAR13;
 goto VAR14;
 }

 if (VAR9 == NULL || VAR9->VAR15 == VAR16) {
        VAR11 = -VAR13;
 goto VAR14;
 }

 switch (VAR2) {
 case VAR17:
 if (VAR7 == NULL || *VAR6 != sizeof(int)) {
            VAR11 = -VAR18;
 goto VAR14;
 }
 if (VAR9->VAR19.VAR20)
 *(int *) VAR7 = VAR9->VAR19.FUN3(VAR9);
 else
 *(int *) VAR7 = 0;
 break;
 case VAR21:
 if (VAR4 == NULL || VAR3 != sizeof(VAR22)
 || VAR7 == NULL || *VAR6 != sizeof(int)) {
            VAR11 = -VAR18;
 goto VAR14;
 }
 *(int *) VAR7 = FUN4(VAR9, (VAR22 *) VAR4);
 break;
 case VAR23:
 if (VAR7 == NULL ||
 *VAR6 != sizeof(VAR22)) {
            VAR11 = -VAR18;
 goto VAR14;
 }
 if (!VAR9->VAR24) {
            VAR11 = -VAR18;
 goto VAR14;
 }

        FUN5(VAR9, (VAR22 *)VAR7);
 break;
 case VAR25:
 if (VAR9->VAR19.VAR26)
            VAR9->VAR19.FUN6(VAR9);
 break;
 case VAR27:
 if (VAR7 == NULL || *VAR6 != sizeof(int)) {
            VAR11 = -VAR18;
 goto VAR14;
 }
 if (VAR9->VAR15 != VAR28) {
            VAR11 = -VAR13;
 goto VAR14;
 }
        VAR9->VAR15 = VAR29;
 if (VAR9->VAR19.VAR30)
            VAR9->VAR19.FUN7(VAR9);
        FUN8("", VAR31);
 *(int *)VAR7 = 0;
 break;
 case VAR32:
 if (VAR7 == NULL || *VAR6 != sizeof(int)) {
            VAR11 = -VAR18;
 goto VAR14;
 }
 if (VAR9->VAR15 != VAR29) {
            VAR11 = -VAR13;
 goto VAR14;
 }
        VAR9->VAR15 = VAR28;
 if (VAR9->VAR19.VAR33)
            VAR9->VAR19.FUN9(VAR9);
        FUN8("", VAR31);
 *(int *)VAR7 = 0;
 break;
 case VAR34: {

         if (VAR4 == NULL ||
             VAR3 < (int)(sizeof(VAR35) + sizeof(VAR5)) ||
             VAR7 == NULL ||

            *VAR6 < (int)(sizeof(VAR35) + sizeof(VAR5) +

                               sizeof(VAR36))) {






             VAR11 = -VAR18;
             FUN8("",
                   VAR3, *VAR6);
 goto VAR14;
 }
 if (!VAR9->VAR24) {
            VAR11 = -VAR18;
 goto VAR14;
 }
 VAR35 *VAR37 = (VAR35 *)VAR4;
        memcpy(VAR7, VAR4, sizeof(VAR35) + VAR37->VAR38);
 VAR35 *VAR39 = (VAR35 *)VAR7;
 if (VAR9->VAR19.VAR40)
            VAR9->VAR19.FUN10(VAR9, VAR39, VAR6);
 } break;
 case VAR41: {
 if (VAR4 == NULL ||
            VAR3 < (int)(sizeof(VAR35) + sizeof(VAR5) +
 sizeof(VAR36)) ||
            VAR7 == NULL || *VAR6 != sizeof(VAR42)) {
            VAR11 = -VAR18;
            FUN8("",
                  VAR3, *VAR6);
 goto VAR14;
 }
 *(VAR42 *)VAR7 = 0;
 VAR35 *VAR39 = (VAR35 *)VAR4;
 if (VAR9->VAR19.VAR43)
 *(VAR42 *)VAR7 = VAR9->VAR19.FUN11(VAR9, VAR39,
 *VAR6);

 } break;
 case VAR44: {
 uint32_t VAR45;
        FUN8("");
 if (VAR4 == NULL || VAR3 < sizeof(VAR5)) {
            VAR11 = -VAR18;
            FUN8("", VAR3);
 goto VAR14;
 }
        VAR45 = *(VAR5 *)VAR4;
 if (VAR9->VAR19.VAR46)
            VAR9->VAR19.FUN12(VAR9, VAR45);
 } break;
 case VAR47:
 case VAR48:
 break;

 case VAR49: {
 VAR50 *VAR51;

 if (VAR3 != sizeof(VAR52) || VAR4 == NULL
 || VAR7 == NULL || *VAR6 != sizeof(int)) {
            FUN8("", VAR31);
            VAR11 = -VAR18;
 break;
 }

 VAR52* VAR53 = (VAR52*)VAR4;

        FUN8("", VAR31,
              VAR53->VAR54, VAR53->VAR55);

 *(int *)VAR7 = 0;

        VAR9->VAR24 = VAR53->VAR54;
 if (VAR9->VAR56 == VAR53->VAR55)
 break;

        VAR51 = FUN13(VAR9->VAR56);
 if (VAR51 != NULL)
            FUN14(VAR51, VAR9);

        VAR9->VAR56 = VAR53->VAR55;
        VAR51 = FUN13(VAR9->VAR56);
 if (VAR51 != NULL)
            FUN15(VAR51, VAR9);

 } break;


 default:
 if (VAR2 >= VAR57 && VAR9->VAR19.VAR58)
            VAR11 = VAR9->VAR19.FUN16(VAR9, VAR2, VAR3,
                                          VAR4, VAR6, VAR7);
 else {
            FUN17("", VAR31, VAR2);
            VAR11 = -VAR18;
 }
 break;
 }

VAR14:
    pthread_mutex_unlock(&VAR12);

 return VAR11;
}