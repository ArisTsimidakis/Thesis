static bool FUN1(unsigned VAR1)
{
	switch (VAR1) {
	case 0x200 ... 0x200 + 2 * VAR2 - 1:
	case VAR3:
	case VAR4:
	case VAR5:
	case VAR6:
	case VAR7:
	case VAR8:
	case VAR9:
	case VAR10:
	case VAR11:
	case VAR12:
	case VAR13:
 	case VAR14:
 	case VAR15:
 		return true;

	case 0x2f8:

		return true;
 	}
 	return false;
 }