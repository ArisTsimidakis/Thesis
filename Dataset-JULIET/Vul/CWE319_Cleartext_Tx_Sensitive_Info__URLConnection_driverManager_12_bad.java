class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if(VAR3.FUN2())
            {
                VAR2 = ""; 
                
                {
                    URLConnection VAR4 = (new FUN3("VAR5:
                    BufferedReader VAR6 = null;
                    InputStreamReader VAR7 = null;
                    try
                    {
                        VAR7 = new InputStreamReader(VAR4.getInputStream(), "");
                        VAR6 = new BufferedReader(VAR7);
                        
                        
                        VAR2 = VAR6.readLine();
                    }
                    catch (IOException VAR8)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                Connection VAR12 = null;
                PreparedStatement VAR13 = null;
                ResultSet VAR14 = null;
                try
                {
                    
                    VAR12 = VAR15.getConnection("", "", VAR2);
                    VAR13 = VAR12.FUN4("");
                    VAR14 = VAR13.executeQuery();
                }
                catch (SQLException VAR16)
                {
                    VAR3.VAR9.log(VAR10.VAR11, "", VAR16);
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
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR16);
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
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR16);
                    }
    
                    try
                    {
                        if (VAR12 != null)
                        {
                            VAR12.close();
                        }
                    }
                    catch (SQLException VAR16)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR16);
                    }
                }
            }
            else
            {
    
                if (VAR2 != null)
                {
                    
                    {
                        Cipher VAR17 = VAR18.FUN5("");
                        
                        SecretKeySpec VAR19 = new FUN6("".getBytes(""), "");
                        VAR17.FUN7(VAR18.VAR20, VAR19);
                        VAR2 = new String(VAR17.FUN8(VAR2.getBytes("")), "");
                    }
                    Connection VAR12 = null;
                    PreparedStatement VAR13 = null;
                    ResultSet VAR14 = null;
                    try
                    {
                        
                        VAR12 = VAR15.getConnection("", "", VAR2);
                        VAR13 = VAR12.FUN4("");
                        VAR14 = VAR13.executeQuery();
                    }
                    catch (SQLException VAR16)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR16);
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
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR16);
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
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR16);
                        }
    
                        try
                        {
                            if (VAR12 != null)
                            {
                                VAR12.close();
                            }
                        }
                        catch (SQLException VAR16)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR16);
                        }
                    }
                }
    
            }
        }
};