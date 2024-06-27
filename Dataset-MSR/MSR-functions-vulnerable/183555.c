bool FUN1(HANDLE VAR1, VAR2::VAR3* VAR4) {
   NtQueryObjectFunction VAR5 = NULL;
   FUN2("", &VAR5);
 

  VAR6* VAR7 = NULL;

  ULONG VAR8 = 0;






   
   NTSTATUS VAR9 = FUN3(VAR1, VAR10, VAR7, VAR8,
                                   &VAR8);

  VAR11<VAR6> VAR12;
  if (VAR8) {
    VAR7 = reinterpret_cast<VAR6*>(new VAR13[VAR8]);
    VAR12.FUN4(VAR7);

    
    
    VAR9 = FUN3(VAR1, VAR10, VAR7, VAR8, &VAR8);
  }

  if (VAR14 != VAR9)
    return false;

  VAR4->FUN5(VAR7->VAR15.VAR16, VAR7->VAR15.VAR17 /
                                        sizeof(VAR7->VAR15.VAR16[0]));
  return true;
}