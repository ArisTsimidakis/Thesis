static void FUN1(int VAR1, unsigned long VAR2)
{
	switch (VAR1) {
	case 1:
		FUN2(VAR3, VAR2);
		break;
	case 2:
		FUN2(VAR4, VAR2);
		break;
	case 3:
		FUN2(VAR5, VAR2);
		break;
	case 4:
		FUN2(VAR6, VAR2);
		break;
	case 5:
		FUN2(VAR7, VAR2);
		break;
	case 6:
		FUN2(VAR8, VAR2);
		break;
#ifdef VAR9
	case 7:
		FUN2(VAR10, VAR2);
		break;
	case 8:
		FUN2(VAR11, VAR2);
		break;
#endif 
	default:
		FUN3(VAR12 "", VAR1);
	}
}