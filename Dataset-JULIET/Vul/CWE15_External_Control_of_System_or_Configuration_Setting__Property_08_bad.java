class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (FUN2())
            {
                
                
                VAR2 = System.FUN3("");
            }
            else
            {
                
                VAR2 = null;
            }
    
            Connection VAR3 = null;
    
            try
            {
                VAR3 = VAR4.FUN4();
    
                
                VAR3.FUN5(VAR2);
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