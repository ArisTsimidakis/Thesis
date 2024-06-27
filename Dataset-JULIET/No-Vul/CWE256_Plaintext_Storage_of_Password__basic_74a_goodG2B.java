class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
    
            
            Properties VAR3 = new Properties();
    
            FileInputStream VAR4 = null;
            try
            {
                VAR4 = new FileInputStream("");
                VAR3.FUN2(VAR4);
    
                VAR2 = VAR3.FUN3("");
            }
            catch (IOException VAR5)
            {
                VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
            }
            finally
            {
                
                try
                {
                    if (VAR4 != null)
                    {
                        VAR4.close();
                    }
                }
                catch (IOException VAR5)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                }
            }
    
            
            {
                Cipher VAR10 = VAR11.FUN4("");
    
                
                SecretKeySpec VAR12 = new FUN5("".getBytes(""), "");
                VAR10.FUN6(VAR11.VAR13, VAR12);
    
                String VAR14 = new String(VAR10.FUN7(VAR2.getBytes("")), "");
                VAR2 = VAR14;
            }
    
            HashMap<VAR15,String> VAR16 = new HashMap<VAR15,String>();
            VAR16.FUN8(0, VAR2);
            VAR16.FUN8(1, VAR2);
            VAR16.FUN8(2, VAR2);
            (new FUN9()).FUN10(VAR16  );
        }
};