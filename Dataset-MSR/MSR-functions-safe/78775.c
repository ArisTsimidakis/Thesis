static unsigned int FUN1 (int VAR1 )
{
	unsigned int VAR2 = (unsigned int)-1;

	switch ( (VAR1 & 0xfe) ) {
		case 0xe2:    VAR2 = VAR3; break;
		case 0x24:  VAR2 = VAR3; break;
		case 0xe0:           VAR2 = VAR4; break;
		case 0xe4:           VAR2 = VAR5; break;
		case 0xe8:      VAR2 = VAR6; break;
		case 0x82:    VAR2 = VAR7; break;
		case 0xe6:      VAR2 = VAR6; break;
		case 0x88:    VAR2 = VAR7; break;
		case 0x04:       VAR2 = VAR8; break;
		case 0x2a:  VAR2 = VAR9; break;
		case 0xb0:      VAR2 = VAR7; break;
		case 0xb2:      VAR2 = VAR7; break;
		case 0x44:     VAR2 = VAR10; break;
		case 0xa4:           VAR2 = VAR9; break;
		case 0xee:    VAR2 = VAR4; break;
		case 0x2c: VAR2 = VAR6; break;
		case 0xd6:    VAR2 = VAR6; break;
		case 0xdc:    VAR2 = VAR6; break;
		case 0x20:  VAR2 = VAR9; break;
		case 0x60:      VAR2 = VAR4; break;
	}
	return VAR2;
}