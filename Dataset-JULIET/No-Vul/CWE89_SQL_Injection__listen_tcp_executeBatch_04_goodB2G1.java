class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3)
            {
                VAR2 = ""; 
                
                {
                    ServerSocket VAR4 = null;
                    Socket VAR5 = null;
                    BufferedReader VAR6 = null;
                    InputStreamReader VAR7 = null;
                    
                    try
                    {
                        VAR4 = new FUN2(39543);
                        VAR5 = VAR4.accept();
                        
                        VAR7 = new InputStreamReader(VAR5.getInputStream(), "");
                        VAR6 = new BufferedReader(VAR7);
                        
                        VAR2 = VAR6.readLine();
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
    
                        
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR13)
            {
                
                VAR9.writeLine("");
            }
            else
            {
    
                if (VAR2 != null)
                {
                    String VAR14[] = VAR2.split("");
                    int VAR15 = 0;
                    Connection VAR16 = null;
                    PreparedStatement VAR17 = null;
                    try
                    {
                        
                        VAR16 = VAR9.FUN3();
                        VAR17 = VAR16.FUN4("");
                        for (int VAR18 = 0; VAR18 < VAR14.length; VAR18++)
                        {
                            VAR17.FUN5(1, VAR14[VAR18]);
                            VAR17.FUN6();
                        }
                        int VAR19[] = VAR17.FUN7();
                        for (int VAR18 = 0; VAR18 < VAR14.length; VAR18++)
                        {
                            if (VAR19[VAR18] > 0)
                            {
                                VAR15++;
                            }
                        }
                        VAR9.writeLine("" + VAR15 + "" + VAR14.length + "");
                    }
                    catch (SQLException VAR20)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR20);
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
                        catch (SQLException VAR20)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR20);
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
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR20);
                        }
                    }
                }
    
            }
        }
};