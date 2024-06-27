int FUN1(char *VAR1)
{
 struct uinput_dev VAR2;
 int VAR3, VAR4 = 0;

 
     for(VAR4=0; VAR4 < VAR5; VAR4++)
     {

        VAR3 = open(VAR6[VAR4], VAR7);


         if (VAR3 < 0)
             continue;
         break;
 }
 if (VAR4 == VAR5) {
        FUN2("", VAR8);
 return -1;
 }
    memset(&VAR2, 0, sizeof(VAR2));
 if (VAR1)
        strncpy(VAR2.VAR1, VAR1, VAR9-1);

    VAR2.VAR10.VAR11 = VAR12;
    VAR2.VAR10.VAR13  = 0x0000;

     VAR2.VAR10.VAR14 = 0x0000;
     VAR2.VAR10.VAR15 = 0x0000;
 

    if (write(VAR3, &VAR2, sizeof(VAR2)) < 0) {


         FUN2("", VAR8);
         close(VAR3);
         return -1;
     }
 

    FUN3(VAR3, VAR16, VAR17);

    FUN3(VAR3, VAR16, VAR18);

    FUN3(VAR3, VAR16, VAR19);






 
     for (VAR4 = 0; VAR20[VAR4].VAR1 != NULL; VAR4++)

        FUN3(VAR3, VAR21, VAR20[VAR4].VAR22);


 

    if (FUN3(VAR3, VAR23, NULL) < 0) {


         FUN2("", VAR8);
         close(VAR3);
         return -1;
 }
 return VAR3;
}