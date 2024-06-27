class VAR1{
    public void FUN1(String VAR2[] ) throws Throwable
        {
            String VAR3 = VAR2[2];
    
            
            {
                Cipher VAR4 = VAR5.FUN2("");
    
                
                SecretKeySpec VAR6 = new FUN3("".getBytes(""), "");
                VAR4.FUN4(VAR5.VAR7, VAR6);
    
                String VAR8 = new String(VAR4.FUN5(VAR3.getBytes("")), "");
                VAR3 = VAR8;
            }
    
            Connection VAR9 = null;
            try
            {
                VAR9 = VAR10.getConnection("", "", VAR3);
            }
            catch (SQLException VAR11)
            {
                VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
            }
            finally
            {
                try
                {
                    if (VAR9 != null)
                    {
                        VAR9.close();
                    }
                }
                catch (SQLException VAR11)
                {
                    VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
                }
            }
    
        }
};