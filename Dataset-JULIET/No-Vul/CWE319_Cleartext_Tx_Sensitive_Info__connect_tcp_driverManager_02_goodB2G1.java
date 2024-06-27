class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (true)
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
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (false)
            {
                
                VAR7.writeLine("");
            }
            else
            {
    
                if (VAR2 != null)
                {
                    
                    {
                        Cipher VAR11 = VAR12.FUN2("");
                        
                        SecretKeySpec VAR13 = new FUN3("".getBytes(""), "");
                        VAR11.FUN4(VAR12.VAR14, VAR13);
                        VAR2 = new String(VAR11.FUN5(VAR2.getBytes("")), "");
                    }
                    Connection VAR15 = null;
                    PreparedStatement VAR16 = null;
                    ResultSet VAR17 = null;
                    try
                    {
                        
                        VAR15 = VAR18.getConnection("", "", VAR2);
                        VAR16 = VAR15.FUN6("");
                        VAR17 = VAR16.executeQuery();
                    }
                    catch (SQLException VAR19)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR19);
                    }
                    finally
                    {
                        try
                        {
                            if (VAR17 != null)
                            {
                                VAR17.close();
                            }
                        }
                        catch (SQLException VAR19)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR19);
                        }
    
                        try
                        {
                            if (VAR16 != null)
                            {
                                VAR16.close();
                            }
                        }
                        catch (SQLException VAR19)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR19);
                        }
    
                        try
                        {
                            if (VAR15 != null)
                            {
                                VAR15.close();
                            }
                        }
                        catch (SQLException VAR19)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR19);
                        }
                    }
                }
    
            }
        }
};