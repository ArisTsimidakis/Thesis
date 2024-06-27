class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
    
            
            {
                URLConnection VAR3 = (new FUN2("VAR4:
                BufferedReader VAR5 = null;
                InputStreamReader VAR6 = null;
    
                try
                {
                    VAR6 = new InputStreamReader(VAR3.getInputStream(), "");
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
                }
            }
    
            for (int VAR12 = 0; VAR12 < 1; VAR12++)
            {
                if (VAR2 != null)
                {
                    
                    {
                        Cipher VAR13 = VAR14.FUN3("");
                        
                        SecretKeySpec VAR15 = new FUN4("".getBytes(""), "");
                        VAR13.FUN5(VAR14.VAR16, VAR15);
                        VAR2 = new String(VAR13.FUN6(VAR2.getBytes("")), "");
                    }
                    Connection VAR17 = null;
                    PreparedStatement VAR18 = null;
                    ResultSet VAR19 = null;
                    try
                    {
                        
                        VAR17 = VAR20.getConnection("", "", VAR2);
                        VAR18 = VAR17.FUN7("");
                        VAR19 = VAR18.executeQuery();
                    }
                    catch (SQLException VAR21)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR21);
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
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR21);
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
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR21);
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
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR21);
                        }
                    }
                }
            }
        }
};