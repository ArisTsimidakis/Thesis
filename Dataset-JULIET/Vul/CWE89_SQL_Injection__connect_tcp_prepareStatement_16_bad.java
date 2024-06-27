class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            while (true)
            {
                VAR2 = ""; 
                
                {
                    Socket VAR3 = null;
                    BufferedReader VAR4 = null;
                    InputStreamReader VAR5 = null;
                    try
                    {
                        
                        VAR3 = new Socket("", 39544);
                        
                        VAR5 = new InputStreamReader(VAR3.getInputStream(), "");
                        VAR4 = new BufferedReader(VAR5);
                        
                        VAR2 = VAR4.readLine();
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                    finally
                    {
                        
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
                            if (VAR3 != null)
                            {
                                VAR3.close();
                            }
                        }
                        catch (IOException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
                    }
                }
                break;
            }
    
            while (true)
            {
                Connection VAR11 = null;
                PreparedStatement VAR12 = null;
                try
                {
                    
                    VAR11 = VAR7.FUN2();
                    VAR12 = VAR11.FUN3(""+VAR2+"");
                    Boolean VAR13 = VAR12.execute();
                    if (VAR13)
                    {
                        VAR7.writeLine("" + VAR2 + "");
                    }
                    else
                    {
                        VAR7.writeLine("" + VAR2);
                    }
                }
                catch (SQLException VAR14)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR14);
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
                    catch (SQLException VAR14)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR14);
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
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR14);
                    }
                }
                break;
            }
        }
};