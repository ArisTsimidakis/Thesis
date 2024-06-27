class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3)
            {
                VAR2 = ""; 
                {
                    InputStreamReader VAR4 = null;
                    BufferedReader VAR5 = null;
                    
                    try
                    {
                        VAR4 = new InputStreamReader(System.in, "");
                        VAR5 = new BufferedReader(VAR4);
                        
                        VAR2 = VAR5.readLine();
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
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
                    }
                }
                
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR11)
            {
                
                VAR7.writeLine("");
            }
            else
            {
    
                Connection VAR12 = null;
                PreparedStatement VAR13 = null;
    
                try
                {
                    
                    VAR12 = VAR7.FUN2();
                    VAR13 = VAR12.FUN3("");
                    VAR13.FUN4(1, VAR2);
    
                    int VAR14 = VAR13.executeUpdate();
    
                    VAR7.writeLine("" + VAR14 + "");
                }
                catch (SQLException VAR15)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR15);
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
                    catch (SQLException VAR15)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR15);
                    }
    
                    try
                    {
                        if (VAR12 != null)
                        {
                            VAR12.close();
                        }
                    }
                    catch (SQLException VAR15)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR15);
                    }
                }
    
            }
        }
};