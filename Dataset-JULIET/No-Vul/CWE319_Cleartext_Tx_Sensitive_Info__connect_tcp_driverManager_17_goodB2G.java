class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
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
    
            for (int VAR11 = 0; VAR11 < 1; VAR11++)
            {
                if (VAR2 != null)
                {
                    
                    {
                        Cipher VAR12 = VAR13.FUN2("");
                        
                        SecretKeySpec VAR14 = new FUN3("".getBytes(""), "");
                        VAR12.FUN4(VAR13.VAR15, VAR14);
                        VAR2 = new String(VAR12.FUN5(VAR2.getBytes("")), "");
                    }
                    Connection VAR16 = null;
                    PreparedStatement VAR17 = null;
                    ResultSet VAR18 = null;
                    try
                    {
                        
                        VAR16 = VAR19.getConnection("", "", VAR2);
                        VAR17 = VAR16.FUN6("");
                        VAR18 = VAR17.executeQuery();
                    }
                    catch (SQLException VAR20)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR20);
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
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR20);
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
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR20);
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
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR20);
                        }
                    }
                }
            }
        }
};