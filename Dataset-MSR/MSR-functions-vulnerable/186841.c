void VAR1::FUN1(
    VAR2::ScopedSharedBufferHandle VAR3,
    VAR2::ScopedHandle socket) {
  FUN2(VAR4);
  FUN3(VAR5);
  FUN3(socket.FUN4());
  FUN3(VAR3.FUN4());

  VAR6::PlatformFile VAR7;
  auto VAR8 = VAR2::FUN5(VAR9::move(socket), &VAR7);
   FUN6(VAR8, VAR10);
 
   VAR6::SharedMemoryHandle VAR11;

  bool VAR12 = false;


   size_t VAR13 = 0;
   VAR8 = VAR2::FUN7(

      VAR9::move(VAR3), &VAR11, &VAR13, &VAR12);


   FUN6(VAR8, VAR10);

  FUN3(!VAR12);




 
   VAR5->FUN8(VAR11, VAR7);
 }