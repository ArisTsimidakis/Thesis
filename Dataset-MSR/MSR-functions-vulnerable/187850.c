long VAR1::FUN1() {
  assert(VAR2 == NULL);
  assert(VAR3 == 0);
  assert(VAR4 == 0);
 

 
 
 

 const long long VAR5 = FUN2();

 if (VAR5 < 0) 
 return static_cast<long>(VAR5);


   if (VAR5 > 0)  
     return VAR6;
 

  assert(VAR7);

  assert(VAR8);




 
   for (;;) {
     const int VAR9 = FUN3();

 if (VAR9 < 0) 
 return VAR9;

 if (VAR9 >= 1) 
 return 0;
 }
}