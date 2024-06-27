void VAR1::FUN1(
     VAR2::VAR3* VAR4,
     VAR2::ScopedClosureRunner VAR5,
     VAR6::ScopedSharedBufferHandle VAR7) {

  size_t VAR8 = 0;

  bool VAR9 = false;
   if (!VAR7.FUN2())
     return;
   auto VAR10 = VAR6::FUN3(VAR11::move(VAR7), VAR4,

                                               &VAR8, &VAR9);


   FUN4(VAR10, VAR12);
 }