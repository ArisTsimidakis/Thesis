class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = ""; 
                
                {
                    Socket VAR5 = null;
                    BufferedReader VAR6 = null;
                    InputStreamReader VAR7 = null;
                    try
                    {
                        
                        VAR5 = new Socket("", 39544);
                        
                        VAR7 = new InputStreamReader(VAR5.getInputStream(), "");
                        VAR6 = new BufferedReader(VAR7);
                        
                        VAR2 = VAR6.readLine();
                    }
                    catch (IOException VAR8)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR12)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                if (VAR2 != null)
                {
                    String VAR13[] = VAR2.split("");
                    int VAR14 = 0;
                    Connection VAR15 = null;
                    PreparedStatement VAR16 = null;
                    try
                    {
                        
                        VAR15 = VAR3.FUN2();
                        VAR16 = VAR15.FUN3("");
                        for (int VAR17 = 0; VAR17 < VAR13.length; VAR17++)
                        {
                            VAR16.FUN4(1, VAR13[VAR17]);
                            VAR16.FUN5();
                        }
                        int VAR18[] = VAR16.FUN6();
                        for (int VAR17 = 0; VAR17 < VAR13.length; VAR17++)
                        {
                            if (VAR18[VAR17] > 0)
                            {
                                VAR14++;
                            }
                        }
                        VAR3.writeLine("" + VAR14 + "" + VAR13.length + "");
                    }
                    catch (SQLException VAR19)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR19);
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
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR19);
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
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR19);
                        }
                    }
                }
    
            }
        }
};