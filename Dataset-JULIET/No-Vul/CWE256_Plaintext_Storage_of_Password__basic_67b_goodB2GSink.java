class VAR1{
    public void FUN1(VAR2.Container VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.VAR5;
    
            
            {
                Cipher VAR6 = VAR7.FUN2("");
    
                
                SecretKeySpec VAR8 = new FUN3("".getBytes(""), "");
                VAR6.FUN4(VAR7.VAR9, VAR8);
    
                String VAR10 = new String(VAR6.FUN5(VAR4.getBytes("")), "");
                VAR4 = VAR10;
            }
    
            Connection VAR11 = null;
            try
            {
                VAR11 = VAR12.getConnection("", "", VAR4);
            }
            catch (SQLException VAR13)
            {
                VAR14.VAR15.log(VAR16.VAR17, "", VAR13);
            }
            finally
            {
                try
                {
                    if (VAR11 != null)
                    {
                        VAR11.close();
                    }
                }
                catch (SQLException VAR13)
                {
                    VAR14.VAR15.log(VAR16.VAR17, "", VAR13);
                }
            }
    
        }
};