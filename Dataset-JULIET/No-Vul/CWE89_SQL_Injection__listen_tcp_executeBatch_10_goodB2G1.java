class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = ""; 
                
                {
                    ServerSocket VAR5 = null;
                    Socket VAR6 = null;
                    BufferedReader VAR7 = null;
                    InputStreamReader VAR8 = null;
                    
                    try
                    {
                        VAR5 = new FUN2(39543);
                        VAR6 = VAR5.accept();
                        
                        VAR8 = new InputStreamReader(VAR6.getInputStream(), "");
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
    
                        
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
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
                    String VAR14[] = VAR2.split("");
                    int VAR15 = 0;
                    Connection VAR16 = null;
                    PreparedStatement VAR17 = null;
                    try
                    {
                        
                        VAR16 = VAR3.FUN3();
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
                        VAR3.writeLine("" + VAR15 + "" + VAR14.length + "");
                    }
                    catch (SQLException VAR20)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR20);
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
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR20);
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
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR20);
                        }
                    }
                }
    
            }
        }
};