class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
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
    
            if (VAR3.VAR13)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                if (VAR2 != null)
                {
                    
                    {
                        Cipher VAR14 = VAR15.FUN3("");
                        
                        SecretKeySpec VAR16 = new FUN4("".getBytes(""), "");
                        VAR14.FUN5(VAR15.VAR17, VAR16);
                        VAR2 = new String(VAR14.FUN6(VAR2.getBytes("")), "");
                    }
                    Connection VAR18 = null;
                    PreparedStatement VAR19 = null;
                    ResultSet VAR20 = null;
                    try
                    {
                        
                        VAR18 = VAR21.getConnection("", "", VAR2);
                        VAR19 = VAR18.FUN7("");
                        VAR20 = VAR19.executeQuery();
                    }
                    catch (SQLException VAR22)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR22);
                    }
                    finally
                    {
                        try
                        {
                            if (VAR20 != null)
                            {
                                VAR20.close();
                            }
                        }
                        catch (SQLException VAR22)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR22);
                        }
    
                        try
                        {
                            if (VAR19 != null)
                            {
                                VAR19.close();
                            }
                        }
                        catch (SQLException VAR22)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR22);
                        }
    
                        try
                        {
                            if (VAR18 != null)
                            {
                                VAR18.close();
                            }
                        }
                        catch (SQLException VAR22)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR22);
                        }
                    }
                }
    
            }
        }
};