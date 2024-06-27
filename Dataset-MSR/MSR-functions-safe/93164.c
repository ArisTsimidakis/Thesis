static inline VAR1 FUN1(const struct VAR2* VAR3, u_int VAR4)
{
	u_int VAR5;

	if (FUN2(VAR3) == 0)
		return VAR4;
	VAR5 = (VAR3->VAR6 + FUN2(VAR3) - 1) * sizeof(VAR7);
	return (VAR5 > VAR4)? VAR4 : VAR5;
}