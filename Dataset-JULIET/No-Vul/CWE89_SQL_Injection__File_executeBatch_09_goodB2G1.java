class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = ""; 
                {
                    File VAR5 = new File("");
                    FileInputStream VAR6 = null;
                    InputStreamReader VAR7 = null;
                    BufferedReader VAR8 = null;
                    try
                    {
                        
                        VAR6 = new FileInputStream(VAR5);
                        VAR7 = new InputStreamReader(VAR6, "");
                        VAR8 = new BufferedReader(VAR7);
                        
                        
                        VAR2 = VAR8.readLine();
                    }
                    catch (IOException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                    finally
                    {
                        
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
                            if (VAR6 != null)
                            {
                                VAR6.close();
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
                        
                        VAR16 = VAR3.FUN2();
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