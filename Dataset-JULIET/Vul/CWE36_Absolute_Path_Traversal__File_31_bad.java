class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
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
    
                        
                        
                        VAR3 = VAR7.readLine();
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
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                
                if (VAR3 != null)
                {
                    File VAR4 = new File(VAR3);
                    FileInputStream VAR13 = null;
                    InputStreamReader VAR14 = null;
                    BufferedReader VAR15 = null;
                    if (VAR4.exists() && VAR4.isFile())
                    {
                        try
                        {
                            VAR13 = new FileInputStream(VAR4);
                            VAR14 = new InputStreamReader(VAR13, "");
                            VAR15 = new BufferedReader(VAR14);
                            VAR9.writeLine(VAR15.readLine());
                        }
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                            catch (IOException VAR8)
                            {
                                VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                            }
    
                            try
                            {
                                if (VAR14 != null)
                                {
                                    VAR14.close();
                                }
                            }
                            catch (IOException VAR8)
                            {
                                VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                            }
    
                            try
                            {
                                if (VAR13 != null)
                                {
                                    VAR13.close();
                                }
                            }
                            catch (IOException VAR8)
                            {
                                VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                            }
                        }
                    }
                }
    
            }
        }
};