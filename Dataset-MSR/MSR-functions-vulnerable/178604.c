FUN1(ClientPtr VAR1)
{
    FUN2(VAR2);
    WindowPtr VAR3;
     xPanoramiXGetScreenSizeReply VAR4;
     int VAR5;
 




     if (VAR6->VAR7 >= VAR8)
         return VAR9;
 

    FUN3(VAR2);
     VAR5 = FUN4(&VAR3, VAR6->VAR10, VAR1, VAR11);
     if (VAR5 != VAR12)
         return VAR5;
    VAR4 = (VAR13) {
        .VAR14 = VAR15,
        .VAR16 = VAR1->VAR17,
        .VAR18 = 0,
    
        .VAR19 = VAR20.VAR21[VAR6->VAR7]->VAR19,
        .VAR22 = VAR20.VAR21[VAR6->VAR7]->VAR22,
        .VAR10 = VAR6->VAR10,
        .VAR7 = VAR6->VAR7
    };
    if (VAR1->VAR23) {
        FUN5(&VAR4.VAR16);
        FUN6(&VAR4.VAR18);
        FUN6(&VAR4.VAR19);
        FUN6(&VAR4.VAR22);
        FUN6(&VAR4.VAR10);
        FUN6(&VAR4.VAR7);
    }
    FUN7(VAR1, sizeof(VAR13), &VAR4);
    return VAR12;
}