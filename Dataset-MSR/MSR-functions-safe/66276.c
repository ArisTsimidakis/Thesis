FUN1(int) FUN2(int VAR1)
{
	switch(VAR1) {
#if VAR2 == 1
	case VAR3:
#endif
#if VAR4 == 1
	case VAR5:
#endif
#if VAR6 == 1
	case VAR7:
#endif
	case VAR8:
	case VAR9:
	case VAR10:
	case VAR11:
	case VAR12:
	case VAR13:
	case VAR14:
	case VAR15:
		return 1;
	}
	return 0;
}