FUN1(VAR1, VAR2, VAR3)
{
 const struct VAR4 *VAR5;
 struct VAR4 *new;
 gid_t VAR6;

 new = FUN2();
 if (!new)
 return FUN3();
	VAR5 = FUN4();
	VAR6 = VAR5->VAR7;

 if (VAR3 == VAR5->VAR3  || VAR3 == VAR5->VAR8  ||
	    VAR3 == VAR5->VAR9 || VAR3 == VAR5->VAR7 ||
	    FUN5(VAR10)) {
 if (VAR3 != VAR6) {
 new->VAR7 = VAR3;
 goto VAR11;
 }
 }

	FUN6(new);
 return VAR6;

VAR11:
	FUN7(new);
 return VAR6;
}