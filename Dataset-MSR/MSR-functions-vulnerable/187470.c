static int FUN1(const char *VAR1)
{
 struct ifreq VAR2;
 int VAR3;

    VAR3 = socket(VAR4, VAR5, 0);
 if (VAR3 < 0)
 return -1;

    memset(&VAR2, 0, sizeof(VAR2));
    strncpy(VAR2.VAR6, VAR1, VAR7 - 1);

 
     VAR2.VAR8 &= ~VAR9;
 

    FUN2(VAR3, VAR10, (VAR11) &VAR2);


 
     close(VAR3);
 
 return 0;
}