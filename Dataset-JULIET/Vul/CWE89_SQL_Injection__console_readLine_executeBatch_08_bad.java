class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (FUN2())
            {
                VAR2 = ""; 
                {
                    InputStreamReader VAR3 = null;
                    BufferedReader VAR4 = null;
                    
                    try
                    {
                        VAR3 = new InputStreamReader(System.in, "");
                        VAR4 = new BufferedReader(VAR3);
                        
                        VAR2 = VAR4.readLine();
                    }
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
                    finally
                    {
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR5)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                        }
    
                        try
                        {
                            if (VAR3 != null)
                            {
                                VAR3.close();
                            }
                        }
                        catch (IOException VAR5)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                        }
                    }
                }
                
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (FUN2())
            {
                if (VAR2 != null)
                {
                    String VAR10[] = VAR2.split("");
                    int VAR11 = 0;
                    Connection VAR12 = null;
                    Statement VAR13 = null;
                    try
                    {
                        VAR12 = VAR6.FUN3();
                        VAR13 = VAR12.createStatement();
                        for (int VAR14 = 0; VAR14 < VAR10.length; VAR14++)
                        {
                            
                            VAR13.FUN4("" + VAR10[VAR14] + "");
                        }
                        int VAR15[] = VAR13.FUN5();
                        for (int VAR14 = 0; VAR14 < VAR10.length; VAR14++)
                        {
                            if (VAR15[VAR14] > 0)
                            {
                                VAR11++;
                            }
                        }
                        VAR6.writeLine("" + VAR11 + "" + VAR10.length + "");
                    }
                    catch (SQLException VAR16)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR16);
                    }
                    finally
                    {
                        try
                        {
                            if (VAR13 != null)
                            {
                                VAR13.close();
                            }
                        }
                        catch (SQLException VAR16)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR16);
                        }
    
                        try
                        {
                            if (VAR12 != null)
                            {
                                VAR12.close();
                            }
                        }
                        catch (SQLException VAR16)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR16);
                        }
                    }
                }
            }
        }
};