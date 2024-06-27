class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3)
            {
                
                VAR2 = null;
            }
            else
            {
    
                
                VAR2 = "";
    
            }
    
            if (VAR4)
            {
                Connection VAR5 = null;
                Statement VAR6 = null;
                ResultSet VAR7 = null;
                try
                {
                    VAR5 = VAR8.FUN2();
                    VAR6 = VAR5.createStatement();
                    
                    VAR7 = VAR6.executeQuery(""+VAR2+"");
                    VAR8.writeLine(VAR7.FUN3()); 
                }
                catch (SQLException VAR9)
                {
                    VAR8.VAR10.log(VAR11.VAR12, "", VAR9);
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
                        VAR8.VAR10.log(VAR11.VAR12, "", VAR9);
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
                        VAR8.VAR10.log(VAR11.VAR12, "", VAR9);
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
                        VAR8.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                }
            }
        }
};