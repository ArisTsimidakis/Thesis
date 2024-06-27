VAR1::FUN1(size_t VAR2) {
  VAR3::ScopedSharedBufferHandle VAR4 =
      VAR3::VAR5::FUN2(VAR2);
  if (!VAR4.FUN3()) {
    FUN4(VAR6) << "";
    return nullptr;
  }
 
   VAR7::SharedMemoryHandle VAR8;
   size_t VAR9;

  bool VAR10;


   MojoResult VAR11 = VAR3::FUN5(

      VAR12::move(VAR4), &VAR8, &VAR9, &VAR10);


   if (VAR11 != VAR13) {
     FUN4(VAR6) << "";
     return nullptr;
   }
   FUN6(VAR9, VAR2);
 

  auto VAR14 = VAR12::VAR15<VAR7::VAR16>(VAR8, VAR10);






   if (!VAR14->FUN7(VAR2)) {
     FUN4(VAR6) << "";
     return nullptr;
  }

  return VAR14;
}