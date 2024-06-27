static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6) {
	int VAR7 = 0;
	st64 VAR8 = 0;
	int VAR9 = 0;
	int VAR10 = 0;
	int VAR11 = 0;
	ut64 VAR12 = 0;
	if (VAR6->VAR13[1].VAR14 & VAR15) {
		if (!VAR6->VAR13[1].VAR16) {
			return -1;
		}
		if (VAR6->VAR13[1].VAR12 == -1) {
			return -1;
		}
		VAR12 = VAR6->VAR13[1].VAR12 * VAR6->VAR13[1].VAR17;
		if (VAR6->VAR13[0].VAR14 & VAR18 && !(VAR6->VAR13[0].VAR14 & VAR19)) {
			if (VAR2->VAR20 == 64 && ((VAR6->VAR13[0].VAR14 & VAR21) | (VAR6->VAR13[1].VAR14 & VAR21))) {
				if (!(VAR6->VAR13[1].VAR14 & VAR15) && VAR6->VAR13[1].VAR22) {
					VAR4[VAR7++] = 0x49;
				} else {
					VAR4[VAR7++] = 0x48;
				}
			} else if (VAR6->VAR13[0].VAR22) {
				VAR4[VAR7++] = 0x41;
			}
			if (VAR6->VAR13[0].VAR14 & VAR23) {
				if (VAR2->VAR20 > 16) {
					VAR4[VAR7++] = 0x66;
				}
			}
			if (VAR6->VAR13[0].VAR14 & VAR24) {
				VAR4[VAR7++] = 0xb0 | VAR6->VAR13[0].VAR25;
				VAR4[VAR7++] = VAR12;
			} else {
				if (VAR2->VAR20 == 64 &&
					((VAR6->VAR13[0].VAR14 & VAR21) |
					(VAR6->VAR13[1].VAR14 & VAR21)) &&
					VAR12 < VAR26) {
						VAR4[VAR7++] = 0xc7;
				 		VAR4[VAR7++] = 0xc0 | VAR6->VAR13[0].VAR25;
				} else {
					VAR4[VAR7++] = 0xb8 | VAR6->VAR13[0].VAR25;
				}
				VAR4[VAR7++] = VAR12;
				VAR4[VAR7++] = VAR12 >> 8;
				if (!(VAR6->VAR13[0].VAR14 & VAR23)) {
					VAR4[VAR7++] = VAR12 >> 16;
					VAR4[VAR7++] = VAR12 >> 24;
				}
				if (VAR2->VAR20 == 64 && VAR12 > VAR26) {
					VAR4[VAR7++] = VAR12 >> 32;
					VAR4[VAR7++] = VAR12 >> 40;
					VAR4[VAR7++] = VAR12 >> 48;
					VAR4[VAR7++] = VAR12 >> 56;
				}
			}
		} else if (VAR6->VAR13[0].VAR14 & VAR19) {
			if (!VAR6->VAR13[0].VAR27) {
				if (VAR6->VAR13[0].VAR14 & VAR18) {
					((VAR5 *)VAR6)->VAR13[0].VAR28 = VAR6->VAR13[0].VAR29;
				} else {
					return -1;
				}
			}

			int VAR30 = 8 * ((VAR6->VAR13[0].VAR28 & VAR31) >> VAR32);
			int VAR33 = 8 * ((VAR6->VAR13[0].VAR29 & VAR31) >> VAR32);
			int VAR8 = VAR6->VAR13[0].VAR8 * VAR6->VAR13[0].VAR34;

			
			bool VAR35 = false;
			if (VAR33 < VAR2->VAR20) {
				VAR35 = true;
			}

			
			bool VAR36 = false;
			if (VAR30 == 16) {
				VAR36 = true;
			}

			bool VAR37 = VAR6->VAR13[0].VAR38[0] == VAR39;

			
			int VAR11 = 1 << 6;
			bool VAR40 = false;
			if (VAR30 == 64) {			
				VAR40 = true;
				VAR11 |= 1 << 3;
			}
			if (VAR6->VAR13[0].VAR22) {		
				VAR40 = true;
				VAR11 |= 1;
			}

			
			int VAR41;
			if (VAR30 == 8) {
				VAR41 = 0xc6;
			} else {
				VAR41 = 0xc7;
			}

			
			int VAR42 = 0;
			int VAR9;
			int VAR25 = 0;
			int VAR43;
			bool VAR44 = false;
			int VAR45;
			
			if (VAR8 == 0) {
				VAR9 = 0;
			} else if (VAR8 < 128 && VAR8 > -129) {
				VAR9 = 1;
			} else {
				VAR9 = 2;
			}

			if (VAR33 == 16) {
				if (VAR6->VAR13[0].VAR38[0] == VAR46 && VAR6->VAR13[0].VAR38[1] == VAR47) {
					VAR43 = VAR48;
				} else if (VAR6->VAR13[0].VAR38[0] == VAR46 && VAR6->VAR13[0].VAR38[1] == VAR49) {
					VAR43 = VAR50;
				} else if (VAR6->VAR13[0].VAR38[0] == VAR51 && VAR6->VAR13[0].VAR38[1] == VAR47) {
					VAR43 = VAR52;
				} else if (VAR6->VAR13[0].VAR38[0] == VAR51 && VAR6->VAR13[0].VAR38[1] == VAR49) {
					VAR43 = VAR53;
				} else if (VAR6->VAR13[0].VAR38[0] == VAR47 && VAR6->VAR13[0].VAR38[1] == -1) {
					VAR43 = VAR54;
				} else if (VAR6->VAR13[0].VAR38[0] == VAR49 && VAR6->VAR13[0].VAR38[1] == -1) {
					VAR43 = VAR55;
				} else if (VAR6->VAR13[0].VAR38[0] == VAR46 && VAR6->VAR13[0].VAR38[1] == -1) {
					VAR43 = VAR56;
				} else {
					
					return -1;
				}
				VAR42 = (VAR9 << 6) | (VAR25 << 3) | VAR43;
			} else {
				
				if (VAR6->VAR13[0].VAR22) {
					VAR43 = VAR6->VAR13[0].VAR25;
				} else {
					VAR43 = VAR6->VAR13[0].VAR38[0];
				}
				
				if (VAR43 == 5 && VAR9 == 0) {
					VAR9 = 1;
				}

				
				int VAR57 = VAR6->VAR13[0].VAR38[1];
				int VAR58 = FUN2(VAR6->VAR13[0].VAR58[1]);
				if (VAR57 != -1) {
					VAR44 = true;
					VAR45 = (VAR58 << 6) | (VAR57 << 3) | VAR43;
				} else if (VAR43 == 4) {
					VAR44 = true;
					VAR45 = 0x24;
				}
				if (VAR44) {
					VAR43 = VAR54;
				}
				if (VAR37) {
					VAR42 = (VAR48 << 6) | (VAR25 << 3) | VAR55;
					VAR45 = (VAR58 << 6) | (VAR54 << 3) | VAR55;
				} else {
					VAR42 = (VAR9 << 6) | (VAR25 << 3) | VAR43;
				}
			}

			
			if (VAR35) {
				VAR4[VAR7++] = 0x67;
			}
			if (VAR36) {
				VAR4[VAR7++] = 0x66;
			}
			if (VAR40) {
				VAR4[VAR7++] = VAR11;
			}
			VAR4[VAR7++] = VAR41;
			VAR4[VAR7++] = VAR42;
			if (VAR44) {
				VAR4[VAR7++] = VAR45;
			}
			
			if (VAR9 == 1) {
				VAR4[VAR7++] = VAR8;
			} else if (VAR33 == 16 && VAR9 == 2) {
				VAR4[VAR7++] = VAR8;
				VAR4[VAR7++] = VAR8 >> 8;
			} else if (VAR9 == 2 || VAR37) {
				VAR4[VAR7++] = VAR8;
				VAR4[VAR7++] = VAR8 >> 8;
				VAR4[VAR7++] = VAR8 >> 16;
				VAR4[VAR7++] = VAR8 >> 24;
			}
			
			int VAR59;
			for (VAR59 = 0; VAR59 < VAR30 && VAR59 < 32; VAR59 += 8) {
				VAR4[VAR7++] = (VAR12 >> VAR59);
			}
		}
	} else if (VAR6->VAR13[1].VAR14 & VAR60 &&
			 !(VAR6->VAR13[1].VAR14 & VAR19)) {
		if (VAR6->VAR13[0].VAR14 & VAR15) {
			return -1;
		}
		if (VAR6->VAR13[0].VAR14 & VAR61 & VAR62 &&
		    VAR6->VAR13[1].VAR14 & VAR61 & VAR62) {
				return -1;
		}
		
		if (VAR6->VAR13[0].VAR14 & VAR61 && VAR6->VAR13[1].VAR14 & VAR61) {
			if (!((VAR6->VAR13[0].VAR14 & VAR31) &
			(VAR6->VAR13[1].VAR14 & VAR31))) {
				return -1;
			}
		}

		if (VAR2->VAR20 == 64) {
			if (VAR6->VAR13[0].VAR22) {
				VAR11 = 1;
			}
			if (VAR6->VAR13[1].VAR22) {
				VAR11 += 4;
			}
			if (VAR6->VAR13[1].VAR14 & VAR21) {
				if (!(VAR6->VAR13[0].VAR14 & VAR21)) {
					VAR4[VAR7++] = 0x67;
					VAR4[VAR7++] = 0x48;
				}
			}
			if (VAR6->VAR13[1].VAR14 & VAR21 &&
				VAR6->VAR13[0].VAR14 & VAR21) {
				VAR4[VAR7++] = 0x48 | VAR11;
			}
			if (VAR6->VAR13[1].VAR14 & VAR63 &&
				VAR6->VAR13[0].VAR14 & VAR63) {
				VAR4[VAR7++] = 0x40 | VAR11;
			}
		} else if (VAR6->VAR13[0].VAR22 && VAR6->VAR13[1].VAR22) {
			VAR4[VAR7++] = 0x45;
		}
		VAR8 = VAR6->VAR13[0].VAR8 * VAR6->VAR13[0].VAR34;
		if (VAR6->VAR13[1].VAR14 & VAR61 & VAR62) {
			VAR4[VAR7++] = 0x8c;
		} else {
			if (VAR6->VAR13[0].VAR14 & VAR23) {
				VAR4[VAR7++] = 0x66;
			}
			VAR4[VAR7++] = (VAR6->VAR13[0].VAR14 & VAR24) ? 0x88 : 0x89;
		}

		if (VAR6->VAR13[0].VAR58[0] > 1) {
				VAR4[VAR7++] = VAR6->VAR13[1].VAR25 << 3 | 4;
				VAR4[VAR7++] = FUN2 (VAR6->VAR13[0].VAR58[0]) << 6 |
						    VAR6->VAR13[0].VAR38[0] << 3 | 5;

				VAR4[VAR7++] = VAR8;
				VAR4[VAR7++] = VAR8 >> 8;
				VAR4[VAR7++] = VAR8 >> 16;
				VAR4[VAR7++] = VAR8 >> 24;

				return VAR7;
			}

		if (!(VAR6->VAR13[0].VAR14 & VAR19)) {
			if (VAR6->VAR13[0].VAR25 == VAR64 ||
				VAR6->VAR13[1].VAR25 == VAR64) {
				return -1;
			}
			VAR9 = 0x3;
			VAR4[VAR7++] = VAR9 << 6 | VAR6->VAR13[1].VAR25 << 3 | VAR6->VAR13[0].VAR25;
		} else if (VAR6->VAR13[0].VAR38[0] == VAR64) {
			VAR4[VAR7++] = VAR6->VAR13[1].VAR25 << 3 | 0x5;
			VAR4[VAR7++] = VAR8;
			VAR4[VAR7++] = VAR8 >> 8;
			VAR4[VAR7++] = VAR8 >> 16;
			VAR4[VAR7++] = VAR8 >> 24;
		} else {
			if (VAR6->VAR13[0].VAR14 & VAR19) {
				if (VAR6->VAR13[0].VAR38[1] != VAR64) {
					VAR4[VAR7++] = VAR6->VAR13[1].VAR25 << 3 | 0x4;
					VAR4[VAR7++] = VAR6->VAR13[0].VAR38[1] << 3 | VAR6->VAR13[0].VAR38[0];
					return VAR7;
				}
				if (VAR8) {
					VAR9 = (VAR8 > 128 || VAR8 < -129) ? 0x2 : 0x1;
				}
				if (VAR6->VAR13[0].VAR38[0] == VAR65) {
					VAR9 = 0x2;
				}
				VAR4[VAR7++] = VAR9 << 6 | VAR6->VAR13[1].VAR25 << 3 | VAR6->VAR13[0].VAR38[0];
				if (VAR6->VAR13[0].VAR38[0] == VAR66) {
					VAR4[VAR7++] = 0x24;
				}
				if (VAR8) {
					VAR4[VAR7++] = VAR8;
				}
				if (VAR9 == 2) {
					
					VAR4[VAR7++] = VAR8 >> 8;
					VAR4[VAR7++] = VAR8 >> 16;
					VAR4[VAR7++] = VAR8 >> 24;
				}
			}
		}
	} else if (VAR6->VAR13[1].VAR14 & VAR19) {
		if (VAR6->VAR13[0].VAR14 & VAR19) {
			return -1;
		}
		VAR8 = VAR6->VAR13[1].VAR8 * VAR6->VAR13[1].VAR34;
		if (VAR6->VAR13[0].VAR25 == VAR67 && VAR6->VAR13[1].VAR38[0] == VAR64) {
			if (VAR2->VAR20 == 64) {
				VAR4[VAR7++] = 0x48;
			}
			if (VAR6->VAR13[0].VAR14 & VAR24) {
				VAR4[VAR7++] = 0xa0;
			} else {
				VAR4[VAR7++] = 0xa1;
			}
			VAR4[VAR7++] = VAR8;
			VAR4[VAR7++] = VAR8 >> 8;
			VAR4[VAR7++] = VAR8 >> 16;
			VAR4[VAR7++] = VAR8 >> 24;
			if (VAR2->VAR20 == 64) {
				VAR4[VAR7++] = VAR8 >> 32;
				VAR4[VAR7++] = VAR8 >> 40;
				VAR4[VAR7++] = VAR8 >> 48;
				VAR4[VAR7++] = VAR8 >> 54;
			}
			return VAR7;
		}
		if (VAR6->VAR13[0].VAR14 & VAR24 && VAR2->VAR20 == 64 && VAR6->VAR13[1].VAR38[0]) {
			if (VAR6->VAR13[1].VAR38[0] >= VAR68 &&
			    VAR6->VAR13[0].VAR25 < 4) {
				VAR4[VAR7++] = 0x41;
				VAR4[VAR7++] = 0x8a;
				VAR4[VAR7++] = VAR6->VAR13[0].VAR25 << 3 | (VAR6->VAR13[1].VAR38[0] - 8);
				return VAR7;
			}
			return -1;
		}

		if (VAR6->VAR13[1].VAR14 & VAR61 & VAR62) {
 			if (VAR6->VAR13[1].VAR58[0] == 0) {
 				return -1;
 			}

			VAR4[VAR7++] = VAR69[VAR6->VAR13[1].VAR38[0]];


 			VAR4[VAR7++] = 0x8b;

			VAR4[VAR7++] = VAR6->VAR13[0].VAR25 << 3 | 0x5;


 			VAR4[VAR7++] = VAR8;
 			VAR4[VAR7++] = VAR8 >> 8;
 			VAR4[VAR7++] = VAR8 >> 16;
			VAR4[VAR7++] = VAR8 >> 24;
			return VAR7;
		}

		if (VAR2->VAR20 == 64) {
			if (VAR6->VAR13[0].VAR14 & VAR21) {
				if (!(VAR6->VAR13[1].VAR14 & VAR21)) {
					if (VAR6->VAR13[1].VAR38[0] != -1) {
						VAR4[VAR7++] = 0x67;
					}
					VAR4[VAR7++] = 0x48;
				}
			} else if (VAR6->VAR13[1].VAR14 & VAR63) {
				VAR4[VAR7++] = 0x44;
			} else if (!(VAR6->VAR13[1].VAR14 & VAR21)) {
				VAR4[VAR7++] = 0x67;
			}
			if (VAR6->VAR13[1].VAR14 & VAR21 &&
				VAR6->VAR13[0].VAR14 & VAR21) {
				VAR4[VAR7++] = 0x48;
			}
		}

		if (VAR6->VAR13[0].VAR14 & VAR23) {
			VAR4[VAR7++] = 0x66;
			VAR4[VAR7++] = VAR6->VAR13[1].VAR14 & VAR24 ? 0x8a : 0x8b;
		} else {
			VAR4[VAR7++] = (VAR6->VAR13[1].VAR14 & VAR24 ||
				VAR6->VAR13[0].VAR14 & VAR24) ?
				0x8a : 0x8b;
		}

		if (VAR6->VAR13[1].VAR38[0] == VAR64) {
			if (VAR2->VAR20 == 64) {
				VAR4[VAR7++] = VAR6->VAR13[0].VAR25 << 3 | 0x4;
				VAR4[VAR7++] = 0x25;
			} else {
				VAR4[VAR7++] = VAR6->VAR13[0].VAR25 << 3 | 0x5;
			}
			VAR4[VAR7++] = VAR8;
			VAR4[VAR7++] = VAR8 >> 8;
			VAR4[VAR7++] = VAR8 >> 16;
			VAR4[VAR7++] = VAR8 >> 24;
		} else {
			if (VAR6->VAR13[1].VAR58[0] > 1) {
				VAR4[VAR7++] = VAR6->VAR13[0].VAR25 << 3 | 4;

				if (VAR6->VAR13[1].VAR58[0] >= 2) {
					VAR10 = 5;
				}
				if (VAR10) {
					VAR4[VAR7++] = FUN2 (VAR6->VAR13[1].VAR58[0]) << 6 | VAR6->VAR13[1].VAR38[0] << 3 | VAR10;
				} else {
					VAR4[VAR7++] = FUN2 (VAR6->VAR13[1].VAR58[0]) << 3 | VAR6->VAR13[1].VAR38[0];
				}
				if (VAR8 || VAR10) {
					VAR4[VAR7++] = VAR8;
					VAR4[VAR7++] = VAR8 >> 8;
					VAR4[VAR7++] = VAR8 >> 16;
					VAR4[VAR7++] = VAR8 >> 24;
				}
				return VAR7;
			}
			if (VAR6->VAR13[1].VAR38[1] != VAR64) {
				VAR4[VAR7++] = VAR6->VAR13[0].VAR25 << 3 | 0x4;
				VAR4[VAR7++] = VAR6->VAR13[1].VAR38[1] << 3 | VAR6->VAR13[1].VAR38[0];
				return VAR7;
			}

			if (VAR8 || VAR6->VAR13[1].VAR38[0] == VAR65) {
				VAR9 = 0x2;
				if (VAR6->VAR13[1].VAR8 > 127) {
					VAR9 = 0x4;
				}
			}
			if (VAR2->VAR20 == 64 && VAR8 && VAR6->VAR13[0].VAR14 & VAR21) {
				if (VAR6->VAR13[1].VAR38[0] == VAR39) {
					VAR4[VAR7++] = 0x5;
				} else {
					if (VAR6->VAR13[1].VAR8 > 127) {
						VAR4[VAR7++] = 0x80 | VAR6->VAR13[0].VAR25 << 3 | VAR6->VAR13[1].VAR38[0];
					} else {
						VAR4[VAR7++] = 0x40 | VAR6->VAR13[1].VAR38[0];
					}
				}
				if (VAR6->VAR13[1].VAR8 > 127) {
					VAR9 = 0x1;
				}
			} else {
				if (VAR6->VAR13[1].VAR38[0] == VAR70 && (VAR6->VAR13[0].VAR14 & VAR63)) {
					VAR4[VAR7++] = 0x0d;
				} else if (VAR6->VAR13[1].VAR38[0] == VAR39 && (VAR6->VAR13[0].VAR14 & VAR21)) {
					VAR4[VAR7++] = 0x05;
				} else {
					VAR4[VAR7++] = VAR9 << 5 | VAR6->VAR13[0].VAR25 << 3 | VAR6->VAR13[1].VAR38[0];
				}
			}
			if (VAR6->VAR13[1].VAR38[0] == VAR66) {
				VAR4[VAR7++] = 0x24;
			}
			if (VAR9 >= 0x2) {
				VAR4[VAR7++] = VAR8;
				if (VAR6->VAR13[1].VAR8 > 128 || VAR6->VAR13[1].VAR38[0] == VAR70) {
					VAR4[VAR7++] = VAR8 >> 8;
					VAR4[VAR7++] = VAR8 >> 16;
					VAR4[VAR7++] = VAR8 >> 24;
				}
			} else if (VAR2->VAR20 == 64 && (VAR8 || VAR6->VAR13[1].VAR38[0] == VAR39)) {
				VAR4[VAR7++] = VAR8;
				if (VAR6->VAR13[1].VAR8 > 127 || VAR6->VAR13[1].VAR38[0] == VAR39) {
					VAR4[VAR7++] = VAR8 >> 8;
					VAR4[VAR7++] = VAR8 >> 16;
					VAR4[VAR7++] = VAR8 >> 24;
				}
			}
		}
	}
	return VAR7;
}