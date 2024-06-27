static int FUN1(struct VAR1 *VAR2, int VAR3)
{
	const struct VAR4 *VAR5 = VAR2->VAR6;
	struct packet_command VAR7;
	struct modesel_head VAR8;

	memset(&VAR8, 0, sizeof(VAR8));
	VAR8.VAR9 = 0x08;
	VAR8.VAR10 = (VAR3 >> 8) & 0xff;
	VAR8.VAR11 = VAR3 & 0xff;

	memset(&VAR7, 0, sizeof(VAR7));
	VAR7.VAR12[0] = 0x15;
	VAR7.VAR12[1] = 1 << 4;
	VAR7.VAR12[4] = 12;
	VAR7.VAR13 = sizeof(VAR8);
	VAR7.VAR14 = (char *) &VAR8;
	VAR7.VAR15 = VAR16;
	VAR8.VAR9 = 0x08;
	VAR8.VAR10 = (VAR3 >> 8) & 0xff;
	VAR8.VAR11 = VAR3 & 0xff;

	return VAR5->FUN2(VAR2, &VAR7);
}