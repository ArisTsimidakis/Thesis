class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
    
                
                {
                    URLConnection VAR4 = (new FUN2("VAR5:
                    BufferedReader VAR6 = null;
                    InputStreamReader VAR7 = null;
    
                    try
                    {
                        VAR7 = new InputStreamReader(VAR4.getInputStream(), "");
                        VAR6 = new BufferedReader(VAR7);
    
                        
                        
                        VAR3 = VAR6.readLine();
                    }
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                Connection VAR13 = null;
                PreparedStatement VAR14 = null;
                ResultSet VAR15 = null;
                try
                {
                    
                    VAR13 = VAR16.getConnection("", "", VAR3);
                    VAR14 = VAR13.FUN3("");
                    VAR15 = VAR14.executeQuery();
                }
                catch (SQLException VAR17)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR17);
                }
                finally
                {
                    try
                    {
                        if (VAR15 != null)
                        {
                            VAR15.close();
                        }
                    }
                    catch (SQLException VAR17)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR17);
                    }
    
                    try
                    {
                        if (VAR14 != null)
                        {
                            VAR14.close();
                        }
                    }
                    catch (SQLException VAR17)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR17);
                    }
    
                    try
                    {
                        if (VAR13 != null)
                        {
                            VAR13.close();
                        }
                    }
                    catch (SQLException VAR17)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR17);
                    }
                }
    
            }
        }
};