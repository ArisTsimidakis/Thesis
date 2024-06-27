class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3)
            {
                VAR2 = ""; 
                {
                    File VAR4 = new File("");
                    FileInputStream VAR5 = null;
                    InputStreamReader VAR6 = null;
                    BufferedReader VAR7 = null;
                    try
                    {
                        
                        VAR5 = new FileInputStream(VAR4);
                        VAR6 = new InputStreamReader(VAR5, "");
                        VAR7 = new BufferedReader(VAR6);
                        
                        
                        VAR2 = VAR7.readLine();
                    }
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
    
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
                            if (VAR5 != null)
                            {
                                VAR5.close();
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
                        
                        VAR16 = VAR9.FUN2();
                        VAR17 = VAR16.FUN3("");
                        for (int VAR18 = 0; VAR18 < VAR14.length; VAR18++)
                        {
                            VAR17.FUN4(1, VAR14[VAR18]);
                            VAR17.FUN5();
                        }
                        int VAR19[] = VAR17.FUN6();
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