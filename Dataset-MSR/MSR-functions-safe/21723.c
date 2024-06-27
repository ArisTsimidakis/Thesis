static VAR1 FUN1(struct VAR2 *VAR3)
{
	u32 VAR4 = FUN2(VAR3);

	return VAR3->VAR5 ? (VAR4 << 12) | 0xfff : VAR4;
}