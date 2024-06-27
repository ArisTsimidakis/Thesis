class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
    
            
            {
                URLConnection VAR3 = (new FUN2("VAR4:
                BufferedReader VAR5 = null;
                InputStreamReader VAR6 = null;
    
                try
                {
                    VAR6 = new InputStreamReader(VAR3.getInputStream(), "");
                    VAR5 = new BufferedReader(VAR6);
    
                    
                    
                    VAR2 = VAR5.readLine();
                }
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
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
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
    
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
                }
            }
    
            for (int VAR12 = 0; VAR12 < 1; VAR12++)
            {
                String VAR13;
                if(System.FUN3("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR13 = "";
                }
                else
                {
                    
                    VAR13 = "";
                }
                if (VAR2 != null)
                {
                    
                    File VAR14 = new File(VAR13 + VAR2);
                    FileInputStream VAR15 = null;
                    InputStreamReader VAR16 = null;
                    BufferedReader VAR17 = null;
                    if (VAR14.exists() && VAR14.isFile())
                    {
                        try
                        {
                            VAR15 = new FileInputStream(VAR14);
                            VAR16 = new InputStreamReader(VAR15, "");
                            VAR17 = new BufferedReader(VAR16);
                            VAR8.writeLine(VAR17.readLine());
                        }
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
                        finally
                        {
                            
                            try
                            {
                                if (VAR17 != null)
                                {
                                    VAR17.close();
                                }
                            }
                            catch (IOException VAR7)
                            {
                                VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                            }
    
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
                        }
                    }
                }
            }
        }
};