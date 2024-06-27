class VAR1{
    public void FUN1(String VAR2 ) throws Throwable
        {
    
            
            {
                Cipher VAR3 = VAR4.FUN2("");
    
                
                SecretKeySpec VAR5 = new FUN3("".getBytes(""), "");
                VAR3.FUN4(VAR4.VAR6, VAR5);
    
                String VAR7 = new String(VAR3.FUN5(VAR2.getBytes("")), "");
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