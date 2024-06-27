static void FUN1(VAR1 *VAR2, int argc, VAR3 **argv){
  assert( argc==1 );
  FUN2(argc);
  switch( FUN3(argv[0]) ){
    case VAR4: {
      i64 VAR5 = FUN4(argv[0]);
      if( VAR5<0 ){
        if( VAR5==VAR6 ){
          
          FUN5(VAR2, "", -1);
          return;
        }
        VAR5 = -VAR5;
      }
      FUN6(VAR2, VAR5);
      break;
    }
    case VAR7: {
      
      FUN7(VAR2);
      break;
    }
    default: {
      
      double VAR8 = FUN8(argv[0]);
      if( VAR8<0 ) VAR8 = -VAR8;
      FUN9(VAR2, VAR8);
      break;
    }
  }
}