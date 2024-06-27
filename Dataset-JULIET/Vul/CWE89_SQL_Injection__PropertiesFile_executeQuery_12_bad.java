class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if(VAR3.FUN2())
            {
                VAR2 = ""; 
                
                {
                    Properties VAR4 = new Properties();
                    FileInputStream VAR5 = null;
                    try
                    {
                        VAR5 = new FileInputStream("");
                        VAR4.FUN3(VAR5);
                        
                        VAR2 = VAR4.FUN4("");
                    }
                    catch (IOException VAR6)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
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
                            VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                        }
                    }
                }
            }
            else
            {
    
                
                VAR2 = "";
    
            }
    
            if(VAR3.FUN2())
            {
                Connection VAR10 = null;
                Statement VAR11 = null;
                ResultSet VAR12 = null;
                try
                {
                    VAR10 = VAR3.FUN5();
                    VAR11 = VAR10.createStatement();
                    
                    VAR12 = VAR11.executeQuery(""+VAR2+"");
                    VAR3.writeLine(VAR12.FUN6()); 
                }
                catch (SQLException VAR13)
                {
                    VAR3.VAR7.log(VAR8.VAR9, "", VAR13);
                }
                finally
                {
                    try
                    {
                        if (VAR12 != null)
                        {
                            VAR12.close();
                        }
                    }
                    catch (SQLException VAR13)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR13);
                    }
    
                    try
                    {
                        if (VAR11 != null)
                        {
                            VAR11.close();
                        }
                    }
                    catch (SQLException VAR13)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR13);
                    }
    
                    try
                    {
                        if (VAR10 != null)
                        {
                            VAR10.close();
                        }
                    }
                    catch (SQLException VAR13)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR13);
                    }
                }
            }
            else
            {
    
                Connection VAR10 = null;
                PreparedStatement VAR11 = null;
                ResultSet VAR12 = null;
    
                try
                {
                    
                    VAR10 = VAR3.FUN5();
                    VAR11 = VAR10.FUN7("");
                    VAR11.FUN8(1, VAR2);
    
                    VAR12 = VAR11.executeQuery();
    
                    VAR3.writeLine(VAR12.FUN6()); 
                }
                catch (SQLException VAR13)
                {
                    VAR3.VAR7.log(VAR8.VAR9, "", VAR13);
                }
                finally
                {
                    try
                    {
                        if (VAR12 != null)
                        {
                            VAR12.close();
                        }
                    }
                    catch (SQLException VAR13)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR13);
                    }
    
                    try
                    {
                        if (VAR11 != null)
                        {
                            VAR11.close();
                        }
                    }
                    catch (SQLException VAR13)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR13);
                    }
    
                    try
                    {
                        if (VAR10 != null)
                        {
                            VAR10.close();
                        }
                    }
                    catch (SQLException VAR13)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR13);
                    }
                }
    
            }
        }
};