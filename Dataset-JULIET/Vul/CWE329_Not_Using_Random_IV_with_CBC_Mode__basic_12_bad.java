class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                byte[] VAR3 = "".getBytes("");
                byte[] VAR4 =
                {
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
                };
                KeyGenerator VAR5 = VAR6.FUN3("");
                VAR5.FUN4(128);
                SecretKey VAR7 = VAR5.FUN5();
                
                Cipher VAR8 = VAR9.FUN3("");
                IvParameterSpec VAR10 = new FUN6(VAR4);
                VAR8.FUN4(VAR9.VAR11, VAR7, VAR10);
                VAR2.writeLine(VAR2.FUN7(VAR8.FUN8(VAR3)));
            }
            else
            {
    
                byte[] VAR3 = "".getBytes("");
    
                KeyGenerator VAR5 = VAR6.FUN3("");
                VAR5.FUN4(128);
                SecretKey VAR7 = VAR5.FUN5();
    
                Cipher VAR8 = VAR9.FUN3("");
    
                int VAR12 = VAR8.FUN9();
                byte[] VAR4 = new byte[VAR12];
                SecureRandom VAR13 = new FUN10();
                VAR13.FUN11(VAR4);
    
                
                IvParameterSpec VAR10 = new FUN6(VAR4);
    
                VAR8.FUN4(VAR9.VAR11, VAR7, VAR10);
    
                VAR2.writeLine(VAR2.FUN7(VAR8.FUN8(VAR3)));
    
            }
        }
};