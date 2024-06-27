class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                
                
                VAR2 = "";
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR4)
            {
                Connection VAR5 = null;
                PreparedStatement VAR6 = null;
                ResultSet VAR7 = null;
                try
                {
                    
                    VAR5 = VAR8.getConnection("", "", VAR2);
                    VAR6 = VAR5.FUN2("");
                    VAR7 = VAR6.executeQuery();
                }
                catch (SQLException VAR9)
                {
                    VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                }
                finally
                {
                    try
                    {
                        if (VAR7 != null)
                        {
                            VAR7.close();
                        }
                    }
                    catch (SQLException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (SQLException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (SQLException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                }
            }
        }
};