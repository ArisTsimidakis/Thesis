static void FUN1(struct VAR1 *VAR2, u16 VAR3)




 {
 	struct VAR4 *VAR5;
 	struct VAR6 *VAR6;
	pending_ring_idx_t VAR7;

	
	if (VAR2->VAR8[VAR3] == NULL)
		return;

	VAR6 = &VAR2->VAR6[VAR3];
 
 	VAR5 = VAR6->VAR5;
 

	FUN2(VAR5, &VAR6->VAR9, VAR10);


 
 	VAR7 = FUN3(VAR2->VAR11++);
 	VAR2->VAR12[VAR7] = VAR3;

	FUN4(VAR5);

	VAR2->VAR8[VAR3]->VAR13 = 0;
	FUN5(VAR2->VAR8[VAR3]);
	VAR2->VAR8[VAR3] = NULL;
}