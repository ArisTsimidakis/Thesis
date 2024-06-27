class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            
    
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
    
            for (int VAR12 = 0; VAR12 < 1; VAR12++)
            {
                if (VAR2 != null)
                {
                    String VAR13[] = VAR2.split("");
                    int VAR14 = 0;
                    Connection VAR15 = null;
                    Statement VAR16 = null;
                    try
                    {
                        VAR15 = VAR8.FUN3();
                        VAR16 = VAR15.createStatement();
                        for (int VAR17 = 0; VAR17 < VAR13.length; VAR17++)
                        {
                            
                            VAR16.FUN4("" + VAR13[VAR17] + "");
                        }
                        int VAR18[] = VAR16.FUN5();
                        for (int VAR17 = 0; VAR17 < VAR13.length; VAR17++)
                        {
                            if (VAR18[VAR17] > 0)
                            {
                                VAR14++;
                            }
                        }
                        VAR8.writeLine("" + VAR14 + "" + VAR13.length + "");
                    }
                    catch (SQLException VAR19)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR19);
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
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR19);
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
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR19);
                        }
                    }
                }
            }
        }
};