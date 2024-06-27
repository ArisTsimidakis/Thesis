class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4==5)
            {
                VAR2 = ""; 
                
                {
                    URLConnection VAR5 = (new FUN2("VAR6:
                    BufferedReader VAR7 = null;
                    InputStreamReader VAR8 = null;
                    try
                    {
                        VAR8 = new InputStreamReader(VAR5.getInputStream(), "");
                        VAR7 = new BufferedReader(VAR8);
                        
                        
                        VAR2 = VAR7.readLine();
                    }
                    catch (IOException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
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
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
    
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR4==5)
            {
                Connection VAR13 = null;
                PreparedStatement VAR14 = null;
                ResultSet VAR15 = null;
                try
                {
                    
                    VAR13 = VAR16.getConnection("", "", VAR2);
                    VAR14 = VAR13.FUN3("");
                    VAR15 = VAR14.executeQuery();
                }
                catch (SQLException VAR17)
                {
                    VAR3.VAR10.log(VAR11.VAR12, "", VAR17);
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
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR17);
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
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR17);
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
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR17);
                    }
                }
            }
        }
};