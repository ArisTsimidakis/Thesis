class VAR1{
    private void FUN1() throws Throwable
        {
            if (FUN2())
            {
                
                VAR2.writeLine("");
            }
            else
            {
    
                byte[] VAR3 = "".getBytes("");
    
                KeyGenerator VAR4 = VAR5.FUN3("");
                VAR4.FUN4(128);
                SecretKey VAR6 = VAR4.FUN5();
    
                Cipher VAR7 = VAR8.FUN3("");
    
                int VAR9 = VAR7.FUN6();
                byte[] VAR10 = new byte[VAR9];
                SecureRandom VAR11 = new FUN7();
                VAR11.FUN8(VAR10);
    
                
                IvParameterSpec VAR12 = new FUN9(VAR10);
    
                VAR7.FUN4(VAR8.VAR13, VAR6, VAR12);
    
                VAR2.writeLine(VAR2.FUN10(VAR7.FUN11(VAR3)));
    
            }
        }
};