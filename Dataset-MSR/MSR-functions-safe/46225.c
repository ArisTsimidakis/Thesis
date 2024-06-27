FUN1(struct VAR1 *VAR2, const void *VAR3)
{
	const unsigned int *VAR4 = VAR3;

	if (FUN2(VAR2, VAR5, FUN3(*VAR4 / VAR6)))
		goto VAR7;

	return 0;

VAR7:
        return -VAR8;
}