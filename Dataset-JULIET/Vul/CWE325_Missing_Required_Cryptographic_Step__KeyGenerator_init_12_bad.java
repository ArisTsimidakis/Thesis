class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                final String VAR3 = "";
                KeyGenerator VAR4 = VAR5.FUN3("");
                
                SecretKey VAR6 = VAR4.FUN4();
                byte[] VAR7 = VAR6.FUN5();
                SecretKeySpec VAR8 = new FUN6(VAR7, "");
                Cipher VAR9 = VAR10.FUN3("");
                VAR9.FUN7(VAR10.VAR11, VAR8);
                byte[] VAR12 = VAR9.FUN8(VAR3.getBytes(""));
                VAR2.writeLine(VAR2.FUN9(VAR12));
            }
            else
            {
    
                final String VAR3 = "";
    
                KeyGenerator VAR4 = VAR5.FUN3("");
    
                
                VAR4.FUN7(256);
    
                SecretKey VAR6 = VAR4.FUN4();
                byte[] VAR7 = VAR6.FUN5();
    
                SecretKeySpec VAR8 = new FUN6(VAR7, "");
    
                Cipher VAR9 = VAR10.FUN3("");
                VAR9.FUN7(VAR10.VAR11, VAR8);
    
                byte[] VAR12 = VAR9.FUN8(VAR3.getBytes(""));
    
                VAR2.writeLine(VAR2.FUN9(VAR12));
    
            }
        }
};