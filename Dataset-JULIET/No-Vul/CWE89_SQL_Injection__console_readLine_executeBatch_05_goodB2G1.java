class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            if (VAR3)
            {
                VAR2 = ""; 
                {
                    InputStreamReader VAR4 = null;
                    BufferedReader VAR5 = null;
                    
                    try
                    {
                        VAR4 = new InputStreamReader(System.in, "");
                        VAR5 = new BufferedReader(VAR4);
                        
                        VAR2 = VAR5.readLine();
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
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
                        catch (IOException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
                    }
                }
                
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR11)
            {
                
                VAR7.writeLine("");
            }
            else
            {
    
                if (VAR2 != null)
                {
                    String VAR12[] = VAR2.split("");
                    int VAR13 = 0;
                    Connection VAR14 = null;
                    PreparedStatement VAR15 = null;
                    try
                    {
                        
                        VAR14 = VAR7.FUN2();
                        VAR15 = VAR14.FUN3("");
                        for (int VAR16 = 0; VAR16 < VAR12.length; VAR16++)
                        {
                            VAR15.FUN4(1, VAR12[VAR16]);
                            VAR15.FUN5();
                        }
                        int VAR17[] = VAR15.FUN6();
                        for (int VAR16 = 0; VAR16 < VAR12.length; VAR16++)
                        {
                            if (VAR17[VAR16] > 0)
                            {
                                VAR13++;
                            }
                        }
                        VAR7.writeLine("" + VAR13 + "" + VAR12.length + "");
                    }
                    catch (SQLException VAR18)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR18);
                    }
                    finally
                    {
                        try
                        {
                            if (VAR15 != null)
                            {
                                VAR15.close();
                            }
                        }
                        catch (SQLException VAR18)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR18);
                        }
    
                        try
                        {
                            if (VAR14 != null)
                            {
                                VAR14.close();
                            }
                        }
                        catch (SQLException VAR18)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR18);
                        }
                    }
                }
    
            }
        }
};