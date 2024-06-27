class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
    
                
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
    
                        
                        VAR3 = VAR6.readLine();
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
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                if (VAR3 != null)
                {
                    String VAR13[] = VAR3.split("");
                    int VAR14 = 0;
                    Connection VAR15 = null;
                    PreparedStatement VAR16 = null;
                    try
                    {
                        
                        VAR15 = VAR9.FUN3();
                        VAR16 = VAR15.FUN4("");
                        for (int VAR17 = 0; VAR17 < VAR13.length; VAR17++)
                        {
                            VAR16.FUN5(1, VAR13[VAR17]);
                            VAR16.FUN6();
                        }
                        int VAR18[] = VAR16.FUN7();
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