static VAR1 FUN1(struct VAR2 *VAR3,
				      struct VAR4 *VAR5,
				      char *VAR6)
{
	struct VAR7 *VAR8 = FUN2(VAR3);
	struct ipmi_device_id VAR9;
	int VAR10;

	VAR10 = FUN3(NULL, VAR8, &VAR9, NULL, NULL);
	if (VAR10)
		return VAR10;

	return snprintf(VAR6, 20, "", VAR9.VAR11,
			VAR9.VAR12);
}