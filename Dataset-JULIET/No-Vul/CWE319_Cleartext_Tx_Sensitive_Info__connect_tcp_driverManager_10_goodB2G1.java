class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = ""; 
                
                {
                    Socket VAR5 = null;
                    BufferedReader VAR6 = null;
                    InputStreamReader VAR7 = null;
                    try
                    {
                        
                        VAR5 = new Socket("", 39544);
                        
                        
                        VAR7 = new InputStreamReader(VAR5.getInputStream(), "");
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
    
                        
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
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
    
            if (VAR3.VAR12)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                if (VAR2 != null)
                {
                    
                    {
                        Cipher VAR13 = VAR14.FUN2("");
                        
                        SecretKeySpec VAR15 = new FUN3("".getBytes(""), "");
                        VAR13.FUN4(VAR14.VAR16, VAR15);
                        VAR2 = new String(VAR13.FUN5(VAR2.getBytes("")), "");
                    }
                    Connection VAR17 = null;
                    PreparedStatement VAR18 = null;
                    ResultSet VAR19 = null;
                    try
                    {
                        
                        VAR17 = VAR20.getConnection("", "", VAR2);
                        VAR18 = VAR17.FUN6("");
                        VAR19 = VAR18.executeQuery();
                    }
                    catch (SQLException VAR21)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR21);
                    }
                    finally
                    {
                        try
                        {
                            if (VAR19 != null)
                            {
                                VAR19.close();
                            }
                        }
                        catch (SQLException VAR21)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR21);
                        }
    
                        try
                        {
                            if (VAR18 != null)
                            {
                                VAR18.close();
                            }
                        }
                        catch (SQLException VAR21)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR21);
                        }
    
                        try
                        {
                            if (VAR17 != null)
                            {
                                VAR17.close();
                            }
                        }
                        catch (SQLException VAR21)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR21);
                        }
                    }
                }
    
            }
        }
};