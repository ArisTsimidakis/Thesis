class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
    
                
                {
                    Properties VAR4 = new Properties();
                    FileInputStream VAR5 = null;
    
                    try
                    {
                        VAR5 = new FileInputStream("");
                        VAR4.FUN2(VAR5);
    
                        
                        VAR3 = VAR4.FUN3("");
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
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                String VAR11;
                if(System.FUN3("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR11 = "";
                }
                else
                {
                    
                    VAR11 = "";
                }
    
                if (VAR3 != null)
                {
                    
                    File VAR12 = new File(VAR11 + VAR3);
                    FileInputStream VAR13 = null;
                    InputStreamReader VAR14 = null;
                    BufferedReader VAR15 = null;
                    if (VAR12.exists() && VAR12.isFile())
                    {
                        try
                        {
                            VAR13 = new FileInputStream(VAR12);
                            VAR14 = new InputStreamReader(VAR13, "");
                            VAR15 = new BufferedReader(VAR14);
                            VAR7.writeLine(VAR15.readLine());
                        }
                        catch (IOException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
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
                            catch (IOException VAR6)
                            {
                                VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                            }
    
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
                        }
                    }
                }
    
            }
        }
};