class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
    
            
            {
                Socket VAR3 = null;
                BufferedReader VAR4 = null;
                InputStreamReader VAR5 = null;
    
                try
                {
                    
                    VAR3 = new Socket("", 39544);
    
                    
    
                    VAR5 = new InputStreamReader(VAR3.getInputStream(), "");
                    VAR4 = new BufferedReader(VAR5);
    
                    
                    VAR2 = VAR4.readLine();
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
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
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
    
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
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                }
            }
    
            for (int VAR11 = 0; VAR11 < 1; VAR11++)
            {
                String VAR12;
                if(System.FUN2("").toLowerCase().indexOf("") >= 0)
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
                            VAR7.writeLine(VAR16.readLine());
                        }
                        catch (IOException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
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
                            catch (IOException VAR6)
                            {
                                VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                            }
    
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
                        }
                    }
                }
            }
        }
};