class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                
                
                VAR3 = System.FUN2("");
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                Connection VAR4 = null;
    
                try
                {
                    VAR4 = VAR5.FUN3();
    
                    
                    VAR4.FUN4(VAR3);
                }
                catch (SQLException VAR6)
                {
                    VAR5.VAR7.log(VAR8.VAR9, "", VAR6);
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
                    catch (SQLException VAR6)
                    {
                        VAR5.VAR7.log(VAR8.VAR9, "", VAR6);
                    }
                }
    
            }
        }
};