class VAR1{
    public void FUN1(VAR2.Container VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.VAR5;
    
            Connection VAR6 = null;
            PreparedStatement VAR7 = null;
            ResultSet VAR8 = null;
    
            if (VAR4 != null)
            {
                try
                {
                    
                    VAR6 = VAR9.getConnection("", "", VAR4);
                    VAR7 = VAR6.FUN2("");
                    VAR8 = VAR7.executeQuery();
                }
                catch (SQLException VAR10)
                {
                    VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
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
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
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
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
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
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
                    }
                }
            }
    
        }
};