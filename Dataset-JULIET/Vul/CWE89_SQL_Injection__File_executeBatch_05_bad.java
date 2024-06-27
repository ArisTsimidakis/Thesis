class VAR1{
    public void FUN1() throws Throwable
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
    
            if (VAR3)
            {
                if (VAR2 != null)
                {
                    String VAR13[] = VAR2.split("");
                    int VAR14 = 0;
                    Connection VAR15 = null;
                    Statement VAR16 = null;
                    try
                    {
                        VAR15 = VAR9.FUN2();
                        VAR16 = VAR15.createStatement();
                        for (int VAR17 = 0; VAR17 < VAR13.length; VAR17++)
                        {
                            
                            VAR16.FUN3("" + VAR13[VAR17] + "");
                        }
                        int VAR18[] = VAR16.FUN4();
                        for (int VAR17 = 0; VAR17 < VAR13.length; VAR17++)
                        {
                            if (VAR18[VAR17] > 0)
                            {
                                VAR14++;
                            }
                        }
                        VAR9.writeLine("" + VAR14 + "" + VAR13.length + "");
                    }
                    catch (SQLException VAR19)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR19);
                    }
                    finally
                    {
                        try
                        {
                            if (VAR16 != null)
                            {
                                VAR16.close();
                            }
                        }
                        catch (SQLException VAR19)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR19);
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
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR19);
                        }
                    }
                }
            }
        }
};