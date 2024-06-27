class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
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
                
                VAR2 = null;
            }
    
            if (VAR3.FUN4())
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                if (VAR2 != null)
                {
                    
                    {
                        Cipher VAR12 = VAR13.FUN5("");
                        
                        SecretKeySpec VAR14 = new FUN6("".getBytes(""), "");
                        VAR12.FUN7(VAR13.VAR15, VAR14);
                        VAR2 = new String(VAR12.FUN8(VAR2.getBytes("")), "");
                    }
                    Connection VAR16 = null;
                    PreparedStatement VAR17 = null;
                    ResultSet VAR18 = null;
                    try
                    {
                        
                        VAR16 = VAR19.getConnection("", "", VAR2);
                        VAR17 = VAR16.FUN9("");
                        VAR18 = VAR17.executeQuery();
                    }
                    catch (SQLException VAR20)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR20);
                    }
                    finally
                    {
                        try
                        {
                            if (VAR18 != null)
                            {
                                VAR18.close();
                            }
                        }
                        catch (SQLException VAR20)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR20);
                        }
    
                        try
                        {
                            if (VAR17 != null)
                            {
                                VAR17.close();
                            }
                        }
                        catch (SQLException VAR20)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR20);
                        }
    
                        try
                        {
                            if (VAR16 != null)
                            {
                                VAR16.close();
                            }
                        }
                        catch (SQLException VAR20)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR20);
                        }
                    }
                }
    
            }
        }
};