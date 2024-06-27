class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                
                
                VAR2 = System.FUN2("");
            }
            else
            {
                
                VAR2 = null;
            }
    
            Connection VAR5 = null;
    
            try
            {
                VAR5 = VAR3.FUN3();
    
                
                VAR5.FUN4(VAR2);
            }
            catch (SQLException VAR6)
            {
                VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
            }
            finally
            {
                try
                {
                    if (VAR5 != null)
                    {
                        VAR5.close();
                    }
                }
                catch (SQLException VAR6)
                {
                    VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                }
            }
    
        }
};