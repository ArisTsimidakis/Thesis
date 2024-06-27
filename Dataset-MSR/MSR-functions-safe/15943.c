VAR1::FUN1 ( VAR2 * VAR3, VAR4 * VAR5 )
{
	bool VAR6;
	VAR7::string VAR8;

	XMP_Int32 VAR9;
	XMP_Uns8 VAR10;
	
	
	
	
	#if VAR11
	
		XMP_OptionBits VAR12;
	
		VAR6 = VAR3->FUN2 ( VAR13, "" );
		if ( ! VAR6 ) {
			VAR6 = VAR3->FUN3 ( VAR14, "", 0, &VAR12 );
			if ( VAR6 && FUN4(VAR12) ) {
				VAR6 = VAR3->FUN5 ( VAR14, "", 1, &VAR8, 0 );
				if ( VAR6 ) VAR3->FUN6 ( VAR13, "", VAR8.FUN7() );
			}
		}
	
		VAR6 = VAR3->FUN2 ( VAR13, "" );
		if ( ! VAR6 ) {
			VAR6 = VAR3->FUN3 ( VAR15, "", &VAR8, 0 );
			if ( VAR6 ) VAR3->FUN6 ( VAR13, "", VAR8.FUN7() );
		}
	
		VAR6 = VAR3->FUN2 ( VAR13, "" );
		if ( ! VAR6 ) {
			VAR6 = VAR3->FUN3 ( VAR15, "", &VAR8, 0 );
			if ( VAR6 ) VAR3->FUN6 ( VAR13, "", VAR8.FUN7() );
		}
	
		VAR6 = VAR3->FUN2 ( VAR13, "" );
		if ( ! VAR6 ) {
			VAR6 = VAR3->FUN3 ( VAR15, "", &VAR8, 0 );
			if ( VAR6 ) VAR3->FUN6 ( VAR13, "", VAR8.FUN7() );
		}
	
		VAR6 = VAR3->FUN2 ( VAR13, "" );
		if ( ! VAR6 ) {
			VAR6 = VAR3->FUN3 ( VAR15, "", &VAR8, 0 );
			if ( VAR6 ) {
				size_t VAR16, VAR17;
				VAR7::string VAR18;
				for ( VAR16 = 0; VAR16 < VAR8.FUN8(); VAR16 = VAR17 + 1 ) {
					VAR17 = VAR8.FUN9 ( '', VAR16 );
					if ( VAR17 == VAR16 ) continue;
					if ( VAR17 == VAR7::VAR19::VAR20 ) VAR17 = VAR8.FUN8();
					VAR18 = VAR8.FUN10 ( VAR16, (VAR17-VAR16) );
					VAR3->FUN11 ( VAR13, "", VAR21, VAR18.FUN7() );
				}
			}
		}
	
	#endif
	
	
	
	FUN12 ( VAR22, VAR5, *VAR3 );
	FUN12 ( VAR23, VAR5, *VAR3 );
	FUN12 ( VAR24, VAR5, *VAR3 );
	
	
	
	
	
	
	
	VAR4::Rational VAR25;
	bool VAR26 = VAR5->FUN13 ( VAR24, VAR27, &VAR25 );
	if ( VAR26 ) {

		bool VAR28 = false;

		if ( VAR25.VAR29 >> 31 ) {	
			VAR25.VAR29 = -VAR25.VAR29;
			VAR25.VAR30 = -VAR25.VAR30;
			VAR28 = true;
		}

		if ( VAR25.VAR30 >> 31 ) {	
			VAR5->FUN14 ( VAR24, VAR31, 1 );
			VAR25.VAR30 = -VAR25.VAR30;
			VAR28 = true;
		}

		if ( VAR28 ) VAR5->FUN15 ( VAR24, VAR27, VAR25.VAR30, VAR25.VAR29 );

	}

	
	
	

	FUN16 ( *VAR3, VAR32, "",
							  VAR5, VAR22, VAR33 );

	FUN17 ( *VAR3, VAR14, "",
							   VAR5, VAR23, VAR34, true  );
	
	
	
	

	if ( VAR5->FUN18 ( VAR23, VAR35, 0 ) ) {
		FUN19 ( *VAR3, VAR36, "", VAR5, VAR35 );
	}

	FUN19 ( *VAR3, VAR14, "", VAR5, VAR37 );
	FUN19 ( *VAR3, VAR36, "", VAR5, VAR38 );
	
	

	FUN20 ( *VAR3, VAR32, "", VAR5, VAR22, VAR39 );

	FUN16 ( *VAR3, VAR32, "", VAR5, VAR22, VAR40 );
		
	VAR6 = VAR3->FUN3 ( VAR14, "", &VAR8, 0 );
	if ( VAR6 && (VAR8.FUN8() == 4) && (! VAR5->FUN18 ( VAR23, VAR41, 0 )) ) {
		
		VAR5->FUN21 ( VAR23, VAR41, VAR42, 4, VAR8.FUN22() );
	}

	
	FUN23 ( VAR3, VAR5 );
	
	VAR6 = VAR3->FUN2 ( VAR14, "" );
	if ( VAR6 && (VAR3->FUN24 ( VAR14, "" ) == 4) &&
		 (! VAR5->FUN18 ( VAR23, VAR43, 0 )) ) {
		
		XMP_Uns8 VAR44[4];
		VAR3->FUN25 ( VAR14, "", &VAR9, 0 );
		VAR44[0] = (VAR45)VAR9;
		VAR3->FUN25 ( VAR14, "", &VAR9, 0 );
		VAR44[1] = (VAR45)VAR9;
		VAR3->FUN25 ( VAR14, "", &VAR9, 0 );
		VAR44[2] = (VAR45)VAR9;
		VAR3->FUN25 ( VAR14, "", &VAR9, 0 );
		VAR44[3] = (VAR45)VAR9;
		VAR5->FUN21 ( VAR23, VAR43, VAR42, 4, &VAR44[0] );
	}
	
	VAR6 = VAR3->FUN2 ( VAR14, "" );
	if ( VAR6 && (! VAR5->FUN18 ( VAR23, VAR46, 0 )) ) {
		
		XMP_Uns16 VAR47 = 0;
		bool VAR48;
		VAR6 = VAR3->FUN26 ( VAR14, "", &VAR48, 0 );
		if ( VAR6 & VAR48 ) VAR47 |= 0x0001;
		VAR6 = VAR3->FUN25 ( VAR14, "", &VAR9, 0 );
		if ( VAR6 ) VAR47 |= (VAR9 & 3) << 1;
		VAR6 = VAR3->FUN25 ( VAR14, "", &VAR9, 0 );
		if ( VAR6 ) VAR47 |= (VAR9 & 3) << 3;
		VAR6 = VAR3->FUN26 ( VAR14, "", &VAR48, 0 );
		if ( VAR6 & VAR48 ) VAR47 |= 0x0020;
		VAR6 = VAR3->FUN26 ( VAR14, "", &VAR48, 0 );
		if ( VAR6 & VAR48 ) VAR47 |= 0x0040;
		VAR5->FUN27 ( VAR23, VAR46, VAR47 );
	}
	
	VAR6 = VAR3->FUN25 ( VAR14, "", &VAR9, 0 );
	if ( VAR6 && (! VAR5->FUN18 ( VAR23, VAR49, 0 )) ) {
		
		VAR10 = (VAR45)VAR9;
		VAR5->FUN21 ( VAR23, VAR49, VAR42, 1, &VAR10 );
	}
	
	VAR6 = VAR3->FUN25 ( VAR14, "", &VAR9, 0 );
	if ( VAR6 && (! VAR5->FUN18 ( VAR23, VAR50, 0 )) ) {
		
		VAR10 = (VAR45)VAR9;
		VAR5->FUN21 ( VAR23, VAR50, VAR42, 1, &VAR10 );
	}
	
	

	VAR6 = VAR3->FUN3 ( VAR14, "", &VAR8, 0 );	
	if ( VAR6 && (! VAR5->FUN18 ( VAR24, VAR51, 0 )) ) {
		XMP_Uns8 VAR52[4];	
		unsigned int VAR53[4];	
		int VAR54 = sscanf ( VAR8.FUN7(), "", &VAR53[0], &VAR53[1], &VAR53[2], &VAR53[3] );
		if ( (VAR54 == 4) && (VAR53[0] <= 255) && (VAR53[1] <= 255) && (VAR53[2] <= 255) && (VAR53[3] <= 255) ) {
			VAR52[0] = VAR53[0]; VAR52[1] = VAR53[1]; VAR52[2] = VAR53[2]; VAR52[3] = VAR53[3];
			VAR5->FUN21 ( VAR24, VAR51, VAR55, 4, &VAR52[0] );
		}
	}
	
	FUN28 ( *VAR3, VAR14, "", VAR5, VAR24, VAR56 );

	FUN28 ( *VAR3, VAR14, "", VAR5, VAR24, VAR57 );
	
	FUN29 ( *VAR3, VAR14, "", VAR5 );

	
	
	VAR6 = VAR3->FUN2 ( VAR14, "" );
	if ( VAR6 && (! VAR5->FUN18 ( VAR24, VAR58, 0 )) ) {
		FUN28 ( *VAR3, VAR14, "", VAR5, VAR24, VAR58 );
	}

	VAR6 = VAR3->FUN2 ( VAR14, "" );
	if ( VAR6 && (! VAR5->FUN18 ( VAR24, VAR59, 0 )) ) {
		FUN28 ( *VAR3, VAR14, "", VAR5, VAR24, VAR59 );
	}

	VAR6 = VAR3->FUN3 ( VAR14, "", &VAR8, 0 );
	if ( VAR6 && (! VAR8.FUN30()) && (! VAR5->FUN18 ( VAR24, VAR60, 0 )) ) {
		
		FUN17 ( *VAR3, VAR14, "", VAR5, VAR24, VAR60 );
	}

	VAR6 = VAR3->FUN3 ( VAR14, "", &VAR8, 0 );
	if ( VAR6 && (! VAR8.FUN30()) && (! VAR5->FUN18 ( VAR24, VAR61, 0 )) ) {
		
		FUN17 ( *VAR3, VAR14, "", VAR5, VAR24, VAR61 );
	}
	
}