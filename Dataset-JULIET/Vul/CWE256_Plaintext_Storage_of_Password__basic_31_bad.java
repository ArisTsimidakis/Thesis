class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
    
                
                Properties VAR4 = new Properties();
                FileInputStream VAR5 = null;
                try
                {
                    VAR5 = new FileInputStream("");
                    VAR4.FUN2(VAR5);
    
                    VAR3 = VAR4.FUN3("");
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
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
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                }
    
                
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                
    
                Connection VAR11 = null;
                try
                {
                    VAR11 = VAR12.getConnection("", "", VAR3);
                }
                catch (SQLException VAR13)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR13);
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
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR13);
                    }
                }
    
            }
        }
};