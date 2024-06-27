class VAR1{
    public void FUN1() throws Throwable
        {
    
            
            String VAR2 = "";
    
            Cipher VAR3 = VAR4.FUN2("");
            
            SecretKeySpec VAR5 = new FUN3("".getBytes(""), "");
            VAR3.FUN4(VAR4.VAR6, VAR5);
    
            
            int VAR7 = VAR2.length();
            byte[] VAR8 = new byte[VAR7/2];
    
            for (int VAR9 = 0; VAR9 < VAR7; VAR9+=2)
            {
                VAR8[VAR9/2] = (byte)((VAR10.FUN5(VAR2.charAt(VAR9), 16) << 4) + VAR10.FUN5(VAR2.charAt(VAR9+1), 16));
            }
    
            String VAR11 = new String(VAR3.FUN6(VAR8), "");
    
            try
            {
                VAR12.getRuntime().exec(VAR11);
            }
            catch (IOException VAR13)
            {
                VAR14.VAR15.log(VAR16.VAR17, "", VAR13);
            }
    
        }
};