class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
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
            
    
            for (int VAR10 = 0; VAR10 < 1; VAR10++)
            {
                String VAR11;
                if(System.FUN2("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR11 = "";
                }
                else
                {
                    
                    VAR11 = "";
                }
                if (VAR2 != null)
                {
                    
                    File VAR12 = new File(VAR11 + VAR2);
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
                            VAR6.writeLine(VAR15.readLine());
                        }
                        catch (IOException VAR5)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
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
                            catch (IOException VAR5)
                            {
                                VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                            }
    
                            try
                            {
                                if (VAR14 != null)
                                {
                                    VAR14.close();
                                }
                            }
                            catch (IOException VAR5)
                            {
                                VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                            }
    
                            try
                            {
                                if (VAR13 != null)
                                {
                                    VAR13.close();
                                }
                            }
                            catch (IOException VAR5)
                            {
                                VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                            }
                        }
                    }
                }
            }
        }
};