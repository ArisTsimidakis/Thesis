FUN1(void)
{
#ifdef VAR1
	return FUN2();
#else

#ifdef VAR2
	if (FUN3() != FUN4())
		return 1;
#endif
#ifdef VAR3
	if (FUN5() != FUN6())
		return 1;
#endif
	return 0;
#endif
}