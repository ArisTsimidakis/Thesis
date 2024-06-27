int VAR1::VAR2::FUN1(VAR2& VAR3) const {
 if (&VAR3 == this)
 return 0;

  VAR3.VAR4 = VAR4;
  VAR3.VAR5 = VAR5;
  VAR3.VAR6 = VAR6;
  VAR3.VAR7 = VAR7;
  VAR3.VAR8 = VAR8;
  VAR3.VAR9 = VAR9;
  VAR3.VAR10 = VAR10;
  VAR3.VAR11 = VAR11;

 
 
 
 
 

 if (int VAR12 = FUN2(&VAR2::VAR13, VAR3))
 return VAR12;

 if (int VAR12 = FUN2(&VAR2::VAR14, VAR3))
 return VAR12;

 if (int VAR12 = FUN2(&VAR2::VAR15, VAR3))
 return VAR12;

 if (int VAR12 = FUN2(&VAR2::VAR16, VAR3))
 return VAR12;

 if (VAR17 > 0) {
 if (VAR18 == NULL)
 return -1;

 if (VAR3.VAR18)
 return -1;


     if (VAR3.VAR17 != 0)
       return -1;
 

    VAR3.VAR18 = new (VAR19::VAR20) unsigned char[VAR17];


 
     if (VAR3.VAR18 == NULL)
       return -1;

    memcpy(VAR3.VAR18, VAR18, VAR17);
    VAR3.VAR17 = VAR17;
 }

 return 0;
}