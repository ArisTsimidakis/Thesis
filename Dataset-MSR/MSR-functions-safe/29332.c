int FUN1(struct VAR1 *VAR1, enum kvm_bus VAR2, gpa_t VAR3,
		    int VAR4, void *VAR5)
{
	struct VAR6 *VAR7;
	struct kvm_io_range VAR8;
	int VAR9;

	VAR8 = (struct VAR10) {
		.VAR3 = VAR3,
		.VAR4 = VAR4,
	};

	VAR7 = FUN2(VAR1->VAR11[VAR2], &VAR1->VAR12);
	VAR9 = FUN3(VAR7, &VAR8, VAR5);
	return VAR9 < 0 ? VAR9 : 0;
}