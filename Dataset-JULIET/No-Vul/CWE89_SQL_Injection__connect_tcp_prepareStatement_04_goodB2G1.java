class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3)
            {
                VAR2 = ""; 
                
                {
                    Socket VAR4 = null;
                    BufferedReader VAR5 = null;
                    InputStreamReader VAR6 = null;
                    try
                    {
                        
                        VAR4 = new Socket("", 39544);
                        
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
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR12)
            {
                
                VAR8.writeLine("");
            }
            else
            {
    
                Connection VAR13 = null;
                PreparedStatement VAR14 = null;
    
                try
                {
                    
                    VAR13 = VAR8.FUN2();
                    VAR14 = VAR13.FUN3("");
                    VAR14.FUN4(1, VAR2);
    
                    Boolean VAR15 = VAR14.execute();
    
                    if (VAR15)
                    {
                        VAR8.writeLine("" + VAR2 + "");
                    }
                    else
                    {
                        VAR8.writeLine("" + VAR2);
                    }
                }
                catch (SQLException VAR16)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR16);
                }
                finally
                {
                    try
                    {
                        if (VAR14 != null)
                        {
                            VAR14.close();
                        }
                    }
                    catch (SQLException VAR16)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR16);
                    }
    
                    try
                    {
                        if (VAR13 != null)
                        {
                            VAR13.close();
                        }
                    }
                    catch (SQLException VAR16)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR16);
                    }
                }
    
            }
        }
};