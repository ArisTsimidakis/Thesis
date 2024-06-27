class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
    
                {
                    InputStreamReader VAR4 = null;
                    BufferedReader VAR5 = null;
    
                    
                    try
                    {
                        VAR4 = new InputStreamReader(System.in, "");
                        VAR5 = new BufferedReader(VAR4);
    
                        
                        VAR3 = VAR5.readLine();
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
                
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                
                if (VAR3 != null)
                {
                    File VAR11 = new File(VAR3);
                    FileInputStream VAR12 = null;
                    InputStreamReader VAR13 = null;
                    BufferedReader VAR14 = null;
                    if (VAR11.exists() && VAR11.isFile())
                    {
                        try
                        {
                            VAR12 = new FileInputStream(VAR11);
                            VAR13 = new InputStreamReader(VAR12, "");
                            VAR14 = new BufferedReader(VAR13);
                            VAR7.writeLine(VAR14.readLine());
                        }
                        catch (IOException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
                        finally
                        {
                            
                            try
                            {
                                if (VAR14 != null)
                                {
                                    VAR14.close();
                                }
                            }
                            catch (IOException VAR6)
                            {
                                VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                            }
    
                            try
                            {
                                if (VAR13 != null)
                                {
                                    VAR13.close();
                                }
                            }
                            catch (IOException VAR6)
                            {
                                VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                            }
    
                            try
                            {
                                if (VAR12 != null)
                                {
                                    VAR12.close();
                                }
                            }
                            catch (IOException VAR6)
                            {
                                VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                            }
                        }
                    }
                }
    
            }
        }
};