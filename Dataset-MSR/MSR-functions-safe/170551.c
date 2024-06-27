int FUN1(VAR1 *VAR2,
 void *VAR3,
 VAR4 *VAR5,
 void *VAR6){
 int VAR7 = 0;
 VAR8 *VAR9 = (VAR8 *)VAR3;
 int32_t VAR10 = *VAR9++;
 int32_t VAR11;
 char *VAR12;

 

 switch (VAR10){
 case VAR13:
 if (*VAR5 != sizeof(VAR4)){
                FUN2("", *VAR5);
 return -VAR14;
 }
 *VAR5 = sizeof(VAR4);
 break;
 case VAR15:
 if (*VAR5 != sizeof(VAR16)){
                FUN2("", *VAR5);
 return -VAR14;
 }
 *VAR5 = sizeof(VAR16);
 break;

 default:
            FUN2("", VAR10);
 return -VAR14;
 }

 switch (VAR10){
 case VAR13:
 *(VAR4 *)VAR6 = 1;

 
 
 break;

 case VAR15:
 *(VAR16 *)VAR6 = FUN3(VAR2);

 
 
 break;

 default:
            FUN2("", VAR10);
            VAR7 = -VAR14;
 break;
 }

 
 return VAR7;
}