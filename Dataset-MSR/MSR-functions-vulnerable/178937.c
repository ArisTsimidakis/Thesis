VAR1 FUN1(__be32 VAR2, __be32 VAR3, __be16 VAR4)

{

	struct VAR5 *VAR6 = FUN2();

	u32 VAR7[4];



	

	VAR7[0] = (__force VAR1)VAR2;

	VAR7[1] = (__force VAR1)VAR3;

	VAR7[2] = (__force VAR1)VAR4 ^ VAR6->VAR8[10];

	VAR7[3] = VAR6->VAR8[11];



	return FUN3(VAR7, VAR6->VAR8);

}