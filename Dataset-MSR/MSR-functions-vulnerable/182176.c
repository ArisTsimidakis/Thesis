static int FUN1(struct VAR1 *VAR2,
				      struct VAR3 *VAR4,
				      struct VAR5 *VAR6,
				      struct bpf_reg_state VAR7)
{
	struct VAR5 *VAR8 = FUN2(VAR2);
	u8 VAR9 = FUN3(VAR4->VAR10);
	bool VAR11, VAR12;
	s64 VAR13, VAR14;
 	u64 VAR15, VAR16;
 	u64 VAR17 = (FUN4(VAR4->VAR10) == VAR18) ? 64 : 32;
 


















 	VAR13 = VAR7.VAR19;
 	VAR14 = VAR7.VAR20;
 	VAR15 = VAR7.VAR21;
	VAR16 = VAR7.VAR22;
	VAR11 = FUN5(VAR7.VAR23);
	VAR12 = FUN5(VAR6->VAR23);

	if ((VAR11 && (VAR13 != VAR14 || VAR15 != VAR16)) ||
	    VAR13 > VAR14 || VAR15 > VAR16) {
		
		FUN6(VAR6);
		return 0;
	}

	if (!VAR11 &&
	    VAR9 != VAR24 && VAR9 != VAR25 && VAR9 != VAR26) {
		FUN6(VAR6);
		return 0;
	}

	switch (VAR9) {
	case VAR24:
		if (FUN7(VAR6->VAR19, VAR13) ||
		    FUN7(VAR6->VAR20, VAR14)) {
			VAR6->VAR19 = VAR27;
			VAR6->VAR20 = VAR28;
		} else {
			VAR6->VAR19 += VAR13;
			VAR6->VAR20 += VAR14;
		}
		if (VAR6->VAR21 + VAR15 < VAR15 ||
		    VAR6->VAR22 + VAR16 < VAR16) {
			VAR6->VAR21 = 0;
			VAR6->VAR22 = VAR29;
		} else {
			VAR6->VAR21 += VAR15;
			VAR6->VAR22 += VAR16;
		}
		VAR6->VAR23 = FUN8(VAR6->VAR23, VAR7.VAR23);
		break;
	case VAR25:
		if (FUN9(VAR6->VAR19, VAR14) ||
		    FUN9(VAR6->VAR20, VAR13)) {
			
			VAR6->VAR19 = VAR27;
			VAR6->VAR20 = VAR28;
		} else {
			VAR6->VAR19 -= VAR14;
			VAR6->VAR20 -= VAR13;
		}
		if (VAR6->VAR21 < VAR16) {
			
			VAR6->VAR21 = 0;
			VAR6->VAR22 = VAR29;
		} else {
			
			VAR6->VAR21 -= VAR16;
			VAR6->VAR22 -= VAR15;
		}
		VAR6->VAR23 = FUN10(VAR6->VAR23, VAR7.VAR23);
		break;
	case VAR30:
		VAR6->VAR23 = FUN11(VAR6->VAR23, VAR7.VAR23);
		if (VAR13 < 0 || VAR6->VAR19 < 0) {
			
			FUN12(VAR6);
			FUN13(VAR6);
			break;
		}
		
		if (VAR16 > VAR31 || VAR6->VAR22 > VAR31) {
			
			FUN12(VAR6);
			
			FUN13(VAR6);
			break;
		}
		VAR6->VAR21 *= VAR15;
		VAR6->VAR22 *= VAR16;
		if (VAR6->VAR22 > VAR28) {
			
			VAR6->VAR19 = VAR27;
			VAR6->VAR20 = VAR28;
		} else {
			VAR6->VAR19 = VAR6->VAR21;
			VAR6->VAR20 = VAR6->VAR22;
		}
		break;
	case VAR26:
		if (VAR11 && VAR12) {
			FUN14(VAR6, VAR6->VAR23.VAR32 &
						  VAR7.VAR23.VAR32);
			break;
		}
		
		VAR6->VAR23 = FUN15(VAR6->VAR23, VAR7.VAR23);
		VAR6->VAR21 = VAR6->VAR23.VAR32;
		VAR6->VAR22 = FUN16(VAR6->VAR22, VAR16);
		if (VAR6->VAR19 < 0 || VAR13 < 0) {
			
			VAR6->VAR19 = VAR27;
			VAR6->VAR20 = VAR28;
		} else {
			
			VAR6->VAR19 = VAR6->VAR21;
			VAR6->VAR20 = VAR6->VAR22;
		}
		
		FUN13(VAR6);
		break;
	case VAR33:
		if (VAR11 && VAR12) {
			FUN14(VAR6, VAR6->VAR23.VAR32 |
						  VAR7.VAR23.VAR32);
			break;
		}
		
		VAR6->VAR23 = FUN17(VAR6->VAR23, VAR7.VAR23);
		VAR6->VAR21 = FUN18(VAR6->VAR21, VAR15);
		VAR6->VAR22 = VAR6->VAR23.VAR32 |
				      VAR6->VAR23.VAR34;
		if (VAR6->VAR19 < 0 || VAR13 < 0) {
			
			VAR6->VAR19 = VAR27;
			VAR6->VAR20 = VAR28;
		} else {
			
			VAR6->VAR19 = VAR6->VAR21;
			VAR6->VAR20 = VAR6->VAR22;
		}
		
		FUN13(VAR6);
		break;
	case VAR35:
		if (VAR16 >= VAR17) {
			
			FUN19(VAR2, VAR8, VAR4->VAR6);
			break;
		}
		
		VAR6->VAR19 = VAR27;
		VAR6->VAR20 = VAR28;
		
		if (VAR6->VAR22 > 1ULL << (63 - VAR16)) {
			VAR6->VAR21 = 0;
			VAR6->VAR22 = VAR29;
		} else {
			VAR6->VAR21 <<= VAR15;
			VAR6->VAR22 <<= VAR16;
		}
		VAR6->VAR23 = FUN20(VAR6->VAR23, VAR15);
		
		FUN13(VAR6);
		break;
	case VAR36:
		if (VAR16 >= VAR17) {
			
			FUN19(VAR2, VAR8, VAR4->VAR6);
			break;
		}
		
		VAR6->VAR19 = VAR27;
		VAR6->VAR20 = VAR28;
		VAR6->VAR23 = FUN21(VAR6->VAR23, VAR15);
		VAR6->VAR21 >>= VAR16;
		VAR6->VAR22 >>= VAR15;
		
		FUN13(VAR6);
		break;
	case VAR37:
		if (VAR16 >= VAR17) {
			
			FUN19(VAR2, VAR8, VAR4->VAR6);
			break;
		}

		
		VAR6->VAR19 >>= VAR15;
		VAR6->VAR20 >>= VAR15;
		VAR6->VAR23 = FUN22(VAR6->VAR23, VAR15);

		
		VAR6->VAR21 = 0;
		VAR6->VAR22 = VAR29;
		FUN13(VAR6);
		break;
	default:
		FUN19(VAR2, VAR8, VAR4->VAR6);
		break;
	}

 	if (FUN4(VAR4->VAR10) != VAR18) {
 		
 		FUN23(VAR6, 4);

		FUN23(&VAR7, 4);
 	}
 
 	FUN24(VAR6);
	FUN25(VAR6);
	return 0;
}