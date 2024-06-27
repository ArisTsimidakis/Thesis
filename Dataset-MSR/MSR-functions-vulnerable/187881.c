long VAR1::FUN1(long long VAR2, long long VAR3,
 long long VAR4, long long VAR5,
 VAR6*& VAR7) const {
 if (VAR7)
 return -1;

 VAR8* const VAR9 = VAR10->VAR11;

 long long VAR12 = VAR2;
 const long long VAR13 = VAR2 + VAR3;

 VAR6::Info VAR14;

  VAR14.VAR15 = 0;
  VAR14.VAR16 = 0;
  VAR14.VAR17 = 0;
  VAR14.VAR18 = 0;

 VAR6::Settings VAR19;
  VAR19.VAR20 = -1;
  VAR19.VAR21 = -1;

 VAR6::Settings VAR22;
  VAR22.VAR20 = -1;
  VAR22.VAR21 = -1;

 VAR6::Settings VAR23; 
  VAR23.VAR20 = -1;
  VAR23.VAR21 = -1;

 long long VAR24 = 1; 

 while (VAR12 < VAR13) {
 long long VAR25, VAR21;

 const long VAR26 = FUN2(VAR9, VAR12, VAR13, VAR25, VAR21);

 if (VAR26 < 0) 
 return VAR26;

 if (VAR21 < 0)
 return VAR27;

 const long long VAR20 = VAR12;

 if (VAR25 == 0x60) { 
      VAR19.VAR20 = VAR20;
      VAR19.VAR21 = VAR21;
 } else if (VAR25 == 0x61) { 
      VAR22.VAR20 = VAR20;
      VAR22.VAR21 = VAR21;
 } else if (VAR25 == 0x2D80) { 
      VAR23.VAR20 = VAR20;
      VAR23.VAR21 = VAR21;
 } else if (VAR25 == 0x33C5) { 
 if (VAR21 > 8)
 return VAR27;

      VAR14.VAR17 = 0;

 long long VAR28 = VAR20;
 const long long VAR29 = VAR20 + VAR21;

 while (VAR28 != VAR29) {
 unsigned char VAR30;

 const int VAR26 = VAR9->FUN3(VAR28, 1, &VAR30);

 if (VAR26)
 return VAR26;

        VAR14.VAR17 <<= 8;
        VAR14.VAR17 |= VAR30;

 ++VAR28;
 }
 } else if (VAR25 == 0x57) { 
 const long long VAR31 = FUN4(VAR9, VAR12, VAR21);

 if ((VAR31 <= 0) || (VAR31 > 127))
 return VAR27;

      VAR14.VAR16 = static_cast<long>(VAR31);
 } else if (VAR25 == 0x03) { 
 const long long VAR15 = FUN4(VAR9, VAR12, VAR21);

 if ((VAR15 <= 0) || (VAR15 > 254))
 return VAR27;

      VAR14.VAR15 = static_cast<long>(VAR15);
 } else if (VAR25 == 0x136E) { 
 const long VAR26 =
 FUN5(VAR9, VAR12, VAR21, VAR14.VAR32);

 if (VAR26)
 return VAR26;
 } else if (VAR25 == 0x02B59C) { 
 const long VAR26 = FUN5(VAR9, VAR12, VAR21, VAR14.VAR33);

 if (VAR26)
 return VAR26;
 } else if (VAR25 == 0x03E383) { 
 const long long VAR34 = FUN4(VAR9, VAR12, VAR21);

 if (VAR34 < 0)
 return VAR27;

      VAR14.VAR18 = static_cast<unsigned long long>(VAR34);
 } else if (VAR25 == 0x06) { 
 const long VAR26 = FUN5(VAR9, VAR12, VAR21, VAR14.VAR35);

 if (VAR26)
 return VAR26;
 } else if (VAR25 == 0x1C) { 
      VAR24 = FUN4(VAR9, VAR12, VAR21);

 if ((VAR24 < 0) || (VAR24 > 1))
 return VAR27;
 } else if (VAR25 == 0x23A2) { 
 delete[] VAR14.VAR36;
      VAR14.VAR36 = NULL;
      VAR14.VAR37 = 0;


       const size_t VAR38 = static_cast<VAR39>(VAR21);
 
       if (VAR38) {

        typedef unsigned char* VAR40;



        const buf_t VAR41 = new (VAR42::VAR43) unsigned char[VAR38];


 
         if (VAR41 == NULL)
           return -1;

 const int VAR26 = VAR9->FUN3(VAR12, static_cast<long>(VAR38), VAR41);

 if (VAR26) {
 delete[] VAR41;
 return VAR26;
 }

        VAR14.VAR36 = VAR41;
        VAR14.VAR37 = VAR38;
 }
 } else if (VAR25 == 0x058688) { 
 const long VAR26 =
 FUN5(VAR9, VAR12, VAR21, VAR14.VAR44);

 if (VAR26)
 return VAR26;
 } else if (VAR25 == 0x16AA) { 
      VAR14.VAR45 = FUN4(VAR9, VAR12, VAR21);
 } else if (VAR25 == 0x16BB) { 
      VAR14.VAR46 = FUN4(VAR9, VAR12, VAR21);

     }
 
     VAR12 += VAR21;  

    assert(VAR12 <= VAR13);




   }
 

  assert(VAR12 == VAR13);




 
   if (VAR14.VAR16 <= 0)  
     return VAR27;

 if (FUN6(VAR14.VAR16))
 return VAR27;

 if (VAR14.VAR15 <= 0) 
 return VAR27;

  VAR14.VAR24 = (VAR24 > 0) ? true : false;

 if (VAR14.VAR15 == VAR6::VAR47) {
 if (VAR19.VAR20 < 0)
 return VAR27;

 if (VAR22.VAR20 >= 0)
 return VAR27;

    VAR14.VAR48 = VAR19;

 VAR49* VAR50 = NULL;

 const long VAR26 = VAR49::FUN7(VAR10, VAR14, VAR4,
                                          VAR5, VAR50);

 if (VAR26)
 return VAR26;

    VAR7 = VAR50;
    assert(VAR7);

 if (VAR23.VAR20 >= 0)
      VAR7->FUN8(VAR23.VAR20, VAR23.VAR21);
 } else if (VAR14.VAR15 == VAR6::VAR51) {
 if (VAR22.VAR20 < 0)
 return VAR27;

 if (VAR19.VAR20 >= 0)
 return VAR27;

    VAR14.VAR48 = VAR22;

 VAR52* VAR50 = NULL;

 const long VAR26 = VAR52::FUN7(VAR10, VAR14, VAR4,
                                          VAR5, VAR50);

 if (VAR26)
 return VAR26;

    VAR7 = VAR50;
    assert(VAR7);

 if (VAR23.VAR20 >= 0)
      VAR7->FUN8(VAR23.VAR20, VAR23.VAR21);
 } else {
 

 if (VAR22.VAR20 >= 0)
 return VAR27;

 if (VAR19.VAR20 >= 0)
 return VAR27;

 if (VAR14.VAR15 == VAR6::VAR53 && VAR23.VAR20 >= 0)
 return VAR27;

    VAR14.VAR48.VAR20 = -1;
    VAR14.VAR48.VAR21 = 0;

 VAR6* VAR50 = NULL;

 const long VAR26 =
 VAR6::FUN9(VAR10, VAR14, VAR4, VAR5, VAR50);

 if (VAR26)
 return VAR26;

    VAR7 = VAR50;
    assert(VAR7);
 }

 return 0; 
}