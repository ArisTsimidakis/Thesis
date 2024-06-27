class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                
                VAR2 = null;
            }
            else
            {
    
                
                
                VAR2 = "";
    
            }
    
            if (VAR3.VAR5)
            {
                Connection VAR6 = null;
                PreparedStatement VAR7 = null;
                ResultSet VAR8 = null;
                try
                {
                    
                    VAR6 = VAR9.getConnection("", "", VAR2);
                    VAR7 = VAR6.FUN2("");
                    VAR8 = VAR7.executeQuery();
                }
                catch (SQLException VAR10)
                {
                    VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                }
                finally
                {
                    try
                    {
                        if (VAR8 != null)
                        {
                            VAR8.close();
                        }
                    }
                    catch (SQLException VAR10)
                    {
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                    }
    
                    try
                    {
                        if (VAR7 != null)
                        {
                            VAR7.close();
                        }
                    }
                    catch (SQLException VAR10)
                    {
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                    }
    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (SQLException VAR10)
                    {
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                    }
                }
            }
        }
};