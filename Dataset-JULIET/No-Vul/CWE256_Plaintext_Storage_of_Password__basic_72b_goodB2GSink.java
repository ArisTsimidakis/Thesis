class VAR1{
    public void FUN1(VAR2<String> VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.remove(2);
    
            
            {
                Cipher VAR5 = VAR6.FUN2("");
    
                
                SecretKeySpec VAR7 = new FUN3("".getBytes(""), "");
                VAR5.FUN4(VAR6.VAR8, VAR7);
    
                String VAR9 = new String(VAR5.FUN5(VAR4.getBytes("")), "");
                VAR4 = VAR9;
            }
    
            Connection VAR10 = null;
            try
            {
                VAR10 = VAR11.getConnection("", "", VAR4);
            }
            catch (SQLException VAR12)
            {
                VAR13.VAR14.log(VAR15.VAR16, "", VAR12);
            }
            finally
            {
                try
                {
                    if (VAR10 != null)
                    {
                        VAR10.close();
                    }
                }
                catch (SQLException VAR12)
                {
                    VAR13.VAR14.log(VAR15.VAR16, "", VAR12);
                }
            }
    
        }
};