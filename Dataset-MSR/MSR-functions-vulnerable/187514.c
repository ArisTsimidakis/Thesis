static bool FUN1(hci_packet_t VAR1, const void *VAR2, size_t VAR3) {
 int VAR4 = socket(VAR5, VAR6, VAR7);
 if (VAR4 == VAR8)
 goto VAR9;

 struct sockaddr_in VAR10;

   VAR10.VAR11 = VAR5;
   VAR10.VAR12.VAR13 = FUN2(0x7F000001);
   VAR10.VAR14 = FUN3(8873);

  if (connect(VAR4, (const struct VAR15 *)&VAR10, sizeof(VAR10)) == -1)


     goto VAR9;
 

  if (send(VAR4, &VAR1, 1, 0) != 1)


     goto VAR9;
 

  if (send(VAR4, &VAR3, 2, 0) != 2)


     goto VAR9;
 

  if (send(VAR4, VAR2, VAR3, 0) != (VAR16)VAR3)


     goto VAR9;
 
   close(VAR4);
 return true;

VAR9:;
  close(VAR4);
 return false;
}