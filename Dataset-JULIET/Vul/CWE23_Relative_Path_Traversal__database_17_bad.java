class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
    
            
            {
                Connection VAR3 = null;
                PreparedStatement VAR4 = null;
                ResultSet VAR5 = null;
    
                try
                {
                    
                    VAR3 = VAR6.FUN2();
    
                    
                    VAR4 = VAR3.FUN3("");
                    VAR5 = VAR4.executeQuery();
    
                    
                    VAR2 = VAR5.FUN4(1);
                }
                catch (SQLException VAR7)
                {
                    VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
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
                    catch (SQLException VAR7)
                    {
                        VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (SQLException VAR7)
                    {
                        VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (SQLException VAR7)
                    {
                        VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
                }
            }
    
            for (int VAR11 = 0; VAR11 < 1; VAR11++)
            {
                String VAR12;
                if(System.FUN5("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR12 = "";
                }
                else
                {
                    
                    VAR12 = "";
                }
                if (VAR2 != null)
                {
                    
                    File VAR13 = new File(VAR12 + VAR2);
                    FileInputStream VAR14 = null;
                    InputStreamReader VAR15 = null;
                    BufferedReader VAR16 = null;
                    if (VAR13.exists() && VAR13.isFile())
                    {
                        try
                        {
                            VAR14 = new FileInputStream(VAR13);
                            VAR15 = new InputStreamReader(VAR14, "");
                            VAR16 = new BufferedReader(VAR15);
                            VAR6.writeLine(VAR16.readLine());
                        }
                        catch (IOException VAR17)
                        {
                            VAR6.VAR8.log(VAR9.VAR10, "", VAR17);
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
                            catch (IOException VAR17)
                            {
                                VAR6.VAR8.log(VAR9.VAR10, "", VAR17);
                            }
    
                            try
                            {
                                if (VAR15 != null)
                                {
                                    VAR15.close();
                                }
                            }
                            catch (IOException VAR17)
                            {
                                VAR6.VAR8.log(VAR9.VAR10, "", VAR17);
                            }
    
                            try
                            {
                                if (VAR14 != null)
                                {
                                    VAR14.close();
                                }
                            }
                            catch (IOException VAR17)
                            {
                                VAR6.VAR8.log(VAR9.VAR10, "", VAR17);
                            }
                        }
                    }
                }
            }
        }
};