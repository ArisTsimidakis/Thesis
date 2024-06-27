class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2 = FUN2();
    
            
            {
                Cipher VAR3 = VAR4.FUN3("");
    
                
                SecretKeySpec VAR5 = new FUN4("".getBytes(""), "");
                VAR3.FUN5(VAR4.VAR6, VAR5);
    
                String VAR7 = new String(VAR3.FUN6(VAR2.getBytes("")), "");
                VAR2 = VAR7;
            }
    
            Connection VAR8 = null;
            try
            {
                VAR8 = VAR9.getConnection("", "", VAR2);
            }
            catch (SQLException VAR10)
            {
                VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
            }
            finally
            {
                try
                {
                    if (VAR8 != null)
                    {
                        VAR8.close();
                    }
                }
                catch (SQLException VAR10)
                {
                    VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
                }
            }
    
        }
};