static bool FUN1(struct VAR1 *VAR2)
{
#ifdef VAR3
	return VAR2->VAR4 != NULL;
#else
	return false;
#endif
}