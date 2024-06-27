class VAR1{
    public void FUN1(VAR2<String> VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.remove(2);
    
            if (VAR4 != null)
            {
                KerberosPrincipal VAR5 = new FUN2("");
                
                {
                    Cipher VAR6 = VAR7.FUN3("");
                    
                    SecretKeySpec VAR8 = new FUN4("".getBytes(""), "");
                    VAR6.FUN5(VAR7.VAR9, VAR8);
                    VAR4 = new String(VAR6.FUN6(VAR4.getBytes("")), "");
                }
                KerberosKey VAR10 = new FUN7(VAR5, VAR4.FUN8(), null);
                VAR11.writeLine(VAR10.FUN9());
            }
    
        }
};