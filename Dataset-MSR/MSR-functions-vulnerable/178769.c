FUN1(struct VAR1 *VAR2, void *VAR3,
		     struct VAR4 *VAR5)
{
	struct VAR6 *VAR7 = VAR3;
 	struct VAR8 *VAR9 = NULL;
 	int VAR10;
 

	if (VAR7->VAR11 < 1) {




 		FUN2("", VAR7->VAR11);
 		return -VAR12;
 	}

	VAR9 = FUN3(sizeof(*VAR9)*VAR7->VAR11,
			     VAR13 | VAR14 | VAR15);
	if (VAR9 == NULL)
		VAR9 = FUN4(sizeof(*VAR9),
					   VAR7->VAR11);
	if (VAR9 == NULL) {
		FUN2("",
			  VAR7->VAR11);
		return -VAR16;
	}
	VAR10 = FUN5(VAR9,
			     (struct drm_i915_relocation_entry VAR17 *)
			     (VAR18) VAR7->VAR19,
			     sizeof(*VAR9) * VAR7->VAR11);
	if (VAR10 != 0) {
		FUN2("",
			  VAR7->VAR11, VAR10);
		FUN6(VAR9);
		return -VAR20;
	}

	VAR10 = FUN7(VAR2, VAR3, VAR5, VAR7, VAR9);
	if (!VAR10) {
		
		VAR10 = FUN8((struct drm_i915_relocation_entry VAR17 *)
				   (VAR18) VAR7->VAR19,
				   VAR9,
				   sizeof(*VAR9) * VAR7->VAR11);
		if (VAR10) {
			VAR10 = -VAR20;
			FUN2(""
				  "",
				  VAR7->VAR11, VAR10);
		}
	}

	FUN6(VAR9);
	return VAR10;
}