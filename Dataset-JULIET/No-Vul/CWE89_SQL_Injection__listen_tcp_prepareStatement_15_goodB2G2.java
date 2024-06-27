class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            switch (6)
            {
            case 6:
                VAR2 = ""; 
                
                {
                    ServerSocket VAR3 = null;
                    Socket VAR4 = null;
                    BufferedReader VAR5 = null;
                    InputStreamReader VAR6 = null;
                    
                    try
                    {
                        VAR3 = new FUN2(39543);
                        VAR4 = VAR3.accept();
                        
                        VAR6 = new InputStreamReader(VAR4.getInputStream(), "");
                        VAR5 = new BufferedReader(VAR6);
                        
                        VAR2 = VAR5.readLine();
                    }
                    catch (IOException VAR7)
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
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR7)
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
                        catch (IOException VAR7)
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
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
                    }
                }
                break;
            default:
                
                VAR2 = null;
                break;
            }
    
            switch (7)
            {
            case 7:
                Connection VAR12 = null;
                PreparedStatement VAR13 = null;
                try
                {
                    
                    VAR12 = VAR8.FUN3();
                    VAR13 = VAR12.FUN4("");
                    VAR13.FUN5(1, VAR2);
                    Boolean VAR14 = VAR13.execute();
                    if (VAR14)
                    {
                        VAR8.writeLine("" + VAR2 + "");
                    }
                    else
                    {
                        VAR8.writeLine("" + VAR2);
                    }
                }
                catch (SQLException VAR15)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR15);
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
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR15);
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
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR15);
                    }
                }
                break;
            default:
                
                VAR8.writeLine("");
                break;
            }
        }
};