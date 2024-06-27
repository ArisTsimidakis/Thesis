class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = ""; 
                
                {
                    Properties VAR5 = new Properties();
                    FileInputStream VAR6 = null;
                    try
                    {
                        VAR6 = new FileInputStream("");
                        VAR5.FUN2(VAR6);
                        
                        VAR2 = VAR5.FUN3("");
                    }
                    catch (IOException VAR7)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR4)
            {
                Connection VAR11 = null;
                Statement VAR12 = null;
                ResultSet VAR13 = null;
                try
                {
                    VAR11 = VAR3.FUN4();
                    VAR12 = VAR11.createStatement();
                    
                    VAR13 = VAR12.executeQuery(""+VAR2+"");
                    VAR3.writeLine(VAR13.FUN5()); 
                }
                catch (SQLException VAR14)
                {
                    VAR3.VAR8.log(VAR9.VAR10, "", VAR14);
                }
                finally
                {
                    try
                    {
                        if (VAR13 != null)
                        {
                            VAR13.close();
                        }
                    }
                    catch (SQLException VAR14)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR14);
                    }
    
                    try
                    {
                        if (VAR12 != null)
                        {
                            VAR12.close();
                        }
                    }
                    catch (SQLException VAR14)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR14);
                    }
    
                    try
                    {
                        if (VAR11 != null)
                        {
                            VAR11.close();
                        }
                    }
                    catch (SQLException VAR14)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR14);
                    }
                }
            }
        }
};