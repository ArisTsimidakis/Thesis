class VAR1{
    private void FUN1() throws Throwable
        {
            if (false)
            {
                
                VAR2.writeLine("");
            }
            else
            {
    
                byte[] VAR3 = "".getBytes("");
    
                KeyGenerator VAR4 = VAR5.FUN2("");
                VAR4.FUN3(128);
                SecretKey VAR6 = VAR4.FUN4();
    
                Cipher VAR7 = VAR8.FUN2("");
    
                int VAR9 = VAR7.FUN5();
                byte[] VAR10 = new byte[VAR9];
                SecureRandom VAR11 = new FUN6();
                VAR11.FUN7(VAR10);
    
                
                IvParameterSpec VAR12 = new FUN8(VAR10);
    
                VAR7.FUN3(VAR8.VAR13, VAR6, VAR12);
    
                VAR2.writeLine(VAR2.FUN9(VAR7.FUN10(VAR3)));
    
            }
        }
};