static VAR1 *FUN1(
  VAR2 *VAR3,
  VAR4 *VAR5,
  Bitmask VAR6,              
  struct VAR7 *VAR8,
  VAR9 *VAR10,
  VAR11 *VAR12                   
){
  int VAR13, VAR14;
  int VAR15;
  struct VAR16 *VAR17;
  struct VAR18 *VAR19;
  struct VAR20 *VAR21;
  VAR22 *VAR23;
  int VAR24;
  VAR1 *VAR25;
  u16 VAR26 = 0;

  
  for(VAR13=VAR15=0, VAR23=VAR5->VAR27; VAR13<VAR5->VAR15; VAR13++, VAR23++){
    if( VAR23->VAR28 != VAR8->VAR29 ) continue;
    if( VAR23->VAR30 & VAR6 ) continue;
    assert( FUN2(VAR23->VAR31 & ~VAR32) );
    FUN3( VAR23->VAR31 & VAR33 );
    FUN3( VAR23->VAR31 & VAR34 );
    FUN3( VAR23->VAR31 & VAR35 );
    FUN3( VAR23->VAR31 & VAR36 );
    if( (VAR23->VAR31 & ~(VAR34|VAR32|VAR35))==0 ) continue;
    if( VAR23->VAR37 & VAR38 ) continue;
    assert( VAR23->VAR39.VAR40>=(-1) );
    VAR15++;
  }

  
  VAR24 = 0;
  if( VAR10 ){
    int VAR41 = VAR10->VAR42;
    for(VAR13=0; VAR13<VAR41; VAR13++){
      VAR43 *VAR44 = VAR10->VAR27[VAR13].VAR44;
      if( VAR44->VAR45!=VAR46 || VAR44->VAR47!=VAR8->VAR29 ) break;
    }
    if( VAR13==VAR41){
      VAR24 = VAR41;
    }
  }

  
  VAR25 = FUN4(VAR3->VAR48, sizeof(*VAR25)
                           + (sizeof(*VAR17) + sizeof(*VAR21))*VAR15
                           + sizeof(*VAR19)*VAR24 );
  if( VAR25==0 ){
    FUN5(VAR3, "");
    return 0;
  }

  
  VAR17 = (struct VAR16*)&VAR25[1];
  VAR19 = (struct VAR18*)&VAR17[VAR15];
  VAR21 = (struct VAR20*)&VAR19[VAR24];
  *(int*)&VAR25->VAR49 = VAR15;
  *(int*)&VAR25->VAR24 = VAR24;
  *(struct VAR16**)&VAR25->VAR50 = VAR17;
  *(struct VAR18**)&VAR25->VAR51 = VAR19;
  *(struct VAR20**)&VAR25->VAR52 =
                                                                   VAR21;

  for(VAR13=VAR14=0, VAR23=VAR5->VAR27; VAR13<VAR5->VAR15; VAR13++, VAR23++){
    u8 VAR45;
    if( VAR23->VAR28 != VAR8->VAR29 ) continue;
    if( VAR23->VAR30 & VAR6 ) continue;
    assert( FUN2(VAR23->VAR31 & ~VAR32) );
    FUN3( VAR23->VAR31 & VAR33 );
    FUN3( VAR23->VAR31 & VAR35 );
    FUN3( VAR23->VAR31 & VAR34 );
    FUN3( VAR23->VAR31 & VAR36 );
    if( (VAR23->VAR31 & ~(VAR34|VAR32|VAR35))==0 ) continue;
    if( VAR23->VAR37 & VAR38 ) continue;
    assert( VAR23->VAR39.VAR40>=(-1) );
    VAR17[VAR14].VAR53 = VAR23->VAR39.VAR40;
    VAR17[VAR14].VAR54 = VAR13;
    VAR45 = (VAR55)VAR23->VAR31 & VAR36;
    if( VAR45==VAR33 ) VAR45 = VAR56;
    if( VAR45==VAR57 ){
      VAR45 = VAR23->VAR58;
    }
    VAR17[VAR14].VAR45 = VAR45;
    
    assert( VAR56==VAR59 );
    assert( VAR60==VAR61 );
    assert( VAR62==VAR63 );
    assert( VAR64==VAR65 );
    assert( VAR66==VAR67 );
    assert( VAR57==VAR68 );
    assert( VAR23->VAR31 & (VAR33|VAR56|VAR60|VAR62|VAR64|VAR66|VAR57) );

    if( VAR45 & (VAR60|VAR62|VAR64|VAR66)
     && FUN6(VAR23->VAR44->VAR69) 
    ){
      if( VAR13<16 ) VAR26 |= (1 << VAR13);
      if( VAR45==VAR60 ) VAR17[VAR14].VAR45 = VAR62;
      if( VAR45==VAR64 ) VAR17[VAR14].VAR45 = VAR66;
    }

    VAR14++;
  }
  for(VAR13=0; VAR13<VAR24; VAR13++){
    VAR43 *VAR44 = VAR10->VAR27[VAR13].VAR44;
    VAR19[VAR13].VAR53 = VAR44->VAR53;
    VAR19[VAR13].VAR70 = VAR10->VAR27[VAR13].VAR71;
  }

  *VAR12 = VAR26;
  return VAR25;
}