class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
    
            VAR2 = VAR3.VAR4; 
    
            {
                File VAR5 = new File("");
                FileInputStream VAR6 = null;
                InputStreamReader VAR7 = null;
                BufferedReader VAR8 = null;
    
                try
                {
                    
                    VAR6 = new FileInputStream(VAR5);
                    VAR7 = new InputStreamReader(VAR6, "");
                    VAR8 = new BufferedReader(VAR7);
    
                    
                    
                    String VAR9 = VAR8.readLine();
                    if (VAR9 != null) 
                    {
                        try
                        {
                            VAR2 = VAR3.parseInt(VAR9.trim());
                        }
                        catch(NumberFormatException VAR10)
                        {
                            VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
                        }
                    }
                }
                catch (IOException VAR15)
                {
                    VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                }
                finally
                {
                    
                    try
                    {
                        if (VAR8 != null)
                        {
                            VAR8.close();
                        }
                    }
                    catch (IOException VAR15)
                    {
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                    }
    
                    try
                    {
                        if (VAR7 != null)
                        {
                            VAR7.close();
                        }
                    }
                    catch (IOException VAR15)
                    {
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                    }
    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR15)
                    {
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                    }
                }
            }
    
            Container VAR16 = new FUN2();
            VAR16.VAR17 = VAR2;
            (new FUN3()).FUN4(VAR16  );
        }
};