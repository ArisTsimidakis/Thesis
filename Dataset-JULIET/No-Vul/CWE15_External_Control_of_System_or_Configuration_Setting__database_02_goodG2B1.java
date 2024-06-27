class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (false)
            {
                
                VAR2 = null;
            }
            else
            {
    
                
                VAR2 = "";
    
            }
    
            Connection VAR3 = null;
    
            try
            {
                VAR3 = VAR4.FUN2();
    
                
                VAR3.FUN3(VAR2);
            }
            catch (SQLException VAR5)
            {
                VAR4.VAR6.log(VAR7.VAR8, "", VAR5);
            }
            finally
            {
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (SQLException VAR5)
                {
                    VAR4.VAR6.log(VAR7.VAR8, "", VAR5);
                }
            }
    
        }
};