class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (5==5)
            {
                VAR2 = ""; 
                {
                    InputStreamReader VAR3 = null;
                    BufferedReader VAR4 = null;
                    
                    try
                    {
                        VAR3 = new InputStreamReader(System.in, "");
                        VAR4 = new BufferedReader(VAR3);
                        
                        VAR2 = VAR4.readLine();
                    }
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
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
                        catch (IOException VAR5)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                        }
    
                        try
                        {
                            if (VAR3 != null)
                            {
                                VAR3.close();
                            }
                        }
                        catch (IOException VAR5)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                        }
                    }
                }
                
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (5!=5)
            {
                
                VAR6.writeLine("");
            }
            else
            {
    
                Connection VAR10 = null;
                PreparedStatement VAR11 = null;
    
                try
                {
                    
                    VAR10 = VAR6.FUN2();
                    VAR11 = VAR10.FUN3("");
                    VAR11.FUN4(1, VAR2);
    
                    int VAR12 = VAR11.executeUpdate();
    
                    VAR6.writeLine("" + VAR12 + "");
                }
                catch (SQLException VAR13)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR13);
                }
                finally
                {
                    try
                    {
                        if (VAR11 != null)
                        {
                            VAR11.close();
                        }
                    }
                    catch (SQLException VAR13)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR13);
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
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR13);
                    }
                }
    
            }
        }
};