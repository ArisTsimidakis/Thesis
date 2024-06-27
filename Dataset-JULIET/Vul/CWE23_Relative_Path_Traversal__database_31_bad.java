class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
    
                
                {
                    Connection VAR4 = null;
                    PreparedStatement VAR5 = null;
                    ResultSet VAR6 = null;
    
                    try
                    {
                        
                        VAR4 = VAR7.FUN2();
    
                        
                        VAR5 = VAR4.FUN3("");
                        VAR6 = VAR5.executeQuery();
    
                        
                        VAR3 = VAR6.FUN4(1);
                    }
                    catch (SQLException VAR8)
                    {
                        VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
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
                        catch (SQLException VAR8)
                        {
                            VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (SQLException VAR8)
                        {
                            VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (SQLException VAR8)
                        {
                            VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                String VAR12;
                if(System.FUN5("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR12 = "";
                }
                else
                {
                    
                    VAR12 = "";
                }
    
                if (VAR3 != null)
                {
                    
                    File VAR13 = new File(VAR12 + VAR3);
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
                            VAR7.writeLine(VAR16.readLine());
                        }
                        catch (IOException VAR17)
                        {
                            VAR7.VAR9.log(VAR10.VAR11, "", VAR17);
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
                                VAR7.VAR9.log(VAR10.VAR11, "", VAR17);
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
                                VAR7.VAR9.log(VAR10.VAR11, "", VAR17);
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
                                VAR7.VAR9.log(VAR10.VAR11, "", VAR17);
                            }
                        }
                    }
                }
    
            }
        }
};