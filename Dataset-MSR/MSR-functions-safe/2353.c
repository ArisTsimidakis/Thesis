bool FUN1(struct VAR1 *VAR2)
{
	if ( ! VAR2 || VAR2->VAR3) return false;
	if (VAR2->VAR4 && (VAR2->VAR4[0] == '')) return true;
	return VAR2->VAR5 != 0;
}