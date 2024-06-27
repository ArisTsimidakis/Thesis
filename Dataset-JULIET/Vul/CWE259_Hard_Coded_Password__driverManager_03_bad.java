class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (5 == 5)
            {
                
                VAR2 = "";
            }
            else
            {
                
                VAR2 = null;
            }
    
            Connection VAR3 = null;
            PreparedStatement VAR4 = null;
            ResultSet VAR5 = null;
    
            if (VAR2 != null)
            {
                try
                {
                    
                    VAR3 = VAR6.getConnection("", "", VAR2);
                    VAR4 = VAR3.FUN2("");
                    VAR5 = VAR4.executeQuery();
                }
                catch (SQLException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
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
                    catch (SQLException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (SQLException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (SQLException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                }
            }
    
        }
};