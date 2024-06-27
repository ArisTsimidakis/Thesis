int FUN1 (VAR1 *VAR2, void *VAR3, void *VAR4){
 int VAR5 = 0;
 int32_t VAR6;
 int32_t VAR7;
 int32_t VAR8;
 VAR9 *VAR10 = (VAR9 *)VAR3;
 int32_t VAR11 = *VAR10++;


 
 switch (VAR11) {
 case VAR12:
        VAR6 = (VAR9)(*(VAR13 *)VAR4);

 
 if ((VAR6 >= FUN2())||(VAR6 < 0)) {
            VAR5 = -VAR14;
 break;
 }
 FUN3(VAR2, VAR6);
 break;
 case VAR15:

         VAR7 =  *VAR10;
         VAR8 = (VAR9)(*(VAR16 *)VAR4);
         

        if (VAR7 >= VAR17) {


             VAR5 = -VAR14;








             break;
         }
         FUN4(VAR2, VAR7, VAR8);
 break;
 case VAR18: {
 
 VAR16 *VAR19 = (VAR16 *)VAR4;
 if ((int)VAR19[0] >= FUN2()) {
            VAR5 = -VAR14;
 break;
 }
 if (VAR19[0] >= 0) {
 FUN3(VAR2, (int)VAR19[0]);
 } else {
 if ((int)VAR19[1] != VAR17) {
                VAR5 = -VAR14;
 break;
 }
 for (int VAR20 = 0; VAR20 < VAR17; VAR20++) {
 FUN4(VAR2, VAR20, (int)VAR19[2 + VAR20]);
 }
 }
 } break;
 default:
        FUN5("", VAR11);
        VAR5 = -VAR14;
 break;
 }

 
 return VAR5;
}