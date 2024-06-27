class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                
                VAR2 = null;
            }
            else
            {
    
                
                VAR2 = "";
    
            }
    
            Connection VAR4 = null;
    
            try
            {
                VAR4 = VAR3.FUN3();
    
                
                VAR4.FUN4(VAR2);
            }
            catch (SQLException VAR5)
            {
                VAR3.VAR6.log(VAR7.VAR8, "", VAR5);
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
                catch (SQLException VAR5)
                {
                    VAR3.VAR6.log(VAR7.VAR8, "", VAR5);
                }
            }
    
        }
};