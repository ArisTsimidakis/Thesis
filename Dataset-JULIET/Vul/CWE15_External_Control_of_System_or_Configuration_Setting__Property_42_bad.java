class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2 = FUN2();
    
            Connection VAR3 = null;
    
            try
            {
                VAR3 = VAR4.FUN3();
    
                
                VAR3.FUN4(VAR2);
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