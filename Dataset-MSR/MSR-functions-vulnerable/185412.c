void VAR1::VAR2::FUN1(

    DWORD64 VAR3,

    DWORD64 VAR4,

    PRUNTIME_FUNCTION VAR5,

    VAR6* VAR7) {

#ifdef VAR8

  void* VAR9;

  ULONG64 VAR10;

  KNONVOLATILE_CONTEXT_POINTERS VAR11 = {};

  FUN2(0, VAR3, VAR4, VAR5,

                   VAR7, &VAR9, &VAR10, &VAR11);

#else

  FUN3();

#endif

}