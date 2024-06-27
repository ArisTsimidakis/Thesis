static inline void FUN1(void)
{
#ifdef VAR1
	int VAR2 = FUN2();

	
	if ((FUN3(VAR2) && !FUN4()) || FUN5(VAR2)) {
		if (!FUN6())
			FUN7();
	}
#endif
}