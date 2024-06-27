class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            switch (6)
            {
            case 6:
                VAR2 = ""; 
                
                {
                    ServerSocket VAR3 = null;
                    Socket VAR4 = null;
                    BufferedReader VAR5 = null;
                    InputStreamReader VAR6 = null;
                    try
                    {
                        
                        VAR3 = new FUN2(39543);
                        VAR4 = VAR3.accept();
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
    
                        try
                        {
                            if (VAR3 != null)
                            {
                                VAR3.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
                    }
                }
                break;
            default:
                
                VAR2 = null;
                break;
            }
    
            switch (7)
            {
            case 7:
                if (VAR2 != null)
                {
                    
                    {
                        Cipher VAR12 = VAR13.FUN3("");
                        
                        SecretKeySpec VAR14 = new FUN4("".getBytes(""), "");
                        VAR12.FUN5(VAR13.VAR15, VAR14);
                        VAR2 = new String(VAR12.FUN6(VAR2.getBytes("")), "");
                    }
                    Connection VAR16 = null;
                    PreparedStatement VAR17 = null;
                    ResultSet VAR18 = null;
                    try
                    {
                        
                        VAR16 = VAR19.getConnection("", "", VAR2);
                        VAR17 = VAR16.FUN7("");
                        VAR18 = VAR17.executeQuery();
                    }
                    catch (SQLException VAR20)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR20);
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
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR20);
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
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR20);
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
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR20);
                        }
                    }
                }
                break;
            default:
                
                VAR8.writeLine("");
                break;
            }
        }
};