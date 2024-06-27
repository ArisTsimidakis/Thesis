int FUN1(struct VAR1 *VAR2,
			struct VAR3 *VAR4)
{
	struct scatterlist VAR5;
	int VAR6;

	__sum16 VAR7 = VAR4->VAR8;
	VAR4->VAR8 = 0;
	
	FUN2(&VAR5, VAR4, sizeof(struct VAR3));
	VAR6 = FUN3(&VAR2->VAR9, &VAR5, sizeof(struct VAR3));
	VAR4->VAR8 = VAR7;
	return VAR6;
}