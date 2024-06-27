class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
            {
                File VAR3 = new File("");
                FileInputStream VAR4 = null;
                InputStreamReader VAR5 = null;
                BufferedReader VAR6 = null;
    
                try
                {
                    
                    VAR4 = new FileInputStream(VAR3);
                    VAR5 = new InputStreamReader(VAR4, "");
                    VAR6 = new BufferedReader(VAR5);
    
                    
                    
                    VAR2 = VAR6.readLine();
                }
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
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
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                }
            }
    
            for (int VAR12 = 0; VAR12 < 1; VAR12++)
            {
                String VAR13;
                if(System.FUN2("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR13 = "";
                }
                else
                {
                    
                    VAR13 = "";
                }
                if (VAR2 != null)
                {
                    
                    File VAR3 = new File(VAR13 + VAR2);
                    FileInputStream VAR14 = null;
                    InputStreamReader VAR15 = null;
                    BufferedReader VAR16 = null;
                    if (VAR3.exists() && VAR3.isFile())
                    {
                        try
                        {
                            VAR14 = new FileInputStream(VAR3);
                            VAR15 = new InputStreamReader(VAR14, "");
                            VAR16 = new BufferedReader(VAR15);
                            VAR8.writeLine(VAR16.readLine());
                        }
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
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
                            catch (IOException VAR7)
                            {
                                VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                            }
    
                            try
                            {
                                if (VAR15 != null)
                                {
                                    VAR15.close();
                                }
                            }
                            catch (IOException VAR7)
                            {
                                VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                            }
    
                            try
                            {
                                if (VAR14 != null)
                                {
                                    VAR14.close();
                                }
                            }
                            catch (IOException VAR7)
                            {
                                VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                            }
                        }
                    }
                }
            }
        }
};