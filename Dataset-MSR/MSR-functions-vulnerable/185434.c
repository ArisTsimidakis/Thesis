bool VAR1::FUN1(VAR2* VAR3,
                                 VAR4::VAR5<VAR6::VAR7>* VAR8) {
  FUN2(VAR3 && VAR8);
  if (!FUN3(VAR3))
     return false;
 
   STGMEDIUM VAR9;

  if (!FUN4(VAR3, VAR10::FUN5(), &VAR9))

    return false;




































 

  HDROP VAR11 = static_cast<VAR12>(FUN6(VAR9.VAR13));

  if (!VAR11)

    return false;




















 

  const int VAR14 = 4096;

  const unsigned VAR15 = FUN7(VAR11, 0xffffffff, 0, 0);

  for (unsigned int VAR16 = 0; VAR16 < VAR15; ++VAR16) {

    wchar_t VAR17[VAR14];

    if (!FUN7(VAR11, VAR16, VAR17, VAR14))

      continue;

    VAR8->FUN8(VAR17);


















   }
 

  FUN9(VAR11);

  FUN10(VAR9.VAR13);

  

  

  return true;


 }