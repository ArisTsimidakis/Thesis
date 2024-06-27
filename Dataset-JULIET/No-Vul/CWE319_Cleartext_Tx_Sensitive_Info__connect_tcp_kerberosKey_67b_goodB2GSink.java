class VAR1{
    public void FUN1(VAR2.Container VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.VAR5;
    
            if (VAR4 != null)
            {
                KerberosPrincipal VAR6 = new FUN2("");
                
                {
                    Cipher VAR7 = VAR8.FUN3("");
                    
                    SecretKeySpec VAR9 = new FUN4("".getBytes(""), "");
                    VAR7.FUN5(VAR8.VAR10, VAR9);
                    VAR4 = new String(VAR7.FUN6(VAR4.getBytes("")), "");
                }
                KerberosKey VAR11 = new FUN7(VAR6, VAR4.FUN8(), null);
                VAR12.writeLine(VAR11.FUN9());
            }
    
        }
};